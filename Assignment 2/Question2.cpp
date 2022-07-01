/*
* @author Aasia Khalid (210266)
* @date 22/02/2022
* @ Lab No 4
*/
#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class Account
{ private:
double balance;

public:

Account() {        //creating a constructor
balance = 1000;

}
double Credit ()
{   double credit;
    cout<<" \n  ENTER THE AMOUNT YOU WANT TO DEPOSIT IN YOUR ACCOUNT ";
    cin>>credit;
    balance= balance + credit;
    return balance;
}
double debit ()
{ double debit;
    cout<<" \n  ENTER THE AMOUNT YOU WANT TO WITHDRAW FROM YOUR ACCOUNT ";
    cin>>debit;
    balance = balance - debit;
    return balance;
}
void getBalance () {
     if(balance>=0)
{
    cout<<" \n  YOU HAVE THIS MUCH BALANCE IN YOU ACCOUNT "<<balance<<"Rs.";}
    else
   {cout<<" \n  DEBIT AMOUNT EXCEEDED ACCOUNT BALANCE AND YOU ARE ALSO FINED RS.15 "<<endl;
    cout<<"     REMAINING BALANCE "<<balance-15;


   }}

};



int main ()
{  Account o;
   o.Credit();
   o.debit();
   o.getBalance();
   cout<<endl<<endl<<endl;
   system("pause");
}
