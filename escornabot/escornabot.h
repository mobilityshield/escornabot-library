/*
Librería escornabot por Prudencio Luna y Pedro Ruiz
V 0.12 (28/02/2018): segunda versión del programa, incorpora control de motores paso a paso (avances, retrocesos, giros, parada)
, elección del tipo de excitación de bobinas, control de leds, zumbador, botonera y bluetooth.
*/

#ifndef escornabot_h
#define escornabot_h

enum buttonLed {forward=1,left=2,backward=3,right=4,central=5};

// Descripción de la clase Escornabot
class escornabot {
  //Definición de elementos públicos
  public:
  // constructor:
 	escornabot();//sin pasar parámetros
	escornabot(int kindStep);// pasa el tipo de paso 1 (un sola bobina a la vez), paso 2 (dos bobinas a la vez)

	const static int numberButtons=5;
	const static int numberLeds=5;

  // procedimiento para mover los motores:
  void drive (float laps, int speed);
	//procemiento para girar:
	void turn (float laps, int speed);
    // procedimiento para parar:
  void stop();
	//procedimiento para encender y apagar leds
  void ledON(int ledNumber);
  void ledOFF(int ledNumber);
  int ledState(int ledNumber);

	//procedimiento para encender y apagar el zumbador
  void buzzON(void);
  void buzzOFF(void);
	//procedimiento para saber el botón que se ha pulsado
	int pushButton(void);
	//procedimiento que devuelve valor enviado por bluetooth
	int blueT(void);
	//procedimiento que devuelve la versión de la librería
	int escornabot::version(void);
  protected:


  //Definición de elementos privados
  private:


};

#endif //escornabot_h
