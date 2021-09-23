#include "Wire.h"

const int MPU_ADDR = 0x68;
const int MAXLEN = 7;

int16_t data[MAXLEN];

void setup() {
  Wire.begin();
  Wire.beginTransmission(MPU_ADDR);
  Wire.write(0x6B);
  Wire.write(0);
  Wire.endTransmission(true);

  Wire.beginTransmission(MPU_ADDR);
  Wire.write(0x1c);
  Wire.write(0x08);
  Wire.endTransmission(true);

  Serial.begin(9600);

}

void loop() {
  get_data();
  for(byte i = 0; i < MAXLEN; ++i){
    Serial.print(data[i]);
    Serial.print("\t");
  }
  Serial.println();
  delay(500);

}

void get_data(){
  Wire.beginTransmission(MPU_ADDR);
  Wire.write(0x3B);
  Wire.endTransmission(false);
  Wire.requestFrom(MPU_ADDR, 2 * MAXLEN, true);
  for(byte i = 0; i < MAXLEN; ++i){
    data[i] = Wire.read() << 8 | Wire.read();
  }
  
}
