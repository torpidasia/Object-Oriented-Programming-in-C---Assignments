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
//void setRadius()
//{
//    int r= radius;//setter
//}
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
Circle(int r) {
radius=r;
}

};
int main ()
{   int r;
    Circle a;
    cout<<"  RADIUS OF OBJECT a OF A CIRCLE IS : 0 (by default)";
    cout<<endl<<endl;
    cout<<"  ENTER RADIUS OF THE CIRCLE : ";
    cin>>r;
    Circle b(r);

    cout<<endl;
    cout<<"  THE RADIUS OF CIRCLE OF OBJECT a IS : "<<a.getArea();
    cout<<endl;
    cout<<"  THE RADIUS OF CIRCLE OF OBJECT b IS : "<<b.getArea();
    cout<<endl<<endl;
    cout<<" ";system("pause");

}
