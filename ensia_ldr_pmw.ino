const int LED_PIN = 13 ;
 const int LDR_PIN = A0 ;
 volatile int ldrvalue = 0 ;
 void setup () {
 // put your setup code here , to run once :
 Serial.begin (9600) ;
 pinMode ( LED_PIN , OUTPUT ) ;
 pinMode (LDR_PIN,INPUT ) ;

 }

 void loop () {
 // put your main code here , to run repeatedly :
 ldrvalue = analogRead(LDR_PIN) ;
 Serial.println(ldrvalue);
 analogWrite(LED_PIN, 255 - ldrvalue ) ;
 delay(100);
 }