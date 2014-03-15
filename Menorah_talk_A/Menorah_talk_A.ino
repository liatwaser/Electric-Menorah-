// set up the Menorah output pins
int ledPin2 = 2; 
int ledPin3 = 3;
int ledPin4 = 4; 
int ledPin5 = 5;
int ledPin6 = 6; 
int ledPin7 = 7;
int ledPin8 = 8; 
int ledPin9 = 9;
int ledPin10 = 10; 

//data store the byte sent from serial port
int dataByte;

void setup() {
  //setting pins as outputs
  pinMode (ledPin2, OUTPUT);
  pinMode (ledPin3, OUTPUT);
  pinMode (ledPin4, OUTPUT);
  pinMode (ledPin5, OUTPUT);
  pinMode (ledPin6, OUTPUT);
  pinMode (ledPin7, OUTPUT);
  pinMode (ledPin8, OUTPUT);
  pinMode (ledPin9, OUTPUT);
  pinMode (ledPin10, OUTPUT);
  // start sending data
  Serial.begin(9600);
}

void loop() {
  //check if there's something in the serial buffer
  if (Serial.available() > 0) {
    //read the byte and store it 
    dataByte = Serial.read();

    if (dataByte == 'W') {
      digitalWrite( ledPin2, HIGH);
    }
    if (dataByte == 'A') {
      digitalWrite( ledPin3, HIGH);
    }
    if (dataByte == 'S') {
      digitalWrite( ledPin4, HIGH);
    }
    if (dataByte == 'D') {
      digitalWrite( ledPin5, HIGH);
    }
    if (dataByte == 'F') {
      digitalWrite( ledPin6, HIGH);
    }
    if (dataByte == 'G') {
      digitalWrite( ledPin7, HIGH);
    }
    if (dataByte == '1') {
      digitalWrite( ledPin8, HIGH);
    }
    if (dataByte == '2') {
      digitalWrite( ledPin9, HIGH);
    }
    if (dataByte == '3') {
      digitalWrite( ledPin10, HIGH);
    }
    //if 4 is sent everything is off 
    if (dataByte == '4') {
      digitalWrite(ledPin2, LOW);
      digitalWrite(ledPin3, LOW);
      digitalWrite(ledPin4, LOW);
      digitalWrite(ledPin5, LOW);
      digitalWrite(ledPin6, LOW);
      digitalWrite(ledPin7, LOW);
      digitalWrite(ledPin8, LOW);
      digitalWrite(ledPin9, LOW);
      digitalWrite(ledPin10, LOW);
    }
  }
}


