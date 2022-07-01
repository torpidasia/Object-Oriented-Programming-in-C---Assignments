/*
* @author Aasia KHAlid (210266)
* @date 15/02/22
* @ Lab No 3
*/

#include <iostream>
using namespace std;
struct student
{
int studentId;
char studentName[100];
};
int main ()
{
student s0={0,"aasia"},s1={01,"Nisha"};
student *ptr0 = &s0;
student *ptr1 = &s1;
/*s0.studentName ={"aasia"};
s0.studentId = 0;
s1.studentName ={"Nisha"};
s1.studentId = 01;*/

cout<<"   STUDENT ID  "<<"\t\t\t"<<"   STUDENT   NAME  "<<endl<<endl;

cout<<"       "<<ptr0->studentId<<"                 \t\t"<<ptr0->studentName<<endl<<endl;
cout<<"       "<<ptr1->studentId<<"                 \t\t"<<ptr1->studentName<<endl<<endl;

}
