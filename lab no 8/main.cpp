#include<iostream>
#include "employee.h"
using namespace std;
int main()
{
	int x, y;
	cout << " Employee 1 salary and Employee 2 salary ";
	cin >> x >> y;
	Employee emp1("Aasia ", "Khalid",x);
	Employee emp2("Nisha ", "Baloch", y);
	emp1.display();
	cout << endl;
	emp2.display();
}

