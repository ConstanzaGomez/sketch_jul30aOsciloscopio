//variable 
int whiteLed=9;
int brightness=225; //brillo
int dt=500;



void setup() {
  // put your setup code here, to run once:
pinMode(whiteLed, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(whiteLed,brightness);
delay(dt);
}