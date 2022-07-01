/*
* @author Aasia Khalid (210266)
* @date 08/03/2022
* @ Lab No 6
*/

#include<iostream>
#include<string>
using namespace std;
class App{
string name; //A string that holds the employee’s name.
const int idNumber; //An int variable that holds the employee’s ID number.
string department;/*A string that holds the name
of the department where the employee works.*/
string position; //A string that holds the employee’s job title.
int CovidStatus; //Either the employee has been covid Positive or not.
public:
static int c;

static int total (){ return c;}//Create a function that reports the total employee stored so far.
App(string name ,string department,string position,int CovidStatus):idNumber(266)//Employee ID number should be constant
{
this->name = name;
this->department = department;
this->position = position;
this->CovidStatus = CovidStatus;
c++;
}
static int getrno()
{
return c;
}
void display()const
{
cout<<endl<<endl;
cout<<"  Report Number: "<<getrno()-1<<endl;
cout<<"  Name         : "<<name<<endl;
cout<<"  Id Number    : "<<idNumber<<endl;
cout<<"  Department   : "<<department<<endl;
cout<<"  Position     : "<<position<<endl;
cout<<"  Covid Status : "<<((CovidStatus == 0)?"NEGATIVE ":"POSITIVE ");
}};

int App::c = 0; //initializing static int

int main ()
{ //2 employees' data with the surety that their data could never be changed or update
 const App Emp1("Aasia","CT","Student",1);
 const App Emp2("Ahmed","HSSC-2","Student",0);
 Emp1.display();
 Emp2.display();
 cout<<endl<<endl;
 cout<<"  Reports the total employee stored so far : "<<App::getrno();
 cout<<endl<<endl;
 cout<<endl<<endl;
 cout<<"  ";system("pause");
}
