/*
  8 LEDs set up in a row, for a chase sequence.  
  Each LED is on a digital pin from 2-9, with
  a 220 ohm resistor to ground.

  cobbled together by Tim Nielsen
  2/7/18
 
*/
int LEDoff = 0;   //name my LEDons and my LEDoffs, so I cans track them and step through them.
int LEDon = 2;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize the digital pins needed as outputs.
  pinMode(2, OUTPUT);  
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);

  //turn off all the LEDs
  for (int LEDon = 2; LEDon <11; LEDon++) {
    digitalWrite(LEDon, LOW);
  }
/* hey, two different pieces of code used to accomplish pretty similar effects.
 *  just nice to have both as a reference.
 */
}

// the loop function runs over and over again forever
void loop() {
  
 
    
    //lets start with a slow upwards chase, with two LEDs on and travelling
  
  for (int i=0; i <= 2; i++) {  //sets my count of this particular loop
    for (int LEDon = 2; LEDon <10; LEDon++) {  //begins at pin 2 and counts up to 10, changing pin number of LEDoff
    
    digitalWrite(LEDon, HIGH);
    delay(350);
    digitalWrite(LEDon + 1, HIGH);
    delay(350);
    digitalWrite(LEDon + 2, HIGH);
    digitalWrite(LEDon, LOW);
    
    }
  } 
// reverses direction, speeds up.  Two LEDs on and travelling

for (int i=0; i <= 3; i++) {  //sets my count of this particular loop
    for (int LEDon = 10; LEDon >1; LEDon--) {  //begins at pin 2 and counts up to 10, changing pin number of LEDoff
    
    digitalWrite(LEDon, HIGH);
    delay(150);
    digitalWrite(LEDon - 1, HIGH);
    delay(150);
    digitalWrite(LEDon - 2, HIGH);
    digitalWrite(LEDon, LOW);
    }
  }
}

/*
// unused loop, fast downwards chase, with two LED off
  for (int i=0; i <=3; i++) {  //sets my count of this particular loop
    for (int LEDoff = 10; LEDoff >1; LEDoff--) {  //begins at pin 10 and counts down to 2,changing pin number of LEDoff
      delay(150);
      digitalWrite(LEDoff, LOW);
      delay(150);
      digitalWrite(LEDoff - 1, LOW);
      delay (150);
      digitalWrite(LEDoff - 2, LOW);
      digitalWrite(LEDoff, HIGH);
      
    }
   }
     {//turn off all the LEDs
  for (int LEDon = 2; LEDon <11; LEDon++) {
    digitalWrite(LEDon, LOW);}
    }
 */
