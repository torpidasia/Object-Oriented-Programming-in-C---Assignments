/*Write a C++ program to accept five integer values from user and
 store them in an array. Then find and print the largest and
 smallest integer value in the array using pointers.
*/
#include<iostream>
using namespace std;
int main()
{
int a[5];
cout<<"Enter five number \n";
{for(int y = 0; y < 5 ;y++)
cin>>a[y];}
int largest;
largest = a[0];

cout<<"The Largest number ";
for(int y = 1; y < 5 ;y++)
  {

if (largest<a[y])
{
    largest = a[y];

}}
int *large =&largest;
    cout<<*large<<endl;




int smallest;
smallest = a[0];

cout<<"The smallest number ";
for(int y = 1; y < 5 ;y++)
  {

if (smallest>a[y])
{
    smallest = a[y];

}}
int *small =&smallest;
    cout<<*small<<endl;

/*
fail try

int smol =*small;
int *small;
smol = &a[0];
cout<<"The smallest number ";
for(int y = 1; y < 5 ;y++)
  {

if (*small>smol)
{
    smallest = *small;

}}

    cout<<*small<<endl;
*/
}
