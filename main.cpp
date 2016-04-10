#include "control.h"
#include <iostream>
#include <string>

int main(void) {
  Control* control = new Control(false);
  //control->load_parameters("joku.psx");
  control->set_input_filename("/Users/ian/Programming/paulstretch_cpp/wilhelm.wav", FILE_WAV);
  control->InitPlayer();
  control->startplay(false);
  while(1) {
    sleep(100);
  }
}