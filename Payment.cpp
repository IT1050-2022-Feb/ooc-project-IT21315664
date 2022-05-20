//created by IT21315664_Himasha Sandanika Rajawasan

#include <iostream.
#include <cstring>
#include "Payment.h"
using namespace std;

//payment.cpp
Payment::Payment(){
  strcpy(paymentId,"");
  strcpy(cardNo,"");
  Price=0.0;
}

Payment:: Payment(char PpaymentId[], char PcardNo[], double Pprice){
strcpy(paymentId,PpaymentId);
strcpy(cardNo,PcardNo);
 Price=Pprice;
  
}
void Payment::setPaymentId(){
  cout<<"payment Id:"<<paymentId<<endl;
  

}
void Payment::setCardNo(){
    cout<<"Payment card number:"<<cardNo<<endl;

}
void Payment::setPrice(){
    cout<<"Price:" << Price<<endl;
}
Payment::~Payment()
{
cout<<"paymentId :"<<paymentId << "Deleted"<< endl;
}

