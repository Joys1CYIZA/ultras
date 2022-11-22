int echo = 2;
int trig = 3;
int Led_pin = 9;
float distance ;
int percentage;
int duration;
float max_height = 50;
float min_height = 0;
 
void setup() {
  pinMode(echo, INPUT);
  pinMode(trig, OUTPUT);
  pinMode(Led_pin, OUTPUT);
  Serial.begin(9600);


}

void loop() {
  digitalWrite(trig, LOW);
  delay(20);
  digitalWrite(trig, HIGH);
  delay(50);
  digitalWrite(trig, LOW);
  duration = pulseIn(echo, HIGH);
  digitalWrite(Led_pin, LOW);
  delay(500);
percentage= 100 - 50 * distance / 100;
  
  distance = duration * 0.034 / 2;

  Serial.println(percentage);
  Serial.println("%");

  if ( distance> 0 && distance<= 15) 
  {
    Serial.println("a tank is empty");
    digitalWrite(Led_pin, LOW);

  }
  else if( distance> 15 && distance<= 50){
    Serial.println("a tank is not empty");
    digitalWrite(Led_pin, HIGH);

     

  }
  }
   
