//Created By -IT21319860- Tharun Nilanka Gunarathna
#include <iostream>
#include <cstring>
#include "Administrater.h"
using namespace std;
//.cpp for Administrator

Administrator::Administrator()
{
  strcpy(name,"");
  strcpy(adminID,"");
}
Administrator::Administrator(char Aname[], char AcontactNumber[], char Aemail[], char Apassword[])
{
  strcpy(name,Aname);
  strcpy(contactNumber,AcontactNumber);
  strcpy(email, Aemail);
  strcpy(password,Apassword);
  
}
void Administrator::setAdminID()
{
  
}
Administrator::~Administrator()
{
  cout<<"AdminID:"<< adminID << "Deleted" << endl;
}
