

const int A_1A = 8;
const int A_1B = 9;

const int B_1A = 5;
const int B_1B = 6;
void setup() {
  // put your setup code here, to run once:
  pinMode(A_1A, OUTPUT);
  pinMode(A_1B, OUTPUT);
  pinMode(B_1A, OUTPUT);
  pinMode(B_1B, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(A_1A, LOW);
  digitalWrite(A_1B, HIGH);
  digitalWrite(B_1A, LOW);
  digitalWrite(B_1B, HIGH);
  delay(3000);

  digitalWrite(A_1A, HIGH);
  digitalWrite(A_1B, LOW);
  digitalWrite(B_1A, HIGH);
  digitalWrite(B_1B, LOW);
  delay(3000);
  delay(3000);


}
