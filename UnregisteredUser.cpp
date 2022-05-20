//Created By -IT21319860- Tharun Nilanka Gunarathna
#include <iostream>
#include <cstring>
#include "UnregisteredUser.h"
using namespace std;
UnregisteredUser::UnregisteredUser()
{
  strcpy(name,"");
  strcpy(contactNumber,"");
  strcpy(email,"");
  strcpy(password,"");
  
}
UnregisteredUser::UnregisteredUser(char Uname[], char UcontactNumber[], char Uemail[], char Upassword[])
{
  strcpy(name,Uname);
  strcpy(contactNumber,UcontactNumber);
  strcpy(email,Uemail);
  strcpy(password,Upassword);
  
}

//.cpp for Unregistered User

void UnregisteredUser::setName()
{
  
}
void UnregisteredUser::setContactNumber()
{
  
}
void UnregisteredUser::setEmail()
{
  
}
void UnregisteredUser::setPassword()
{
  
}
UnregisteredUser::~UnregisteredUser()
{
  cout<<"GuestName:"<< name << "Deleted" << endl;
}