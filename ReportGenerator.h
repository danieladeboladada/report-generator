/*
Purpose: To store NGS records and compute and generate statistics 
*/
#ifndef REPGEN_H
#define REPGEN_H
#include <string>
#include <vector>
#include <fstream>

#include "NGSRecord.h"
#include "Property.h"

using namespace std;

class ReportGenerator
{
  protected:

  string reportName;//name of report

  public:
    ReportGenerator();
    ~ReportGenerator();
    string getReportName();
    static void loadData();//loads data from grad.dat to the primary collection
    static void populateYears();//populates allYears collection from the primary collection
    static void populateRegions();//populates allRegions collection from the primary collection
    static void populateDegrees();//populates allDegrees collection from the primary collection

    static vector <NGSRecord*> data;//primary collection of NGS data

    //computes statistics for a specific report and passes it into the string parameter
    virtual void execute(string&) = 0;

    //partial collections
    static vector < Property<int>* > allYears;//organized by year
    static vector < Property<string>* > allRegions;//organized by regions
    static vector < Property<string>* > allDegrees;//organized by degrees

};

//computes employment percentage for each region, by degree, for all years and all genders in Canada
class FirstReportGenerator : public ReportGenerator
{
  public:
    FirstReportGenerator();
    virtual void execute(string&);

};

//
class SecondReportGenerator : public ReportGenerator
{
  public:
    SecondReportGenerator();
    virtual void execute(string&);

};

class ThirdReportGenerator : public ReportGenerator
{
  public:
    ThirdReportGenerator();
    virtual void execute(string&);

};

class FourthReportGenerator : public ReportGenerator
{
  public:
    FourthReportGenerator();
    virtual void execute(string&);

};

class FifthReportGenerator : public ReportGenerator
{
  public:
    FifthReportGenerator();
    virtual void execute(string&);

};


#endif
