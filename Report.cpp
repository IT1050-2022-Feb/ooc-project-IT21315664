//Created by IT21318184 - Visura Surajitha De Silva
#include <Report.h>

Report::Report(int rNo)
{
  reportNo = rNo;
}

void Report::generateFlightReport()
{
  
}

void Report::generatePaymentReport()
{
 
}

void Report::generateTicketReport()
{
 
}

Report::~Report()
{
  cout<<"ReportNo:"<< rNo << "Deleted" << endl;
}