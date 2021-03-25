#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
#include "NGSRecord.h"

NGSRecord::NGSRecord(int y, string r, string d, string g, int ne, int ng)
{
  year = y;
  region = r;
  degree = d;
  gender = g;
  numEmployed = ne;
  numGrads = ng;
}

NGSRecord::~NGSRecord(){}

int NGSRecord::getYear(){ return year; }

string NGSRecord::getDegree(){return degree;}

string NGSRecord::getRegion(){return region;}

string NGSRecord::getGender(){return gender;}

int NGSRecord::getNumEmployed(){return numEmployed;}

int NGSRecord::getNumGrads(){return numGrads;}
