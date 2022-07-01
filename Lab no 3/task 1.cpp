/*
* @author Aasia KHAlid (210266)
* @date 15/02/22
* @ Lab No 3
*/

#include<iostream>
#include<vector>

using namespace std;

/*Write a program that will receive user data of birth e.g. year, day, and month. Display date
of birth in a format as: dd/mm/yy. Use functions to get and display the date of birth.*/

struct birth {
int year,day,month;
};

birth get(birth o);
void print(birth o);
int main()
{ birth o;
  o= get(o);
  print(o);
return 0;
}



birth get(birth o)
{
    cout<<"  ENTER YEAR OF DOB    ";
    cin>>o.year;
    cout<<"\n  ENTER DAY OF DOB     ";
    cin>>o.day;
    cout<<"\n  ENTER month OF DOB   ";
    cin>>o.month;
    return o;
}
void print(birth o)
{
    cout<<endl<<"      "<<o.day<<"/"<<o.month<<"/"<<o.year<<endl<<endl;
}
