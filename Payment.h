//Created by IT21315664_Himasha Sandanika Rajawasan

#include <iostream>
#include <cstring>
using namespace std;

//class-payment

class Payment{
protected:
    char paymentId[5];
    char cardNo[10];
    double Price;
    Ticket t;
    
public:
    Payment();
    Payment(char paymenetId[], char cardNo[], double price);
    void setPaymentId();
    void setCardNo();
    void setPrice();
    ~Payment();
};
