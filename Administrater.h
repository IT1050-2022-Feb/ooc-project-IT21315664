//Created By -IT21319860- Tharun Nilanka Gunarathna
#include <iostream>
#include <cstring>
using namespace std;
//class Administrator

class Administrator : public UnregisteredUser {
protected : 
char adminID [20];

public:
Administrator();
Administrator(char Aname[], char AcontactNumber[], char Aemail[], char Apassword[]);
void setAdminID();
~Administrator();
};