#include <iostream>
#include <iomanip>
using namespace std;
#include <string>
#include <sstream>

#include "Control.h"

Control::Control(){
  repGens = vector <ReportGenerator*> ();

  FirstReportGenerator* first = new FirstReportGenerator();
  SecondReportGenerator* second = new SecondReportGenerator();
  ThirdReportGenerator* third = new ThirdReportGenerator();
  FourthReportGenerator* fourth = new FourthReportGenerator();
  FifthReportGenerator* fifth = new FifthReportGenerator();

  repGens.push_back(first);
  repGens.push_back(second);
  repGens.push_back(third);
  repGens.push_back(fourth);
  repGens.push_back(fifth);

}

Control::~Control(){
  for(int i=0; i < repGens.size(); i++){
    delete repGens[i];
  }
  repGens.clear();
}

void Control::launch()
{
  int i,choice, incoming;
  string prompt, option;
  string output=" ";
  initData();

  while (1) {
    view.printStr("\n");
    for(i=0; i < repGens.size(); i++){
      //generates options for reports based on the report generator classes' report names
      format(option ,i+1, repGens[i]->getReportName()) ;
      view.printStr(option);
      view.printStr("\n");
    }

    //validates user entry
    view.checkChoice(choice);

    if (choice == 0)
      break;

//  1st report
    if (choice == 1) {
      repGens[choice-1]->execute(output);
      view.printStr(output);
    }
//  2nd report
    if (choice == 2) {
      repGens[choice-1]->execute(output);
      view.printStr(output);
    }
//  3rd report
    if (choice == 3) {
      repGens[choice-1]->execute(output);
      view.printStr(output);
    }
//  4th report
    if (choice == 4) {
      while(true){
        prompt = "Which region do you wish to know about (Enter a number) ? \n";
        view.printStr(prompt);
        for(i = 0; i < ReportGenerator::allRegions.size(); i++){
          //generates options for regions in Canada
          format(option ,i+1, ReportGenerator::allRegions[i]->getSign()) ;
          view.printStr(option);
        }
        view.readInt(incoming);
        if(incoming >= 1 && incoming <= 11)
          break;

      }

      output = ReportGenerator::allRegions[incoming-1]->getSign();
      view.printStr("\nRegion: " + output+"\n");
      repGens[choice-1]->execute(output);
      view.printStr(output);

    }
//  5th report
    if (choice == 5) {
      repGens[choice-1]->execute(output);
      view.printStr(output);
    }
  }
}

void Control::initData(){

  ReportGenerator::loadData();
  ReportGenerator::populateYears();
  ReportGenerator::populateRegions();
  ReportGenerator::populateDegrees();

}

void Control::format(string& str, int optionNum, string optionData)
{
  stringstream ss;
  ss << "(" <<optionNum << ") " << optionData << "\n";
  str = ss.str();

}
