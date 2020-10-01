#define verde1 10
#define verde2 13
#define amarillo1 9
#define amarillo2 12
#define rojo1 8
#define rojo2 11

void setup() {
  pinMode(verde1, OUTPUT);
  pinMode(verde2, OUTPUT);
  pinMode(amarillo1, OUTPUT);
  pinMode(amarillo2, OUTPUT);
  pinMode(rojo1, OUTPUT);
  pinMode(rojo2, OUTPUT);
}

void loop() {
  digitalWrite(rojo1, HIGH);
  digitalWrite(verde2, HIGH);
  delay(5000);
  digitalWrite(verde2, LOW);
  digitalWrite(amarillo2, HIGH);
  delay(1000);
  digitalWrite(amarillo2, LOW);
  digitalWrite(rojo1, LOW);
  digitalWrite(rojo2, HIGH);
  digitalWrite(verde1, HIGH);
  delay(5000);
  digitalWrite(amarillo1, HIGH);
  digitalWrite(verde1, LOW);
  delay(1000);
  digitalWrite(amarillo1, LOW);
  digitalWrite(rojo2, LOW);
}
