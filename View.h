/*
Purpose: To manage the view of the user-program interaction before, during and after making a report request
*/
#ifndef VIEW_H
#define VIEW_H

#include <iostream>
#include <string>
using namespace std;


class View
{
  public:

    //prompts user for a number and verifies the validity of the number
    void checkChoice(int&);

    void printStr(string);
    void readInt(int&);
    void readStr(string&);

};

#endif
