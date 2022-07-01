/*@NAME:: AASIA KHALID
@REG ID :: 210266
@DATE :: 23/04/2022
*/
#include <iostream>
using namespace std;
class toll {
	int wheels = 0;
	int tax = 0;
	int fine = 0;
public:
	int totalTax = 0;
	toll()
	{
		this->wheels = 0;
		this->fine = 0;
		this->tax = 0;
		//totalTax = 0;
	}
	toll operator +(toll& obj)
	{
		toll v1;

		v1.tax = tax + obj.tax;
		return v1;
	}
	toll operator -()
	{
		toll v;

		v.totalTax = tax - 5;
		return v;
	}
	int getfine()
	{
		return fine;
	}
	void operator ++()
	{
		toll v;


		fine = fine + 1;

	}
	int gettax()
	{
		return tax;
	}


	friend ostream& operator << (ostream& ab, toll& d);
	friend istream& operator >> (istream& a, toll& d);

};
ostream& operator << (ostream& ab, toll& d)
{
	ab << "TOTAL TAX COLLECTED OF 6 VEHICLE IN ONE DAY ::" << d.tax << endl;


	return ab;

}
istream& operator >> (istream& a, toll& d)
{
	// cout << "ENTER THE NUMBER OF WHEELS OF A VEHICAL \n";
	a >> d.wheels;
	d.tax = d.wheels * 6;

	return a;
}
int main()
{
	toll vehicle[6];
	toll total;

	for (int i = 0; i < 6; i++)
	{
		cout << "ENTER VEHICLE " << i + 1 << " WHEEL NUMBER\n";
		cin >> vehicle[i];

	}

	total = (((((vehicle[0] + vehicle[1]) + vehicle[2]) + vehicle[3]) + vehicle[4]) + vehicle[5]);
	cout << total;
 total= -total ;
	cout << "DEDUCTED 5 FROM TOTAL TAX ::";
	cout << total.totalTax << endl;

	++vehicle[3];
	cout << "THIS VECHICLE 4 IS FINED " << vehicle[3].getfine() << " RS"<<endl
		<< endl;
	++vehicle[3];
	cout << "THIS VECHICLE 4 IS FINED AGAIN , ITS TOTAL FINE NOW " << vehicle[3].getfine() << " RS" << endl
		<< endl;
	system("pause>0");
	return 0;
}
