#include "control.h"
#include <iostream>
#include <string>

int main(int argc, char** argv) {

  Control* control = new Control(false);
  //control->load_parameters("joku.psx");
  if (argc < 2) {
    std::cout << "Add an argument" << std::endl;
  }
  std::cout << argv[0] << std::endl;

  control->set_input_filename(argv[1], FILE_WAV);
  control->InitPlayer();
  control->startplay(false);
  while(1) {
    sleep(100);
  }

}