#include <Servo.h>  // on inclut la bibliothèque servo

Servo servoMoteur;   // on crée un objet servo appelé servoMoteur

void setup(){ 
  // on associe le servo à la broche 2 d'Arduino
  servoMoteur.attach(2);
}
 
void loop(){
  // on déplace le servo à la position 0º
  servoMoteur.write(0);
  delay(1000);  // pause de 1 seconde
  
  // on déplace le servo à la position 90º
  servoMoteur.write(90);
  delay(1000);  // pause 1 seconde
  
  // on déplace le servo à la position 180º
  servoMoteur.write(180);
  delay(1000);  // pause 1 seconde
}