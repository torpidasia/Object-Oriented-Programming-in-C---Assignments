#include<iostream>
#include "employee.h"
using namespace std;

Employee::Employee(string FN, string SN, int MS)
{
    string FirstName = "";
    string SecondName = "";
    int MonthlySalary = 0;
    setname1(FN);
    setname2(SN);
    setSalary(MS);
}

void  Employee::setname1(string fn)
{
    FirstName = fn;
}

void  Employee::setname2(string sn)
{
    SecondName = sn;
}

void  Employee::setSalary(int s)
{
    if (s < 0)
    {
        MonthlySalary = 0;
    }
    else
        MonthlySalary = s;
}

string  Employee::getname1()
{
    return FirstName;
}

string  Employee::getname2()
{
    return SecondName;
}

int  Employee::getSalary()
{
    return MonthlySalary;
}

void  Employee::raise()
{
    int s = MonthlySalary * 10 / 100;
    MonthlySalary = s + MonthlySalary;
}

void  Employee::display()
{
    cout << endl;
 
    cout << " Employee First   Name    " << getname1() << endl;
    cout << " Employee Second  Name    " << getname2() << endl;
    cout << " Employee Monthly Salary  " << getSalary() << endl;
    cout << " Employee yearly  Salary  " << getSalary() * 12 << endl << endl;
    cout << " Employee Getting 10 percent raise ::\n\n";
    raise();
    cout << " Employee Monthly Salary  " << getSalary() << endl;
    cout << " Employee yearly  Salary  " << getSalary() * 12 << endl;
}
