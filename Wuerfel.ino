/* Author: Mario Luongo & Omar Zahir
   Zweck: Die Applikation ist dazu fähig eine Zufallszahl zu würfeln.
   Datum: 16.04.2019
*/
  int v1;  // darin wird die Zufallszahl gespeichert
  
  const int buttonPin = 12; // Pin Nr. für den Button
  int buttonState = 0;
   

void setup() { 
  // put your setup code here, to run once:
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(buttonPin, INPUT); // High or Low
}

void loop() {

  buttonState = digitalRead(buttonPin); // Der Zustand des Button im Pin 12 wird gelesen.

  if (buttonState == HIGH){  // Falls der Button gedruckt wird

  v1 = rand() % 7; //Zufällige Zahl von 1 bis 6

  wurf(); // Wurfanimation

 // Switch

/* Jeder Case wird durch geganden bis die sie mit der zufällige Zahl übereinstimmt.
   Wenn z.B. die Zufallszahl 4 ist, dann wird Case 4 aktiviert und es werden die ersten vier
   Lämpchen leuchnten. */
 switch (v1) {
        case 1: digitalWrite(1, HIGH);
                break;
        case 2: digitalWrite(1, HIGH);
                digitalWrite(2, HIGH);
                break;
        case 3: digitalWrite(1, HIGH);
                digitalWrite(2, HIGH);
                digitalWrite(3, HIGH);
                break;
        case 4: digitalWrite(1, HIGH);
                digitalWrite(2, HIGH);
                digitalWrite(3, HIGH);
                digitalWrite(4, HIGH);
                break;
        case 5: digitalWrite(1, HIGH);
                digitalWrite(2, HIGH);
                digitalWrite(3, HIGH);
                digitalWrite(4, HIGH);
                digitalWrite(5, HIGH);
                break;            
        case 6: digitalWrite(1, HIGH);
                digitalWrite(2, HIGH);
                digitalWrite(3, HIGH);
                digitalWrite(4, HIGH);
                digitalWrite(5, HIGH);
                digitalWrite(6, HIGH);
                break;
    }
  
  }

}

// Dies ist eine Animation vor dem Wurf
  void wurf(){

      // Leuchte 1te LED-Lampe
      digitalWrite(1, HIGH);
      delay(100);
      digitalWrite(1, LOW);
      
      // Leuchte 2ste LED-Lampe
      digitalWrite(2, HIGH);
      delay(100);
      digitalWrite(2, LOW);
      
      // Leuchte 3ste LED-Lampe
      digitalWrite(3, HIGH);
      delay(100);
      digitalWrite(3, LOW);
      
      // Leuchte 4te LED-Lampe
      digitalWrite(4, HIGH);
      delay(100);
      digitalWrite(4, LOW);
      
      // Leuchte 5te LED-Lampe
      digitalWrite(5, HIGH);
      delay(100);
      digitalWrite(5, LOW);
      
      // Leuchte 6te LED-Lampe
      digitalWrite(6, HIGH);
      delay(100);
      digitalWrite(6, LOW);
      delay(2000);
    
    }
