#include <iostream>
#include <cstring>
#include "Unregistered.h"
#include "Administrator.h"
#include "Report.h"
#include "RegisteredUser.h"
#include "Payment.h"
#include "Flight.h"
#include "Ticket.h"
#include "Feedback.h"
using namespace std;

int main()
{
  UnregisteredUser uuser1("Tharun","0772632577","tharun@gmail.com","t123");
  Administrator admin1("Nilanka","0123456987","nila@gmail.com","n123");

  registeredUser * r = new registeredUser(&ticket);
  delete r;

  registeredUser * rf = new registeredUser("geethanjali" , "0772632577","abcd@mail.com", "6479");
  delete rf;

  Flight * f = new Flight("F12","Qantaz");
  delete f;
  
  Payment * pay = new Payment ("12", "256548632",2000.0);
  delete pay;

  Report * r = new Report(001);
  delete r; 

  Feedback 
  feedback(11587,"comfortable and cheep airline");
  
  Ticket
  ticket(123 , "A", 2500.0);

  return 0;
}

