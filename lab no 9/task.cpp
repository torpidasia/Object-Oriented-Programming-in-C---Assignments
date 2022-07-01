/*
* @author Aasia Khalid (210266)
* @date 08/03/2022
* @ Lab No 6
*/
#include<iostream>
#include<string>
using namespace std;
class Student //Create a Student class
{ public:
// name, registration number,
// father name,
// degree and department
string name;
int regNo;
string fathername;
string degree;
string department;
static int c;

Student(){
 c++;
cout<<"  ENTER THE STUDENT NAME                  : ";
cin>>name;
cout<<"  ENTER THE STUDENT'S FATHER NAME         : ";
cin>>fathername;
cout<<"  ENTER THE STUDENT'S REGISTERATION NUMBER: ";
cin>>regNo;
cout<<"  ENTER THE STUDENT'S DEPARTMENT          : ";
cin>>department;
cout<<"  ENTER THE STUDENT'S DEGREE              : ";
cin>>degree;
cout<<endl<<endl;}

void display() const
{

cout<<"  STUDENT NAME        "<<name<<endl;
cout<<"  REGISTRATION NUMBER "<<regNo<<endl;
cout<<"  FATHER  NAME        "<<fathername<<endl;
cout<<"  STUDENT DEGREE      "<<degree<<endl;
cout<<"  STUDENT DEPARTMENT  "<<department<<endl;
}
};
int Student::c = 0;
int main ()
{
 const Student a1,a2; //constant class object
 cout<<endl<<endl;
 a1.display(); //calling display function
 cout<<endl<<endl;
 a2.display();
cout<<endl<<endl;
cout<<"  NUMBER OF STUDENT IS "<<Student::c;
cout<<endl<<endl;
}
