/*
   Name: Taisir Hassan
   Teacher: Mr. Gunby TDR4M1
   Date: January. 18, 2021
   Project: PWM DC Motor Control
   Description: An example on how to control a DC motor's
   speed using PWM.
*/
// Global Variable
// name switches

int switch1 = 2;
int switch2 = 3;
int switch3 = 4;


// name potentiometers

int pot_1 = A0;
int pot_2 = A1;


//name LED Pin
int ledPin = 13;


//name L293D Pins

int enable1 = 11;   //also use for PWM
int enable2 = 10; //also use for PWM

int input1 = 9;
int input2 = 8;

int input3 = 5;
int input4 = 6;

void setup()  // the setup function runs once when you press reset or power the board
{
  // Setting all pins to inputs and outputs
  pinMode(switch1, INPUT);
  pinMode(switch2, INPUT);
  pinMode(switch3, INPUT);
  pinMode(pot_1, INPUT);
  pinMode(pot_2, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(enable1, OUTPUT);
  pinMode(enable2, OUTPUT);
  pinMode(input1, OUTPUT);
  pinMode(input2, OUTPUT);
  pinMode(input3, OUTPUT);
  pinMode(input4, OUTPUT);


}

void loop()
{
  //Reading States of Inputs and outputting to Serial Monitor

  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // read the value from the sensor
  int pot1 = analogRead(pot_1);

  Serial.println("Potentiometer 1 Value:");
  Serial.println(pot1);
  int pot2 = analogRead(pot_2);

  Serial.println("Potentiometer 2 Value:");
  Serial.println(pot2);


  int switch1State = digitalRead(switch1);
  // print out the state of the button:
  Serial.println("Switch 1 State::");
  Serial.println(switch1State);


  int switch2State = digitalRead(switch2);
  // print out the state of the button:
  Serial.println("Switch 2 State::");
  Serial.println(switch2State);

  int switch3State = digitalRead(switch3);
  // print out the state of the button:
  Serial.println("Switch 3 State::");
  Serial.println(switch3State);

  if (switch1State == 1) // if switch state is 1, led pin turns on
  {
    digitalWrite(ledPin, HIGH);

    // Switch 2 - Motor 1
    // Speed = Pot 1
    // OFF = Clockwise
    //ON = Anticlockwise
    if (switch2State == 0)

    {

      pot1 = map(pot1, 0, 1024, 0, 255);

      //set direction of motor
      digitalWrite(input1, HIGH);
      digitalWrite(input2, LOW);
      //output pwm value to motor
      analogWrite(enable1, pot1);


    }

    else if (switch2State == 1)
    {
      digitalWrite(input1, LOW);
      digitalWrite(input2, HIGH);
      analogWrite(enable1, pot1);

    }
    // Switch 3 - Motor 2
    // Speed = Pot 2
    // OFF = Clockwise
    //ON = Anticlockwise

    if (switch3State == 0)

    {
      pot2 = map(pot2, 0, 1024, 0, 255);

      //set direction of motor
      digitalWrite(input3, HIGH);
      digitalWrite(input4, LOW);
      //output pwm value to motor
      analogWrite(enable2, pot2);


    }

    else if (switch3State == 1) // else if switch state 3 is on, input 4 will be off
      // input 4 will be high, and enable 2 would correspond to pot2
    {
      digitalWrite(input3, LOW);
      digitalWrite(input4, HIGH);
      analogWrite(enable2, pot2);

    }

  }

  else if (switch1State == 0) // or if switch1 state is 0, led pin is off, and digitally writes enable 1 and 2 to 0
  {
    digitalWrite(ledPin, LOW);
    digitalWrite(enable1, 0);
    digitalWrite(enable2, 0);

  }

  delay(1); // delay 1 ms
}