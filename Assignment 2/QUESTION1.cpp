/*
* @author Aasia Khalid (210266)
* @date 22/02/2022
* @ Lab No 4
*/
#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class Customer
{ private:
int ID;
string Name;
string Gender;
int ContactNumber;
string Address;
public:

Customer() {        //creating a constructor
//{ int id,con;
//string g;
//string n;
//string ad;
    cout<<" Enter customer id            ";
    cin>>ID;
     cout<<" Enter customer name         ";
    cin.ignore();
    getline(cin,Name);
    cout<<" Enter customer gender        ";
     cin.ignore();
   getline(cin,Gender);
    cout<<" Enter customer number        ";
    cin>>ContactNumber;
     cout<<" Enter customer address      ";
      cin.ignore();
   getline(cin,Address);

}
void setID(int a) {  //setter
ID = a;}
int getID()  //getter
{ return ID;
}

void setContactNumber(int a) {  //setter
ID = a;}
int getContactNumber() //getter
{ return ContactNumber;
}
void setGender(string a) {     //setter
Gender = a;}
string getGender()  //getter
{ return Gender;
}
void setName(string a) {   //setter
Name = a;}
string getName()  //getter
{ return Name;
}
void setAddress(string a) {   //setter
Address = a;}
string getAddress() //getter
{ return Address;
}
~Customer (){

cout<<"\nBYE BYE!!!\n";
}

};
void display ()
{ Customer o[2]; //creating two object, called a constructor!!
    for(int i = 0; i<2;i++){
cout<<" \nID           "<<o[i].getID();
cout<<" \nName         "<<o[i].getName();
cout<<" \nGender       "<<o[i].getGender();
cout<<" \nNumber       "<<o[i].getContactNumber();
cout<<" \nAddress      "<<o[i].getAddress();
cout<<endl<<endl;
}
}
int main ()
{
display();
cout<<endl;
}

