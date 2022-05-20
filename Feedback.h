//Created by IT21321122
#include<iostream>
#include<cstring>
using namespace std;

// class Feedback
//Feedback.h
class Feedback
{
private:
int feedbackId;
char fDescription[30];

public:
Feedback();
Feedback(int id, char desc[]);
void setfDescription();
~Feedback();
};
