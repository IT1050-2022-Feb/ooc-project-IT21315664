//Created by IT21321122
#include<iostream>
#include<cstring>
using namespace std;

//Feedback.cpp 
Feedback::Feedback()
  {
    strcpy(fDescription,"");
    feedbackId = 0;
  }

Feedback::Feedback(int id,char desc[])
{
  strcpy(fDescription,desc);
  feedbackId = id;
}
void Feedback::setfDescription()
{
  
}

Feedback::~Feedback()
{
  cout<<"Feedback ID:"<<feedbackId<<"Deleted";
}