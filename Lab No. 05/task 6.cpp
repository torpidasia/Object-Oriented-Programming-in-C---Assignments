/*
* @author Aasia Khalid (210266)
* @date 03/03/2022
* @ Lab No 5
*/
#include<iostream>
#include<string>
using namespace std;
class Car{


int yearModel;
string make ;
int speed;
public:

Car(int n, string m)
{
    yearModel=n;
    make=m;
    speed=0;
}
void set(int a, string m, int s)
{
    yearModel=a;
    make=m;
    speed=s;

}
int gety()
{
    return yearModel;
}
string getm()
{
    return make;
}
int gets()
{
    return speed;
}
int accelerate()
{
    speed=speed+5;
    return speed;
}
int brake ()
{
    speed-=speed-5;

    return speed;
}
};
int main()
{
    Car o(2018,"auto");
    cout<<"Speed after first acceleration  : "<<o.accelerate()<<endl;
    cout<<"Speed after second acceleration : "<<o.accelerate()<<endl;
    cout<<"Speed after third acceleration  : "<<o.accelerate()<<endl;
    cout<<"Speed after fourth acceleration : "<<o.accelerate()<<endl;
    cout<<"Speed after fifth acceleration  : "<<o.accelerate()<<endl<<endl;
//     int s = o.gets();
o.brake();
     cout<<"Speed after first brake  : "<<o.gets()<<endl;

    cout<<"Speed after second brake : "<<o.brake()<<endl;

    cout<<"Speed after third brake  : "<<o.brake()<<endl;

    cout<<"Speed after fourth break : "<<o.brake()<<endl;

    cout<<"Speed after fifth break  : "<<o.brake()<<endl;
}
