//Created by IT21321122
#include<iostream>
#include<cstring>
using namespace std;

//class Ticket
//Ticket.h
class Ticket{

private:
int ticketNo;
char ticketType[20];
double price;

public:
Ticket();
Ticket(int ticketNo,char ticketType[],double price);
void setTicketNo();
void setPrice();
~Ticket();

};
