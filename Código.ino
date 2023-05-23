#include <Servo.h>

Servo motor_derecho;
Servo motor_izquierdo;

// Funciones para los movimientos del robot
void defrente();
void giro_derecha();
void giro_izquierda();

void setup() {
  motor_derecho.attach(9);
  motor_izquierdo.attach(8);
  
  // Instrucciones para el movimiento del robot
  
  // inicio
  defrente();
  delay(2000);
  giro_izquierda();
  delay(600);

  // curva uno
  defrente();
  delay(2000);
  giro_derecha();
  delay(1000);

  // curva dos
  defrente();
  delay(3000);
  giro_izquierda();
  delay(700);

  // curva tres
  defrente();
  delay(2000);
  giro_izquierda();
  delay(700);

  // curva cuatro
  defrente();
  delay(2000);
  giro_derecha();
  delay(1000);

  // curva cinco
  defrente();
  delay(6000);
  giro_izquierda();
  delay(900);

  // curva seis
  defrente();
  delay(2000);
  giro_izquierda();
  delay(600);

  // curva siete
  defrente();
  delay(1000);
  giro_izquierda();
  delay(500);

  // curva ocho
  defrente();
  delay(1000);
  giro_izquierda();
  delay(500);

  // curva nueve
  defrente();
  delay(1000);
  giro_izquierda();
  delay(500);

  // curva diez
  defrente();
  delay(1000);
  giro_izquierda();
  delay(600);

  // curva once
  defrente();
  delay(2000);
  giro_derecha();
  delay(950);

  // curva doce
  defrente();
  delay(7000);
  giro_derecha();
  delay(600);

  // curva trece
  defrente();
  delay(3000);
  giro_izquierda();
  delay(800);
}

void loop() {
  // El bucle principal está vacío ya que no se necesita realizar ninguna acción continua
}

void defrente() {
  // Mover los motores hacia adelante
  motor_derecho.write(180);
  motor_izquierdo.write(0);
}

void giro_derecha() {
  // Girar hacia la derecha
  motor_derecho.write(90);
  motor_izquierdo.write(0);
}

void giro_izquierda() {
  // Girar hacia la izquierda
  motor_derecho.write(190);
  motor_izquierdo.write(90);
}
