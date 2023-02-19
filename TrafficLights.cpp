// declaring our pins, we could also keep them unnamed (and use their numbers instead) but for the sake of simplicity we will name them according to their colors and numbers
int FirstRed = 2;
int FirstYellow = 3;
int FirstGreen = 4;
int SecondRed = 5;
int SecondYellow = 6;
int SecondGreen = 7;
//so the pins 2-4 are 'street one' and pins 5-7 are 'street' two.

void setup() {
// sets pins as outputs, since all our LED's are outputs.    
    pinMode(FirstGreen, OUTPUT);
    pinMode(SecondGreen, OUTPUT);
    pinMode(FirstYellow, OUTPUT);
    pinMode(SecondYellow, OUTPUT);
    pinMode(FirstRed, OUTPUT);
    pinMode(SecondRed, OUTPUT);
}

void loop() {
// the function that will loop itself until we cancel it
  
 // state one
    digitalWrite(FirstGreen, LOW);
    digitalWrite(SecondGreen, HIGH);
    digitalWrite(FirstYellow, LOW);
    digitalWrite(SecondYellow, LOW);
    digitalWrite(FirstRed, HIGH);
    digitalWrite(SecondRed, LOW);
    delay(5000); //in miliseconds

   // state two
    digitalWrite(FirstGreen, LOW);
    digitalWrite(SecondGreen, LOW);
    digitalWrite(FirstYellow, LOW);
    digitalWrite(SecondYellow, HIGH);
    digitalWrite(FirstRed, HIGH);
    digitalWrite(SecondRed, LOW);
    delay(2000);
   // state three
    digitalWrite(FirstGreen, LOW);
    digitalWrite(SecondGreen, LOW);
    digitalWrite(FirstYellow, LOW);
    digitalWrite(SecondYellow, LOW);
    digitalWrite(FirstRed, HIGH);
    digitalWrite(SecondRed, HIGH);
    delay(2000);
   //state four
    digitalWrite(FirstGreen, HIGH);
    digitalWrite(SecondGreen, LOW);
    digitalWrite(FirstYellow, LOW);
    digitalWrite(SecondYellow, LOW);
    digitalWrite(FirstRed, LOW);
    digitalWrite(SecondRed, HIGH);
    delay(5000);
   // state five
    digitalWrite(FirstGreen, LOW);
    digitalWrite(SecondGreen, LOW);
    digitalWrite(FirstYellow, HIGH);
    digitalWrite(SecondYellow, LOW);
    digitalWrite(FirstRed, LOW);
    digitalWrite(SecondRed, HIGH);
    delay(2000);

   // state six
    digitalWrite(FirstGreen, LOW);
    digitalWrite(SecondGreen, LOW);
    digitalWrite(FirstYellow, LOW);
    digitalWrite(SecondYellow, LOW);
    digitalWrite(FirstRed, HIGH);
    digitalWrite(SecondRed, HIGH);
    delay(2000);
} //end of loop, end of code
