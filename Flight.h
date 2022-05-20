//IT21315664_Himasha Sandanika Rajawasan

#include <iostream.
#include <cstring>
using namespace std;

class Flight{
protected:
char flightId[5];
char flightName[20];
Ticket tt;

public:
Flight();
Flight(char flightId[], char flightName[]);
void setFlightId();
void setFlightName();
~Flight();
};
