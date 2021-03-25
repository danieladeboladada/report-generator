/*
Purpose: To manage all operations on NGS report requests
*/
#ifndef CONTROL_H
#define CONTROL_H

#include "ReportGenerator.h"

#include "View.h"
#include <vector>

class Control
{
  public:
    Control();
    ~Control();

    //controls all request operations
    void launch();

    //initializes NGS record data to the program
    void initData();

    //produces an option by linking the given integer and
    //string together and passes them into the first string
    void format(string&, int,string);

  private:

    //collection of report generators
    vector <ReportGenerator*> repGens;

    //manages user I/O
    View view;
};

#endif
