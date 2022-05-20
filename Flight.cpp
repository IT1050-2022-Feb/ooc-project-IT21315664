//IT21315664_Himasha Sandanika Rajawasan

#include <iostream.
#include <cstring>
#include "Flight.h"
using namespace std;

Flight::Flight(){
strcpy(flightId,"");
strcpy(flightName,"");
}
Flight::Flight(char FflightId[],char FflightName[]){
strcpy(flightId,FflightId);
strcpy(flightName,FflightName);
}
void Flight:: setFlightId(){
cout<<"Flight Id :"<<flightId<<endl;
}
void Flight::setFlightName(){
cout<<"Flight Name :"<<flightName<<endl;
}

Flight::~Flight()
{
cout<<"Flight Id"<<flightId<<"Deleted"<<endl;
}