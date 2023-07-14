/*Tracker Controller  for ProMicro.  Charles Hobbs 2023
Emmulates either joystick or keyboard.  Multiple alternate keymapping modes available, 
configured by holding a key during start up.
*/
#include <Keyboard.h>
#include <Joystick.h>

Joystick_ Joystick;

//pin mapping
byte a = 2;
byte b = 3;
byte up = 4;
byte left = 5;
byte right = 6;
byte down = 7;
byte star = 8;
byte select = 9;

int button[8] = {a, b, up, left, right, down, star, select};

//3 rows, 8 columns   row=mode;  column = command for button.    
int command[3][8] = {{1, 0, 12, 14, 15, 13, 9, 8},              //mode 0   generic NES-styled pad game controller
                     {'s', 'a', 218, 216, 215, 217, 'x', 'z'},  //mode 1   M8C keyboard mapping
                     {'x', 'z', 218, 216, 215, 217, 32, 129}    //mode 2   M8.run keyboard mapping
                   //{0,0,0,0,0,0,0,0},                         //mode 3
                   //{0,0,0,0,0,0,0,0},                         //mode 4
};

//joystick or keyboard?   joystick = 1, keyboard = 0    {mode 0, mode 1, mode 2...}
bool joyMode[3] = {1, 0, 0};    
int mode = 0;  //default mode

int buttonState[8] = {};
int previousButtonState[8] = {HIGH};


void setup() {
  Joystick.begin();
  Keyboard.begin();

  for (int i = 0; i < 8; i++) {
    pinMode(button[i], INPUT_PULLUP);
  }

  // set mode
  if (digitalRead(up) == LOW) {
    mode = 1;
  }
  if (digitalRead(down) == LOW) {
    mode = 2;
  }
/*  if (digitalRead(left) == LOW) {      
    mode = 3;
  }
*/
}
void loop() {

  for (int i = 0; i < 8; i++) {
    buttonState[i] = digitalRead(button[i]);

    if (buttonState[i] == LOW && previousButtonState[i] == HIGH) {

      if (joyMode[mode] == 0) {
        Keyboard.press(command[mode][i]);
      }
      else
        Joystick.setButton(command[mode][i], HIGH);

    }

    if (buttonState[i] == HIGH && previousButtonState[i] == LOW) {
      if (joyMode[mode] == 0) {
        Keyboard.release(command[mode][i]);
      }
      else
        Joystick.setButton(command[mode][i], LOW);
    }
    previousButtonState[i] = buttonState[i];

  }
}
