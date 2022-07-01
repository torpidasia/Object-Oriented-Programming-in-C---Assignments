//You are creating an Animal System for a Zoo in Islamabad.You are required to keep all
//kinds of information related to all animals.
//Create a base Animal Class containing basic animal detail(petName, Specie Name, Weight,
//    Food) and child class (named on Animal’s Name) should contain custom animal detail in
//    parameters.For Instance, custom attributes of Snakeand Lion are given below.
//    o Snake(Length, IsPoisons)
//    o Lion(NumberFeet, Speed, IsDangerous)
//    o Eagle(--------Add 3 Custom Features--------)
#include <iostream>
using namespace std;
class Animal
{
protected:
    string petName, SpecieName, food;
    int Weight;
public:
    Animal() {
  
        cout << "\nENTER PET NAME :: ";
        cin >> petName;
        cout << "\nENTER SPECIE NAME :: ";
        cin >> SpecieName;
        cout << "\nENTER PET FOOD :: ";
        cin >> food;
        cout << "\n ENTER PET WEIGHT ::";
        cin >> Weight;

    }


};
class Snake : public Animal
{
protected:
    int lenght;
    string ispoison;
public:
    Snake(int length,string ispoison)
    {
        this->lenght = length;
        this->ispoison = ispoison;
    }
    void display()
    {
        cout << "\nPET NAME : " << petName;
        cout << "\nSPECIE NAME: " << SpecieName;
        cout << "\nFOOD : " << food;
        cout << "\nWeight : " << Weight;
        cout << "\nLENGHT : " << lenght;
        cout << "\nIS POISION :" << ispoison;
   }
};
class Lion : public Animal
{
protected:
    int NumberFeet, Speed;
    string IsDangerous;

public:
    Lion(int NumberFeet,int Speed,string IsDangerous)
    {
        this->NumberFeet = NumberFeet;
        this->Speed = Speed;
        this->IsDangerous = IsDangerous;

    }  
    void display()
    {
        cout << "\nPET NAME : " << petName;
        cout << "\nSPECIE NAME: " << SpecieName;
        cout << "\nFOOD : " << food;
        cout << "\nWeight : " << Weight;
        cout << "\nNUMBER OF FEET : " << NumberFeet;
        cout << "\nSPEED :" << Speed;
        cout << "\nIS DANGEROUS :" << IsDangerous;
    }
};
class Eagle : public Animal
{
protected:
    string biggest_birds; 
    int eaglespecies ;
    int seeup;

public:
    Eagle(int seeup, int eaglespecies, string biggest_birds)
    {
        this->seeup = seeup;
        this->eaglespecies = eaglespecies;
        this->biggest_birds = biggest_birds;
    }
    void display()
    {
        cout << "\nPET NAME : " << petName;
        cout << "\nSPECIE NAME: " << SpecieName;
        cout << "\nFOOD : " << food;
        cout << "\nWeight : " << Weight;
        cout << "\nSEE UP TO : " << seeup;
        cout << "\nEAGLE SPECIES :" << eaglespecies;
        cout << "\nBIGGEST BIRD :" << biggest_birds ;
        ;
    }
};
int main()
{
    int lenght, NumberFeet = 0, Speed = 0, eaglespecies = 0, seeup = 0;
    string ispoison, IsDangerous, biggest_birds;
    cout << "\n----------------------------------------";
    cout << "\nEnter Snake Lenght ";
    cin >> lenght;
    cout << "\nIS SNAKE POISIONUS ?";
    cin >> ispoison;
    Snake a1(lenght, ispoison);
    cout << "\n----------------------------------------";
    cout << "\nEnter LION NUMBER OF FEET ";
    cin >> NumberFeet;
    cout << "\nENTER LION SPEED ?";
    cin >> Speed;
    cout << "\nIS LION DANGEROUS ?";
    cin >> IsDangerous;
    Lion a2(NumberFeet, Speed, IsDangerous);
    cout << "\n----------------------------------------";
    cout << "\nEnter HOW FAR EAGLES CAN SEE UP TO ";
    cin >> seeup;
    cout << "\nHOW MANY EAGLE SPECIES ARE THERE ?";
    cin >> eaglespecies;
    cout << "\nIS EAGLE  BIGGEST BIRD ?";
    cin >> biggest_birds;
    Eagle a3(seeup, eaglespecies, biggest_birds);
    cout << "\n----------------------------------------";
    cout << "\n----------------------------------------";
    cout << "\n---------------____ZOO____--------------";
    a1.display();
    cout << endl;
    a2.display();
    cout << endl;
    a3.display();
    cout << "\n----------------------------------------";
    cout << "\n----------------------------------------";
    cout << "\n---------------____ZOO____--------------";
    cout << endl << endl;
}
