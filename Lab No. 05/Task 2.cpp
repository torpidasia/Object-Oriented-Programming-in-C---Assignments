/*
* @author Aasia Khalid (210266)
* @date 03/03/2022
* @ Lab No 5
*/
#include<iostream>
#include<string>
using namespace std;
class AddAmount{

int amount = 50;// Bank Account with an initial amount of $50
public:
    AddAmount()
    {
        cout<<"  NO AMOUNT IS ADDED IN YOUR BANK ACCOUT"<<endl;
        cout<<"  YOUR CURRENT BALANCE IS :"<<amount<<"$"<<endl<<endl;
    }
    AddAmount(int money)
    {
        amount = amount + money;

    }
    void printFinalAmount()
    {
        cout<<"  FINAL AMOUNT IN YOUR BANK ACCOUNT IS : "<<amount<<"$"<<endl<<endl;
    }

};
int main()
{
    AddAmount a; //constructor #1 Without any parameter - no amount will be added to the Bank Account.

   int c;
    cout<<"  ADD AMOUNT IN YOUR BANK ACCOUNT ";
    cin>>c;
    AddAmount b (c); //constructor #2 Having a parameter which is the amount that will be added to the Bank Account
    cout<<endl;
    b.printFinalAmount(); // Create an object of the 'AddAmount' class and display the final amount in the Bank Account.
    cout<<"  ";system("pause");
}
