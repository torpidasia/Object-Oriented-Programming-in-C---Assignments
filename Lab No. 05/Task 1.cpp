/*
* @author Aasia Khalid (210266)
* @date 03/03/2022
* @ Lab No 5
*/
#include<iostream>
#include<string>
using namespace std;
class Student{

int    Roll_Number;
string   FirstName;
string   LastName;
int    Studentclass;
double Marks;
string   grade;

public:
//Set default values for class members in the default constructor.
   Student(){
int    Roll_Number=0;
string   FirstName="";
string   LastName="";
int    Studentclass=0;
double Marks=0.0;
string   grade="";
   }
//setter
void setrn(int n)
{
     Roll_Number=n;
}
void setfn(string n)
{
     FirstName=n;
}
void setln(string n)
{
    LastName=n;
}
void setsc(int n){
Studentclass=n;}
void setm(double n)
{
    Marks=n;
}
void setg(string n)
{
    grade=n;
}
  //getter
int getrn()
{
    return Roll_Number;
}
string fn()
{
    return FirstName;
}
string ln()
{
    return LastName;
}
int getsc()
{
    return Studentclass;
}
double getm()
{
    return Marks;
}
string getg()
{
    return grade;
}
};

//PrintData, which prints incoming information contained within student instance.
void printData ( Student obj)
 {
     cout<<"  ROLL NUMBER : "<<obj.getrn()<<endl;
     cout<<"  FIRST NAME  : "<<obj.fn()<<endl;
     cout<<"  LAST NAME   : "<<obj.ln()<<endl;
     cout<<"  CLASS       : "<<obj.getsc()<<endl;
     cout<<"  GRADE       : "<<obj.getg()<<endl;
     cout<<"  TOTAL MARKS : "<<obj.getm()<<endl;
 }
int main()
{

    Student a;
    //Student Information to Store: Roll Number, First Name, Last Name, Student Class, Total Marks and Grade.
    a.setrn(01);
    a.setfn("Aasia");
    a.setln("Khalid");
    a.setsc(12);
    a.setg("C");
    a.setm(78.50);
    // At last pass this class instance to a function named PrintData
    printData(a);


}
