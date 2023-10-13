///Program to Find Area Using Constructor Overloading.
#include<iostream>
#include<conio.h>
using namespace std;

class rect
{
       public :
               int l,b,a;

           rect()
           {
               cout<<"Inside default Constructor";
           }
           rect(int x)
           {
               l = x;
               b = 4;
           }
           rect(int x,int y)
           {
               l = x;
               b = y;
           }
           void getarea()
           {
               a =  l * b;

               cout<<endl<<"Area of Triangle"<<a;
           }

};
int  main()
{
    rect r;
    rect r1(6);
    rect r2(8,9);
    r1.getarea();
    r2.getarea();
    getch();
    return 0;
}
