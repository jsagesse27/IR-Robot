// intialize all components(IR sensor, servo, etc)
int IR = A0; 
int button = 2;
int speaker = 3;

void setup() { 
  Serial.begin(9600);
  pinMode(button, INPUT);
  pinMode(speaker, OUTPUT);
  
}



void loop() { // press the push button to activate the program
  int buttonPress = digitalRead(button);
  Serial.println(buttonPress);
  delay(150);
// set the IR sensor to detect if an object is in the way
//int distance = analogRead(IR);
//Serial.println(distance);
//delay(100);


//if no objects in the way, the servo will activate at full speed forward

//if there is an object in the way, tell the servo to go in reverse (x) in/ft

//once it reverse , make the servo randomly turn left or right

//loop back to the IR sensing for objects (this should be set in the begining so the sensor is always searching for objects in it's path)

//if no objects in the way the servo ma go forward, if there is an object the servo wll do a full 180 (so it can face the opposite direction)

//check for objects in the way again, if none go forward

//if at this point there's still objects in the way, stop the servo and emit a tone from the speaker (optional, not important for project to functon)

//if the button is pushed stop the program 
}

