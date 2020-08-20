const int an_in =A0;
const int LED1=3;
const int LED2=2;
int val=0;


void setup() {
  // put your setup code here, to run once:
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  Serial.begin(9600);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  int b=255-(val/4);
  val=analogRead(an_in);
  Serial.println(val);
  analogWrite(LED1,val/4);
  analogWrite(LED2,b);
  delay(500);

}
