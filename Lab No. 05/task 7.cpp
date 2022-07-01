/*
* @author Aasia Khalid (210266)
* @date 03/03/2022
* @ Lab No 5
*/
#include<iostream>
#include<string>
using namespace std;
class Employee {
string name; //A string that holds the employee’s name.
int idNumber; //An int variable that holds the employee’s ID number.
string department; //A string that holds the name of the department where the employee works.
string position; //A string that holds the employee’s job title.
public:
Employee(string n,int idn,string d,string p)
{
//  A constructor that accepts the following values as arguments and
// assigns them to the appropriate member variables: employee’s name, employee’s ID number,
// department, and position.
    name=n;
    idNumber=idn;
    department=d;
    position=p;
}
Employee(string n,int idn)
{ //A constructor that accepts the following values as arguments and assigns them to the
//appropriate member variables: employee’s name and ID number.
//The department and position fields should be assigned an empty string ( "" ).
    string department="";
    string p="";
}
Employee(){
//A default constructor that assigns empty strings ( "") to the name, department,
// and position member variables,
//and 0 to the ID Number member variable.
name ="";
department="";
position="";
idNumber=0;

}
~Employee(){
// destructor, count it “Hey look I am in destructor”
cout<<" Hey look I am in destructor "<<endl;
}
void setn()
{
   string n=name; //setter
}
string getn()
{
    return name; //getter
}
void setid()
{
    int id=idNumber; //setter
}
int getid()
{
    return idNumber; //getter
}
void setd()
{
   string d=department;//setter
}
string getd ()
{
    return department;//getter
}
void setp()
{
   string p=position;//setter
}
string getp()
{
    return position;//getter
}
};
void display ()
{   Employee o,p,q;
    Employee a("Susan Meyers",47899,"Accounting","Vice President");
    Employee b ("Mark Jones ",39119,"IT","Programmer");
    Employee c ("Joy Rogers",81774,"Manufacturing ","Engineer");
    //displaying data for a object
    cout<<"\n NAME        "<<a.getn();
    cout<<"\n ID NUMBER   "<<a.getid();
    cout<<"\n DEPARTMENT  "<<a.getd();
    cout<<"\n POSITION    "<<a.getp();
    //displaying data for b object
    cout<<"\n NAME        "<<b.getn();
    cout<<"\n ID NUMBER   "<<b.getid();
    cout<<"\n DEPARTMENT  "<<b.getd();
    cout<<"\n POSITION    "<<b.getp();
    //displaying data for c object
    cout<<"\n NAME        "<<c.getn();
    cout<<"\n ID NUMBER   "<<c.getid();
    cout<<"\n DEPARTMENT  "<<c.getd();
    cout<<"\n POSITION    "<<c.getp();
    cout<<endl<<endl<<endl<<endl;
}
int main ()
{

 display();
 cout<<"\n ";system("pause");
}
