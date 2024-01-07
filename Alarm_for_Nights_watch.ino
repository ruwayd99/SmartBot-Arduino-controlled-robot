int trig= 11;
int echo = 10;
long distance;
long duration;

void setup() {
pinMode (3, OUTPUT);
pinMode (4, OUTPUT);

pinMode (trig, OUTPUT);
pinMode (echo, INPUT);
Serial.begin(9600);
}

void loop() {

  digitalWrite(trig,LOW);
  delayMicroseconds (2);
  
  digitalWrite(trig,HIGH);
  delayMicroseconds (10);
  digitalWrite(trig,LOW);


duration = pulseIn (echo,HIGH);

distance = duration / 58.2;

delay (2);

digitalWrite (trig, HIGH);

delayMicroseconds (10);
 
 Serial.print("Distance: ");
  Serial.println(distance);
 
if (distance <= 100) 
{ 
digitalWrite (3, HIGH);
digitalWrite (4, HIGH);
}
 else {
digitalWrite (3, LOW);
digitalWrite (4, LOW);
}
}


