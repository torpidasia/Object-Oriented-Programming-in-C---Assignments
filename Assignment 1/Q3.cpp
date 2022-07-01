/*Write a C++ Program to Multiply
Two Matrix Using Multi-Dimensional
Arrays. This program takes two matrices of
order  r1*c1 and r2*c2 respectively. Then,
the program multiplies these two matrices
(if possible) and displays it on the screen.
Note: To multiply two matrices, the number of columns of
first matrix should be equal to the number of rows of second  matrix
*/
#include<iostream>
using namespace std;
int main()
{
int a[2][2] ={1,1,2,2};
int b[2][2] ={1,1,2,2};
int c[2][2];
c[0][0]= a[0][0] * b[0][0];
c[0][1]= a[0][1] * b[0][1];
c[1][0]= a[1][0] * b[1][0];
c[1][1]= a[1][1] * b[1][1];
cout<<"matrix a * matrix b = matrix c \n\n";

cout<<a[0][0]<<a[0][1]<<" * "<<b[0][0]<<b[0][1]<<" = "<<c[0][0]<<c[0][1];
cout<<endl;
cout<<a[1][0]<<a[1][1]<<" * "<<b[1][0]<<b[1][1]<<" = "<<c[1][0]<<c[1][1];
system("pause >0");
}
