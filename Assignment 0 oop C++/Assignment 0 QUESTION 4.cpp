/*A company hired 10 temporary workers who are paid hourly and you are asked to take a one-dimensional
array from the user that contains the last name of the employees, and a two-dimensional array that contains
the number of hours each employee worked in a week, and the hourly pay rate of each employee.
You are asked to write a program that computes each employee’s weekly pay and the average salary of
all the workers. The program then outputs the weekly pay of each employee, the average weekly pay, and
the names of all the employees whose pay is greater than or equal to
the average pay. If the number of hours worked in a week is more than 40, then the pay rate for the hours
over 40 is 1.5 times the regular hourly rate. Use two arrays: a one-dimensional array to store the names
of all the employees, and a two-dimensional array of 10 rows and 2 columns to store the number of hours
an employee worked in a week, the hourly pay rate. Your program must contain the following functions:
1. a function to take the data from the user into the arrays,
2. a function to determine the weekly pay,
3. a function to output the names of all the employees whose pay is greater than or equal to the
average weekly pay,
4. and a function to output each employee’s data.
*/

#include <iostream>
using namespace std;
//function definitions
int take_data();
int displayavg(int average);
double weeklyP();
int displayData();
string empName[10]={};
float weekP[10];
double hourlyP[10][2];

int main() //main calls the first function
{take_data();
cout<<endl<<"Data of all the employees"<<endl;
cout<<"Names  "<<" Hours  "<<" Pay Rate  "<<" Pay  "<<endl;
displayData();
return 0;
}
int take_data() //takes all the employee data
{
for (int i=0; i<10; i++)
{
cout<<"Enter the name of Employee "<<(i+1)<<" :";
cin>>empName[i];
}

for (int i=0; i<10; i++)
{cout<<"Enter the weekly hours worked and the pay rate of employee "<<(i+1)<<" : ";
for (int j=0; j<2 ; j++)
{cin >> hourlyP[i][j];}
cout<<endl;}
for(int i=0;i<10;i++)
{int j=0;
if(hourlyP[i][j]>40)
{
hourlyP[i][j+1]=1.5;
}}
weeklyP();
}
double weeklyP() //weekly pay calculator
{float sum,avg=0;
for(int i=0;i<10;i++)
{
int j=0;
weekP[i]=hourlyP[i][j]*hourlyP[i][j+1];
}
for(int i=0;i<10;i++)
{
sum+=weekP[i];
}
avg=sum/10;
cout<<endl<<"Average pay of this week: "<<avg<<endl<<endl;
displayavg(avg);
}
int displayavg(int avg)//function to display names of employes that have pay greater than average
{
cout<<"Names of employes that have pay greater than average "<<endl;
for( int i=0;i<10;i++)
{
if(weekP[i]>avg)
{
cout<<i+1<<")"<<empName[i]<<endl;}
}}
int displayData() //Display all the data
{
for(int i=0;i<10;i++)
{
cout<<empName[i]<<"      ";
for(int j=0;j<2;j++)
{
cout<<hourlyP[i][j]<<"      ";
}
cout<<weekP[i]<<endl;
}}
