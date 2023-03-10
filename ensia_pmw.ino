const int LEDPIN = 13;
 void setup () {
 pinMode ( LEDPIN , OUTPUT ) ;
 }
 void loop () {
 analogWrite ( LEDPIN ,10) ;
 delay (3000) ;
 analogWrite ( LEDPIN ,100) ;
 delay (3000) ;
 analogWrite ( LEDPIN ,254) ;
 delay (3000) ;
 }