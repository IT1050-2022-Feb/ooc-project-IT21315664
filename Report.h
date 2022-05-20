//Created by IT21318184 - Visura Surajitha De Silva
#include <iostream>
#include <cstring>
using namespace std;

class Report{
  private:
          int reportNo;
          Ticket *t01;
          Payment *p01;
          Flight *f01;
  public:
          Report(int rNo);
          void generateFlightReport();
          void generatePaymentReport();
          void generateTicketReport();
          ~Report();

};
