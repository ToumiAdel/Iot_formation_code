const int INTERRUPT_PIN = 2;
 const int ledPin = 13;
 int buttonState = 0;
 volatile bool ledState = HIGH ;
 void setup () {
 Serial.begin (9600) ;
 pinMode ( ledPin , OUTPUT ) ;
 pinMode ( INTERRUPT_PIN , INPUT_PULLUP ) ;
 attachInterrupt ( digitalPinToInterrupt ( INTERRUPT_PIN ) , myISR , CHANGE ) ;
 }
 void loop () {

 }
 void myISR () {
 if (! digitalRead ( INTERRUPT_PIN ) ) {
 ledState = ! ledState ;
 digitalWrite ( ledPin , ledState ) ;
 }

 }