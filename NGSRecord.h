/*
Purpose: To store information about a row of NGS record data from grad.dat
*/
#ifndef NGS_H
#define NGS_H
#include <string>

using namespace std;

class NGSRecord
{
  public:
    NGSRecord(int,string,string,string,int,int);
    ~NGSRecord();
    int getYear();
    string getDegree();
    string getRegion();
    string getGender();
    int getNumEmployed();
    int getNumGrads();

  private:

    int year;
    string region;
    string degree;
    string gender;
    //number of employed graduates
    int numEmployed;
    //number of graduates
    int numGrads;


};

#endif
