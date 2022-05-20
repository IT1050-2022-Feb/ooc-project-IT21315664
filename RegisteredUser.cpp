//Created by IT21315800- Geethanjalee Lakshika Warnakulasooriya
#include <iostream>
#include <cstring>
#include "registeredUser.h"
using namespace std;

//.cpp for Registered User

registeredUser::registeredUser(Ticket *tr)
{
  ticket = tr;
  strcpy(name,"");
  strcpy(contactNumber,"");
  strcpy(email,"");
  strcpy(password,"");
  
}
registeredUser::registeredUser(char rname[], char rcontactNumber[], char remail[], char rpassword[])
{
  strcpy(name,rname);
  strcpy(contactNumber,rcontactNumber);
  strcpy(email,remail);
  strcpy(password,rpassword);
  
}
void registeredUser:: login(char remail[] , char rpassword[])

{
  cout<<"Logged";
}
void registeredUser::setUserID()
{
  
}
registeredUser::~registeredUser()
{
  cout<<"UserID:"<< userID << "Deleted" << endl;
  
}


