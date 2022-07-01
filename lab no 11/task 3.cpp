#include <iostream>
using namespace std;

class Vehicle
{
public:
    string color;
    string type;
    string material;
};

class Loading
{
public:
    string loading_capacity;

    Loading()
    {
        cout << "Enter Truck Details" << endl;
        cout << "Enter loading capacity" << endl;
        cin >> loading_capacity;
    }
    void lc()
    {
        cout << "truck loading capacity is " << loading_capacity << endl;
    }
};

class Sitting
{
public:
    string sitting_capacity;

    Sitting()
    {
        cout << "enter car details" << endl;
        cout << "Enter sitting capacity" << endl;
        cin >> sitting_capacity;
    }
    void sc()
    {
        cout << "car sitting capacity is " << sitting_capacity << endl;
    }
};

class Car : public Vehicle, public Sitting
{
public:
    Car()
    {
        cout << "Enter color" << endl;
        cin >> color;
        cout << "Enter type" << endl;
        cin >> type;
        cout << "Enter material" << endl;
        cin >> material;
    }
    void Cdisplay() {
        cout << "car color is " << color << endl;
        cout << "car type is " << type << endl;
        cout << "car material is " << material << endl;
    }

};

class Truck : public Vehicle, public Loading
{
public:
    Truck()
    {
        cout << "Enter color" << endl;
        cin >> color;
        cout << "Enter type" << endl;
        cin >> type;
        cout << "Enter material" << endl;
        cin >> material;
    }

    void tdisplay() {
        cout << "truck color is " << color << endl;
        cout << "truck type is " << type << endl;
        cout << "truck material is " << material << endl;
    }

};

int main()
{
    Car obj;
    Truck obj1;
    obj.Cdisplay();
    obj.sc();
    obj1.tdisplay();
    obj1.lc();
}
