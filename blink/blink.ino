const int ON_BOARD_LED = 13;
const int YELLOW_LED = 16;
const int RED_LED = 18;
const int GEEN_LED = 17;
const int BUTTON_PIN = 9;

// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(BUTTON_PIN, INPUT);
  // initialize digital pin 13 as an output.
  pinMode(ON_BOARD_LED, OUTPUT); 
  pinMode(YELLOW_LED, OUTPUT); 
  pinMode(GEEN_LED, OUTPUT); 
  pinMode(RED_LED, OUTPUT); 
}

int buttonState = 0;         // variable for reading the pushbutton status
bool buttonPressed = false;

int duration = 0;
int step = 0;  // step of a program
int count = 0; // counter of a step
int prog = 1; // LED program
 
// the loop function runs over and over again forever
void loop() {
  duration += 1;

  // read the state of the pushbutton value:
  buttonState = digitalRead(BUTTON_PIN);

  switch (prog){

    /////////////////////////////////////////////////////////////////////
    // Program: r(100) then y(100) then g(100), repeat after 1000
    /////////////////////////////////////////////////////////////////////
    case 1:
      switch (step) {
        case 0:
          digitalWrite(ON_BOARD_LED, HIGH);    
          digitalWrite(RED_LED, HIGH);    
          digitalWrite(YELLOW_LED, LOW);   
          digitalWrite(GEEN_LED, LOW);    
          if (count++ >= 10){
            step++;
            count = 0;
          }
          break;
          
        case 1:
          digitalWrite(ON_BOARD_LED, LOW);    
          digitalWrite(RED_LED, LOW);    
          digitalWrite(YELLOW_LED, HIGH);   
          digitalWrite(GEEN_LED, LOW);    
          if (count++ >= 10){
            step++;
            count = 0;
          }
          break;
          
        case 2:
          digitalWrite(ON_BOARD_LED, LOW);    
          digitalWrite(RED_LED, LOW);    
          digitalWrite(YELLOW_LED, LOW);   
          digitalWrite(GEEN_LED, HIGH);    
          if (count++ >= 10){
            step++;
            count = 0;
          }
          break;
          
        default:
          digitalWrite(ON_BOARD_LED, LOW);    
          digitalWrite(RED_LED, LOW);    
          digitalWrite(YELLOW_LED, LOW);   
          digitalWrite(GEEN_LED, LOW);    
          if (duration >= 100){
            duration = 0;
            step = 0;
          }
          break;
      }
      break;

    /////////////////////////////////////////////////////////////////////
    // Program: r(50) then y(50) then g(50), repeat after 2000
    /////////////////////////////////////////////////////////////////////
    case 2:
      switch (step) {
        case 0:
          digitalWrite(ON_BOARD_LED, HIGH);    
          digitalWrite(RED_LED, HIGH);    
          digitalWrite(YELLOW_LED, LOW);   
          digitalWrite(GEEN_LED, LOW);    
          if (count++ >= 5){
            step++;
            count = 0;
          }
          break;
          
        case 1:
          digitalWrite(ON_BOARD_LED, LOW);    
          digitalWrite(RED_LED, LOW);    
          digitalWrite(YELLOW_LED, HIGH);   
          digitalWrite(GEEN_LED, LOW);    
          if (count++ >= 5){
            step++;
            count = 0;
          }
          break;
          
        case 2:
          digitalWrite(ON_BOARD_LED, LOW);    
          digitalWrite(RED_LED, LOW);    
          digitalWrite(YELLOW_LED, LOW);   
          digitalWrite(GEEN_LED, HIGH);    
          if (count++ >= 5){
            step++;
            count = 0;
          }
          break;
          
        default:
          digitalWrite(ON_BOARD_LED, LOW);    
          digitalWrite(RED_LED, LOW);    
          digitalWrite(YELLOW_LED, LOW);   
          digitalWrite(GEEN_LED, LOW);    
          if (duration >= 200){
            duration = 0;
            step = 0;
          }
          break;
      }
      break;

    /////////////////////////////////////////////////////////////////////
    // Program: r(20) then y(20) then g(20), repeat after 3000
    /////////////////////////////////////////////////////////////////////
    case 3:
      switch (step) {
        case 0:
          digitalWrite(ON_BOARD_LED, HIGH);    
          digitalWrite(RED_LED, HIGH);    
          digitalWrite(YELLOW_LED, LOW);   
          digitalWrite(GEEN_LED, LOW);    
          if (count++ >= 2){
            step++;
            count = 0;
          }
          break;
          
        case 1:
          digitalWrite(ON_BOARD_LED, LOW);    
          digitalWrite(RED_LED, LOW);    
          digitalWrite(YELLOW_LED, HIGH);   
          digitalWrite(GEEN_LED, LOW);    
          if (count++ >= 2){
            step++;
            count = 0;
          }
          break;
          
        case 2:
          digitalWrite(ON_BOARD_LED, LOW);    
          digitalWrite(RED_LED, LOW);    
          digitalWrite(YELLOW_LED, LOW);   
          digitalWrite(GEEN_LED, HIGH);    
          if (count++ >= 2){
            step++;
            count = 0;
          }
          break;
          
        default:
          digitalWrite(ON_BOARD_LED, LOW);    
          digitalWrite(RED_LED, LOW);    
          digitalWrite(YELLOW_LED, LOW);   
          digitalWrite(GEEN_LED, LOW);    
          if (duration >= 300){
            duration = 0;
            step = 0;
          }
          break;
      }
      break;

    /////////////////////////////////////////////////////////////////////
    // Program: r(100) plus y(100) plus g(100), repeat after 1000
    /////////////////////////////////////////////////////////////////////
    case 4:
      switch (step) {
        case 0:
          digitalWrite(ON_BOARD_LED, HIGH);    
          digitalWrite(RED_LED, HIGH);    
          digitalWrite(YELLOW_LED, LOW);   
          digitalWrite(GEEN_LED, LOW);    
          if (count++ >= 10){
            step++;
            count = 0;
          }
          break;
          
        case 1:
          digitalWrite(ON_BOARD_LED, LOW);    
          digitalWrite(RED_LED, HIGH);    
          digitalWrite(YELLOW_LED, HIGH);   
          digitalWrite(GEEN_LED, LOW);    
          if (count++ >= 10){
            step++;
            count = 0;
          }
          break;
          
        case 2:
          digitalWrite(ON_BOARD_LED, LOW);    
          digitalWrite(RED_LED, HIGH);    
          digitalWrite(YELLOW_LED, HIGH);   
          digitalWrite(GEEN_LED, HIGH);    
          if (count++ >= 10){
            step++;
            count = 0;
          }
          break;
          
        default:
          digitalWrite(ON_BOARD_LED, LOW);    
          digitalWrite(RED_LED, LOW);    
          digitalWrite(YELLOW_LED, LOW);   
          digitalWrite(GEEN_LED, LOW);    
          if (duration >= 100){
            duration = 0;
            step = 0;
          }
          break;
      }
      break;

    /////////////////////////////////////////////////////////////////////
    // Program: r(50) plus y(50) plus g(50), repeat after 2000
    /////////////////////////////////////////////////////////////////////
    case 5:
      switch (step) {
        case 0:
          digitalWrite(ON_BOARD_LED, HIGH);    
          digitalWrite(RED_LED, HIGH);    
          digitalWrite(YELLOW_LED, LOW);   
          digitalWrite(GEEN_LED, LOW);    
          if (count++ >= 5){
            step++;
            count = 0;
          }
          break;
          
        case 1:
          digitalWrite(ON_BOARD_LED, LOW);    
          digitalWrite(RED_LED, HIGH);    
          digitalWrite(YELLOW_LED, HIGH);   
          digitalWrite(GEEN_LED, LOW);    
          if (count++ >= 5){
            step++;
            count = 0;
          }
          break;
          
        case 2:
          digitalWrite(ON_BOARD_LED, LOW);    
          digitalWrite(RED_LED, HIGH);    
          digitalWrite(YELLOW_LED, HIGH);   
          digitalWrite(GEEN_LED, HIGH);    
          if (count++ >= 5){
            step++;
            count = 0;
          }
          break;
          
        default:
          digitalWrite(ON_BOARD_LED, LOW);    
          digitalWrite(RED_LED, LOW);    
          digitalWrite(YELLOW_LED, LOW);   
          digitalWrite(GEEN_LED, LOW);    
          if (duration >= 200){
            duration = 0;
            step = 0;
          }
          break;
      }
      break;

    /////////////////////////////////////////////////////////////////////
    // Program: r(20) plus y(20) plus g(20), repeat after 3000
    /////////////////////////////////////////////////////////////////////
    case 6:
      switch (step) {
        case 0:
          digitalWrite(ON_BOARD_LED, HIGH);    
          digitalWrite(RED_LED, HIGH);    
          digitalWrite(YELLOW_LED, LOW);   
          digitalWrite(GEEN_LED, LOW);    
          if (count++ >= 2){
            step++;
            count = 0;
          }
          break;
          
        case 1:
          digitalWrite(ON_BOARD_LED, LOW);    
          digitalWrite(RED_LED, HIGH);    
          digitalWrite(YELLOW_LED, HIGH);   
          digitalWrite(GEEN_LED, LOW);    
          if (count++ >= 2){
            step++;
            count = 0;
          }
          break;
          
        case 2:
          digitalWrite(ON_BOARD_LED, LOW);    
          digitalWrite(RED_LED, HIGH);    
          digitalWrite(YELLOW_LED, HIGH);   
          digitalWrite(GEEN_LED, HIGH);    
          if (count++ >= 2){
            step++;
            count = 0;
          }
          break;
          
        default:
          digitalWrite(ON_BOARD_LED, LOW);    
          digitalWrite(RED_LED, LOW);    
          digitalWrite(YELLOW_LED, LOW);   
          digitalWrite(GEEN_LED, LOW);    
          if (duration >= 300){
            duration = 0;
            step = 0;
          }
          break;
      }
      break;

    /////////////////////////////////////////////////////////////////////
    // Program: g(100) the pause(100) then y(100) then pause(100) 
    //          then r(100), repreat after 2000
    /////////////////////////////////////////////////////////////////////
    case 7:
      switch(step){
        case 0:
          digitalWrite(ON_BOARD_LED, HIGH);   
          digitalWrite(GEEN_LED, HIGH);   
          digitalWrite(YELLOW_LED, LOW);   
          digitalWrite(RED_LED, LOW);   
          if (count++ >= 1){
            step++;
            count = 0;
          }
          break;
          
        case 1:
          digitalWrite(ON_BOARD_LED, LOW);   
          digitalWrite(GEEN_LED, HIGH);   
          digitalWrite(YELLOW_LED, LOW);   
          digitalWrite(RED_LED, LOW);   
          if (count++ >= 9){
            step++;
            count = 0;
          }
          break;

        case 2:
          digitalWrite(ON_BOARD_LED, LOW);   
          digitalWrite(YELLOW_LED, LOW);   
          digitalWrite(GEEN_LED, LOW);   
          digitalWrite(RED_LED, LOW);   
          if (count++ >= 10){
            step++;
            count = 0;
          }
          break;

        case 3:
          digitalWrite(ON_BOARD_LED, LOW);   
          digitalWrite(YELLOW_LED, HIGH);   
          digitalWrite(GEEN_LED, LOW);   
          digitalWrite(RED_LED, LOW);   
          if (count++ >= 10){
            step++;
            count = 0;
          }
          break;

        case 4:
          digitalWrite(ON_BOARD_LED, LOW);   
          digitalWrite(YELLOW_LED, LOW);   
          digitalWrite(GEEN_LED, LOW);   
          digitalWrite(RED_LED, LOW);   
          if (count++ >= 10){
            step++;
            count = 0;
          }
          break;

        case 5:
          digitalWrite(ON_BOARD_LED, LOW);   
          digitalWrite(YELLOW_LED, LOW);   
          digitalWrite(GEEN_LED, LOW);   
          digitalWrite(RED_LED, HIGH);   
          if (count++ >= 10){
            step++;
            count = 0;
          }
          break;

        default:          
          digitalWrite(ON_BOARD_LED, LOW);    
          digitalWrite(YELLOW_LED, LOW);   
          digitalWrite(GEEN_LED, LOW);    
          digitalWrite(RED_LED, LOW);    
          if (duration >= 200){
            duration = 0;
            step = 0;
          }
          break;
      }
      break;

    /////////////////////////////////////////////////////////////////////
    // Program: g(50) the pause(50) then y(50) then pause(100) 
    //          then r(100), repreat after 2500
    /////////////////////////////////////////////////////////////////////
    case 8:
      switch(step){
        case 0:
          digitalWrite(ON_BOARD_LED, HIGH);   
          digitalWrite(GEEN_LED, HIGH);   
          digitalWrite(YELLOW_LED, LOW);   
          digitalWrite(RED_LED, LOW);   
          if (count++ >= 1){
            step++;
            count = 0;
          }
          break;
          
        case 1:
          digitalWrite(ON_BOARD_LED, LOW);   
          digitalWrite(GEEN_LED, HIGH);   
          digitalWrite(YELLOW_LED, LOW);   
          digitalWrite(RED_LED, LOW);   
          if (count++ >= 4){
            step++;
            count = 0;
          }
          break;

        case 2:
          digitalWrite(ON_BOARD_LED, LOW);   
          digitalWrite(YELLOW_LED, LOW);   
          digitalWrite(GEEN_LED, LOW);   
          digitalWrite(RED_LED, LOW);   
          if (count++ >= 5){
            step++;
            count = 0;
          }
          break;

        case 3:
          digitalWrite(ON_BOARD_LED, LOW);   
          digitalWrite(YELLOW_LED, HIGH);   
          digitalWrite(GEEN_LED, LOW);   
          digitalWrite(RED_LED, LOW);   
          if (count++ >= 5){
            step++;
            count = 0;
          }
          break;

        case 4:
          digitalWrite(ON_BOARD_LED, LOW);   
          digitalWrite(YELLOW_LED, LOW);   
          digitalWrite(GEEN_LED, LOW);   
          digitalWrite(RED_LED, LOW);   
          if (count++ >= 5){
            step++;
            count = 0;
          }
          break;

        case 5:
          digitalWrite(ON_BOARD_LED, LOW);   
          digitalWrite(YELLOW_LED, LOW);   
          digitalWrite(GEEN_LED, LOW);   
          digitalWrite(RED_LED, HIGH);   
          if (count++ >= 5){
            step++;
            count = 0;
          }
          break;

        default:          
          digitalWrite(ON_BOARD_LED, LOW);    
          digitalWrite(YELLOW_LED, LOW);   
          digitalWrite(GEEN_LED, LOW);    
          digitalWrite(RED_LED, LOW);    
          if (duration >= 250){
            duration = 0;
            step = 0;
          }
          break;
      }
      break;


    /////////////////////////////////////////////////////////////////////
    // Program: g(10) the pause(10) then y(10) then pause(10) 
    //          then r(10), repreat after 4000
    /////////////////////////////////////////////////////////////////////
    case 9:
      switch(step){
        case 0:
          digitalWrite(ON_BOARD_LED, HIGH);   
          digitalWrite(GEEN_LED, HIGH);   
          digitalWrite(YELLOW_LED, LOW);   
          digitalWrite(RED_LED, LOW);   
          if (count++ >= 1){
            step++;
            count = 0;
          }
          break;
          
        case 1:
          digitalWrite(ON_BOARD_LED, LOW);   
          digitalWrite(YELLOW_LED, LOW);   
          digitalWrite(GEEN_LED, LOW);   
          digitalWrite(RED_LED, LOW);   
          if (count++ >= 1){
            step++;
            count = 0;
          }
          break;

        case 2:
          digitalWrite(ON_BOARD_LED, LOW);   
          digitalWrite(YELLOW_LED, HIGH);   
          digitalWrite(GEEN_LED, LOW);   
          digitalWrite(RED_LED, LOW);   
          if (count++ >= 1){
            step++;
            count = 0;
          }
          break;

        case 3:
          digitalWrite(ON_BOARD_LED, LOW);   
          digitalWrite(YELLOW_LED, LOW);   
          digitalWrite(GEEN_LED, LOW);   
          digitalWrite(RED_LED, LOW);   
          if (count++ >= 1){
            step++;
            count = 0;
          }
          break;

        case 4:
          digitalWrite(ON_BOARD_LED, LOW);   
          digitalWrite(YELLOW_LED, LOW);   
          digitalWrite(GEEN_LED, LOW);   
          digitalWrite(RED_LED, HIGH);   
          if (count++ >= 1){
            step++;
            count = 0;
          }
          break;

        default:          
          digitalWrite(ON_BOARD_LED, LOW);    
          digitalWrite(YELLOW_LED, LOW);   
          digitalWrite(GEEN_LED, LOW);    
          digitalWrite(RED_LED, LOW);    
          if (duration >= 400){
            duration = 0;
            step = 0;
          }
          break;
      }
      break;

      
  }// switch prog

  // Handle program switch
  if (buttonState == HIGH){
    digitalWrite(ON_BOARD_LED, HIGH);    
    
    // First time HIGH, handle action once
    if (buttonPressed == false){

      // switch program
      if (++prog > 9){
        prog = 1;
      }

      duration= 0;
      step = 0;

      // Handling done, igonere following HIGHs
      buttonPressed = true;
    }
  }

  // Not pressed
  else{
    buttonPressed = false;
  }
  


  delay(10);              // wait for 100 ms
}
