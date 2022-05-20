//Created by IT21315800- Geethanjalee Lakshika Warnakulasooriya

#include <iostream>
#include <cstring>
#include "RegisteredUser.h"
using namespace std;

//class Registered User
//Registered user .h

class registeredUser : public UnregisteredUser {
protected:

char userID[10];
Ticket * ticket;
Feedback f1;

public:
registeredUser(Ticket *tr);
registeredUser(char name[], char contactNumber[], char email[], char password[]);
void login(char remail[] , char rpassword[]);
void setUserID();
~registeredUser();
};

