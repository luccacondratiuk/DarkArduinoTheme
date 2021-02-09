#include <Wire.h>

// a comment
/* another comment */


#define a "p0t4t0"
const int r = 100;
char c = 'c';
String h = "string";

boolean y = true;

void setup() {
  Wire.begin();
  Serial.begin(9600);
  pinMode(13, INPUT);

  if (y == true) {
    h = "hello world!";
  }
}

void loop() {
  potato();
  h = "Potato";
}

void potato(){
  Serial.println("Potato");
  Serial.println(a);
  
}
