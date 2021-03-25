final: main.o Control.o ReportGenerator.o FirstReportGenerator.o SecondReportGenerator.o ThirdReportGenerator.o FourthReportGenerator.o FifthReportGenerator.o NGSRecord.o View.o
	g++ -o final main.o Control.o ReportGenerator.o FirstReportGenerator.o SecondReportGenerator.o ThirdReportGenerator.o FourthReportGenerator.o FifthReportGenerator.o NGSRecord.o View.o

main.o: main.cc Control.h
	g++  -c main.cc

Control.o: Control.cc Control.h ReportGenerator.h View.h Property.h
	g++ -c Control.cc

NGSRecord.o: NGSRecord.cc NGSRecord.h
	g++ -c NGSRecord.cc

ReportGenerator.o: ReportGenerator.cc ReportGenerator.h NGSRecord.h Property.h
	g++ -c ReportGenerator.cc

FirstReportGenerator.o: FirstReportGenerator.cc ReportGenerator.h
	g++ -c FirstReportGenerator.cc

SecondReportGenerator.o: SecondReportGenerator.cc ReportGenerator.h
	g++ -c SecondReportGenerator.cc

ThirdReportGenerator.o: ThirdReportGenerator.cc ReportGenerator.h
	g++ -c ThirdReportGenerator.cc

FourthReportGenerator.o: FourthReportGenerator.cc ReportGenerator.h
	g++ -c FourthReportGenerator.cc

FifthReportGenerator.o: FifthReportGenerator.cc ReportGenerator.h
	g++ -c FifthReportGenerator.cc

View.o: View.cc View.h
	g++ -c View.cc

clean:
	rm -f *.o final
