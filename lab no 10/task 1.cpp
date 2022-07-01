#include<iostream>
using namespace std;
class Distance
{
	float fuel_price ;
	float distanceTraveled;
	float Avg;
	public:
		Distance()
		{
			fuel_price=0.0;
			distanceTraveled=0.0;
		}
	Distance(float f,float dt)
		{
			fuel_price=f;
			distanceTraveled=dt;
		}
		Distance operator +(const Distance &b){
			Distance temp;
			temp.distanceTraveled=distanceTraveled+b.distanceTraveled;
			return temp;
		}
		Distance operator /(const float &a)
		{
			Distance temp2;
			temp2.Avg=distanceTraveled/a;
			return temp2;
		}
		void DisaplayAverage()
		{
			
			cout<<"The Average Distance Covered is "<<Avg;
		}
};
int main ()
{Distance Distance1(100.0,10);
	Distance Distance2(100.0,20);
	Distance Distance3(100.0,40);
	Distance Distance4(100.0,20);
	Distance Distance5(100.0,30);
	Distance Distance6(100.0,20);
	Distance AVERAGE;
	
	AVERAGE=(( (((Distance1+Distance2)+Distance3)+Distance4)+Distance5)+Distance6)/(6);
AVERAGE.DisaplayAverage();
}
