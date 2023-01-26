Author(s): Daniel Adebola-Dada

Purpose: To generate a set of reports based on data from Canada’s National Graduate Survey (NGS)
         from the years 2000-2015 using C++

List of source and header files:
1. Control.cc
2. Control.h
3. View.cc
4. View.h
5. Property.h
6. NGSRecords.h
7. NGSRecords.cc
8. ReportGenerator.h
9. ReportGenerator.cc
10. FirstReportGenerator.h
11. SecondReportGenerator.cc
12. ThirdReportGenerator.cc
13. FourthReportGenerator.cc
14. FourthReportGenerator.h
15. FifthReportGenerator.cc
16. main.cc
17. grad.dat


Launching Instructions:
1. Open the Command prompt and navigate to the directory where the files are stored
2. Compile the files using the Makefile by typing "make" in the Command prompt then press Enter
3. Run the executable created which is called "final" by typing "./final" and then press Enter

Assumption(s):
1) Assumed that we were to look at all genders, we would consider the lines in grad.dat that had the
   gender as "All".

2) For the 4th report, it generates the employment percentage for each degree by year
   for all genders for a selected region in Canada. Each row will be a degree and each year will be a column.
   each cell will be the percentage employed with that degree, in that year, for all genders, compared to the number
   of graduates in that degree.

3) For the 5th report, it generates the years with the most and least number of male and female graduates for each region and
   for all degrees in Canada. It displays the year with most male and female graduates and also generates the respective number of graduates

4) For the 1st report, i compared the employment percentage with the number of graduates in that region
   with the same degree, according to a post by the prof at the following link:
   https://culearn.carleton.ca/moodle/mod/forum/discuss.php?d=678878

5) In the UML diagram representation for the ThirdReportGenerator class, the execute function's outStr paramter is
   notated as inout because it is used to receive a value from the Control class which it makes use of. If it does noit receiev that value,
   the program won't run as it ought to.
