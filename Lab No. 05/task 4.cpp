/*
* @author Aasia Khalid (210266)
* @date 03/03/2022
* @ Lab No 5
*/
#include<iostream>
#include<string>
using namespace std;
class Circle {
int radius;//declare radius in private
public:
void setRadius()
{
    int r= radius;//setter
}
int getRadius ()
{
    return radius;//getter
}
int getArea()
{
    return 3.14159*radius*radius; //a function named getArea that returns the area of the circle.
}
Circle() {
radius=0;
}

void inputradius()
{
    cout<<"  ENTER RADIUS OF THE CIRCLE : ";
    cin>>radius;

}
};
int main ()
{
    Circle a;
    cout<<endl;
    a.inputradius();
    cout<<endl;
    cout<<"  THE RADIUS OF CIRCLE IS : "<<a.getArea();
    cout<<endl<<endl;
    cout<<" ";system("pause");

}
