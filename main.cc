/*

Purpose of program: To generate a set of reports based on data from Canada’s National Graduate Survey (NGS) from the years 2000-2015.

Usage: 1. Open the Command prompt and navigate to the directory where the files are stored
       2. Compile the files using the Makefile by typing "make" in the Command prompt then press Enter
       3. Run the executable created which is called "final" by typing "./final" and then press Enter

Author(s): Daniel Adebola-Dada

*/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

#include "Control.h"

int main(){
  Control control;
  control.launch();

  return 0;
}
