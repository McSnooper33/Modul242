/* Author: Omar Zahir & Mario Luongo
   Zweck: Die Applikation ist dazu fähig die Zeit bis fünf Minuten zu messen
   Datum: 16.04.2019
*/

int gruen[] = {1,2,3,4,5}; // Pins 1-5 für die grüne Lämpchen
int rot[] = {6,7,8,9,10};  // Pins 6-10 für die grüne Lämpchen

const int buttonPin = 12; // Pin Nr. für den Button
int buttonState = 0;

void setup() {
  //gruen = Sekunden
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);

  //rot = Minuten
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);

  //Button
  pinMode(buttonPin, INPUT); // High or Low
}

void loop() {
  // put your main code here, to run repeatedly:
  
  buttonState = digitalRead(buttonPin); // Der Zustand des Button im Pin 12 wird gelesen.
  if (buttonState == HIGH){  // Falls der Button gedruckt wird  
  
   for (unsigned i = 0; i < 5; i++){
      alleSekAusschalten();
        for (unsigned y = 0; y < 5; y++){
          delay(10000); // 10'000 ms = 10 sek
          digitalWrite(gruen[y], HIGH);
        }
        delay(10000); // Nach der for-Schleife beträgt die Sekundenzahl 50, und hier werden die letzten 10 Sekunden gezählt
        digitalWrite(rot[i], HIGH); 
    }
    alleMinAusschalten();
    erfolg();
  }
}

// Alle Grüne Lichter ausschalten
void alleSekAusschalten(){

  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  }

// Alle Rote Lichter ausschalten
void alleMinAusschalten(){

  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  }

// Alle Lichter blinken (Rot und Grün)
void alleBlinken(){
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  }

// Nachdem die 5 Minuten vorbei sind, werden alle Lichter der Reihne nach blinken
// Als Zeichen dass die 5 Minuten vorbei sind.
void erfolg(){
  
  for (unsigned x = 0; x < 5; x++){
      // Leuchte 1ste LED-Lampe
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
      
      // Leuchte 4ste LED-Lampe
      digitalWrite(4, HIGH);
      delay(100);
      digitalWrite(4, LOW);
      
      // Leuchte 5ste LED-Lampe
      digitalWrite(5, HIGH);
      delay(100);
      digitalWrite(5, LOW);
      
      // Leuchte 6ste LED-Lampe
      digitalWrite(6, HIGH);
      delay(100);
      digitalWrite(6, LOW);

      digitalWrite(7, HIGH);
      delay(100);
      digitalWrite(7, LOW);
      
      digitalWrite(8, HIGH);
      delay(100);
      digitalWrite(8, LOW);

      digitalWrite(9, HIGH);
      delay(100);
      digitalWrite(9, LOW);

      digitalWrite(10, HIGH);
      delay(100);
      digitalWrite(10, LOW);
      delay(1000);
   }
}
