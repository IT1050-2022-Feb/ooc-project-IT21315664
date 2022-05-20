//Created by IT21321122
#include<iostream>
#include <cstring>
using namespace std;

//Ticket.cpp
Ticket::Ticket()
{
 ticketNo=0;
 strcpy(ticketType,"");
 price=0.0;
}
Ticket::Ticket(int ticketNo,char ticketType[],double price){

 ticketNo=ticketNo;
 strcpy(ticketType,ticketType);
 price=price; 
}
void Ticket::setTicketNo()
{
  
}

void Ticket::setPrice()
{
  
}

Ticket::~Ticket(){
cout<<"ticketNo"<<ticketNo<<endl;
}