// (Multi - level Inheritance) Write a C++ program to calculate the percentage of a student using
//multi-level inheritance. Accept the marks of three subjects in base class. A class will be
//derived from the above mentioned class which includes a function to find the total marks
//obtained and another class derived from this class which calculates and displays the
//percentage of the student.
#include <iostream>
using namespace std;
class base
{
protected:
    int engmarks;
    int mathmark;
    int scimark;
public:
    base() {
        engmarks = 0;
        mathmark = 0;
        scimark = 0;
        cout << "\nENTER MATH MARKS out of  10: ";
        cin >> mathmark;
        cout << "\nENTER SCIENCE MARKS out of 10: ";
        cin >> scimark;
        cout << "\nENTER ENGLISH MARKS out of 10: ";
        cin >> engmarks;
    }


};
class derived : public base
{
protected:
    int total;
public:
    derived()
    {

    }
    int totalz()
    {
        total = engmarks + scimark + mathmark;
        return total;
    }
};
class driveds : public derived
{
protected:
    int percentage;
    int totalob = 30;
public:
    driveds()
    {

    }
    int m = totalz();
    int calper()
    {
        percentage = (m * 100) / totalob;
        return percentage;
    }
};
int main()
{
    driveds a;
    cout << "\nStudent Overall Parecentage is " << a.calper() << "%";
    cout << endl << endl;
}
