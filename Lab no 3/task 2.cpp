/*
* @author Aasia KHAlid (210266)
* @date 15/02/22
* @ Lab No 3
*/

#include<iostream>
#include<conio.h>

using namespace std;

/*Write a program that declares a structure to store id, name, and prices of a book. It defines
an array of structures to store the record of three books. Input the records of three books and display the
record of most costly book.*/

struct book {
int id;
double price;
string name;
};

book get(book o);

int main()
{ book o1,o2,o3;
  o1= get(o1);
  cout<<endl<<endl;
  o2= get(o2);
  cout<<endl<<endl;
  o3= get(o3);
  cout<<endl<<endl;

  if (o1.price>o2.price&&o1.price>o3.price)
  {
      cout<<"  THE RECORD OF MOST COSTLY BOOK "<<endl<<endl;
      cout<<"  BOOK ID    "<<o1.id<<endl;
      cout<<"  BOOK NAME  "<<o1.name<<endl;
      cout<<"  BOOK PRICE "<<o1.price<<endl;
  }
  else  if (o2.price>o1.price&&o2.price>o3.price)
  {
      cout<<"  THE RECORD OF MOST COSTLY BOOK "<<endl;
      cout<<"  BOOK ID    "<<o2.id<<endl;
      cout<<"  BOOK NAME  "<<o2.name<<endl;
      cout<<"  BOOK PRICE "<<o2.price<<endl;
  }
  else

  {
      cout<<"  THE RECORD OF MOST COSTLY BOOK "<<endl;
      cout<<"  BOOK ID    "<<o3.id<<endl;
      cout<<"  BOOK NAME  "<<o3.name<<endl;
      cout<<"  BOOK PRICE "<<o3.price<<endl;
  }

return 0;
}



book get(book o)
{
    cout<<"  ENTER BOOK ID         ";
    cin>>o.id;
   /* cout<<"\n  ENTER BOOK NAME     ";
    cin.get(o.name,50);*/
    cout<<"\n  ENTER BOOK NAME       ";
    cin>>o.name;
    cout<<"\n  ENTER BOOK PRICE      ";
    cin>>o.price;

    return o;
}

