using namespace std;
#include <sstream>

#include "ReportGenerator.h"

ThirdReportGenerator::ThirdReportGenerator(){
  reportName = "Generate employment proportion for each region, by year, for all degrees and all genders in Canada";

}

void ThirdReportGenerator::execute(string& outStr){
  stringstream ss;
  int i,j,k,p;
  string canReg;//region representing Canada

  for(i = 0; i < allYears.size(); i++){
    if(i == 0){
      ss << "    ";
    }
    else{
      ss << "   ";
    }
    ss << allYears[i]->getSign();
  }
  ss << endl;

  for(i = 0; i < allRegions.size(); i++){
    if(allRegions[i]->getSign()=="CAN"){
      canReg = allRegions[i]->getSign();//gets the Property element for Canada
    }
  }


  for(i = 0; i < allRegions.size(); i++){
    string r = allRegions[i]->getSign();//e.g. AB
    if(r.size() == 2){ //covers all regions apart from CAN
      ss << r;
      for(j = 0; j < allYears.size(); j++){
        double num = 0.0, total = 0.0;
        for(k = 0; k < allYears[j]->getInfoSize() ; k++){

          if((*allYears[j])[k]->getGender() == "All" &&
             (*allYears[j])[k]->getRegion() == r){
            num += (*allYears[j])[k]->getNumEmployed();

          }
          if((*allYears[j])[k]->getGender() == "All" &&
             (*allYears[j])[k]->getRegion() == canReg){

            total += (*allYears[j])[k]->getNumEmployed();
          }


        }
        if(total == 0.0){
          ss << "  0.00";
        }
        else{
          ss << "  " << fixed << setprecision(2) << (num*100) / total;

        }

      }
      ss << endl;

    }
    else{
      p = i;
    }
  }

  string r = allRegions[p]->getSign();//CAN

  ss << r;
  for(j = 0; j < allYears.size(); j++){
    double num = 0.0, total = 0.0;
    for(k = 0; k < allYears[j]->getInfoSize() ; k++){
      if((*allYears[j])[k]->getGender() == "All" &&
         (*allYears[j])[k]->getRegion() == r){
        num += (*allYears[j])[k]->getNumEmployed();
        total += (*allYears[j])[k]->getNumEmployed();

      }

    }
    if(j == 0){
      ss << " ";
    }
    else{
      ss << "  ";
    }
    ss << fixed << setprecision(2) << (num*100) / total;

  }
  ss << endl;

  outStr = ss.str();

}
