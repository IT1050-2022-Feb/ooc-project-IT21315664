//Created By -IT21319860- Tharun Nilanka Gunarathna
#include <iostream>
#include <cstring>
using namespace std;

//class Unregistered User

class UnregisteredUser {
protected:
char name[20];
char contactNumber[20];
char email[20];
char password[20];

public:
UnregisteredUser();
UnregisteredUser(char Uname[], char UcontactNumber[], char Uemail[], char Upassword[]);
void setName();
void setContactNumber();
void setEmail();
void setPassword();
~UnregisteredUser();
};