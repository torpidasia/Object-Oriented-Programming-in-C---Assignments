//(Simple Inheritance) Write a C++ program to design a base class Person(name, address,
//    phone_no).Derive a class Employee(eno, ename) from Person.Derive a class Manager
//    (designation, department name, and basic - salary) from Employee.Write a menu driven
//    program to :
//o Accept all details of 'n' managers.
//o Display manager having highest salary.
#include <iostream>
using namespace std;
class Person
{protected:
    string name, address;
    int   phone_no;
public:
    Person()
    {
       
    }
    void ger()
    {
    	 cout << "ENTER THE NAME ";
        cin >> name;
        cout << "\nENTER THE ADDRESS ";
        cin >> address;
        cout << "\nENTER THE PHONE NO. ";
        cin >> phone_no;
	}
};
class Employee 
{protected:
    int eno;
    string ename;
public:
    Employee()
    {
      
    }
    void dats()
    {
    	  cout << "\nENTER THE  Employee NAME ";
        cin >> ename;
        
        cout << "\nENTER THE Employee NO. ";
        cin >> eno;
	}
};
class Manager:public Person, public Employee
{protected:
    string designation, department_name;
    int salary;
public:
Manager ()
{
	  salary = 0;
}
void datat()
{
	cout<<"---------------accept data ------------------\n";
	cout << "\nENTER THE DESIGNATATION ";
        cin >> designation;
        cout << "\nENTER THE DEPARTMENT NAME  ";
        cin >> department_name;
         cout << "\nENTER THE SALARY ";
        cin >> salary;
        ger();
        dats();
        	cout<<"------------------------- ------------------\n";
}
Manager operator < (Manager & ob)
{
Manager	 temp;

	if (salary <ob.salary )
	{
		temp.salary = ob.salary;
			cout<<endl<< ob.ename <<" have highest salary ";
	}
	else if (salary> ob.salary)
	{
		temp.salary = salary;
			cout<<endl<< ename <<" have highest salary ";
	}
	else 
	{
		cout<< " salary is equal\n";
	}
return temp;

}
int getsa()
{ return salary;
}
};
  

int main()
{int n;

	cout<<"\nDO YOU WANT TO ACCEPT DATA PRESS 1 OR DO YOU WANT TO SEE THE HIGHEST SALARY PRESS 2 \n";
	cin>>n;

		Manager a1, a2;
do {

 
    switch(n)
    {case 1:
    	 a1.datat();
    	cout<<endl;
    		 a2.datat();
    	
    		
	
case 2:
		
Manager comp ;

comp = a1<a2;

cout<<comp.getsa();

break;

	}

}while (n==1&&2);
}

