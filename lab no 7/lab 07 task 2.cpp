/*
* @author Aasia Khalid (210266)
* @date 23/03/2022
* @ Lab No 7
*/

#include<iostream>
#include <string>
using namespace std;
class staff {
	int Staff_id;
	string name;
	int salary;
public:
	void inputData()
	{
		int i=0, s=0;
		string n="";
		cout << "\n Enter the staff id     :: ";
		cin >> i;
		setid(i);
		cout << "\n Enter the staff name   :: ";
		cin >> n;
		setname(n);
		cout << "\n Enter the staff salary :: ";
		cin >> s;
		setsalary(s);

	}
	void setid(int i)
	{
		Staff_id = i;
	}
	void setname(string n)
	{
		name = n;
	}
	void setsalary(int s)
	{
		salary = s;
	}
	staff()
	{
		Staff_id = 0;
		name ="";
		salary = 0;
	}
	int geti()
	{
		return Staff_id;
	}
	string getn()
	{
		return name;
	}
	int gets()
	{
		return salary;
	}
	void display()
	{
		cout << "\n staff id     :: " << geti();
		cout << "\n staff name   :: " << getn();
		cout << "\n staff salary :: " << gets();
	}
	void sortname(staff obj,staff obj2)
	{
		int e=0,e1=0;
		e = obj.name[0] - 48;
		e1 = obj2.name[0] - 48;

		if (e < e1)
		{
			 obj.display();
			 cout << endl;
			 obj2.display();


		}
		else
		{
			obj2.display();
			cout << endl;
			obj.display();
		}
		
	}
};
int main()
{
	staff obj1, obj2;
	staff to;
	char c = 0;
	cout << " press 1 :: To accept data from the user \n";
	cout << " press 2 :: To display data of the staff \n";
	cout << " press 3 :: To sort the data of the staff \n\n";
	do {
		int a;

		cout << " Enter your choice \n";
		cout << " "; cin >> a;
		if (a == 1)
		{
			obj1.inputData();
			cout << endl;
			obj2.inputData();
		}
		else if (a == 2)
		{
			obj1.display();
			cout << endl;
			obj2.display();
		}
		else if (a == 3)
		{
			to.sortname(obj1, obj2);
		}
		cout << "\n\n Do You want to try again \n press Y to try again ";
		cout << " "; cin >> c;
	} while (c == 'y' || c == 'Y');
	return 0;
}
