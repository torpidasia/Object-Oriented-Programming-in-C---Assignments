#pragma once
#include<iostream>
using namespace std;
class Employee {
    string FirstName;
    string SecondName;
    int MonthlySalary;
public:
    Employee(string FN, string SN, int MS);
    void setname1(string fn);
    void setname2(string sn);
    void setSalary(int s);
    string getname1();
    string getname2();
    int getSalary();
    void raise();
    void display();
};
