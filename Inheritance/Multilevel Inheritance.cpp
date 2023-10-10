#include<iostream>
#include<stdio.h>
using namespace std;

class Base
{
    public :
             int i,j,k;

             Base()
             {
                 cout<<endl<<"Inside Base Constructor!!";

             }
             ~Base()
             {
                 cout<<endl<<"Inside Base Destructor!!";
             }
             void fun()
             {
                 cout<<endl<<"Inside Base Function!!";
             }
};
class Derived : public Base
{
       public :
                 int K,M;

                Derived()
                 {
                     cout<<endl<<"Inside Derived Constructor!!";
                 }
                 ~Derived()
                 {
                     cout<<endl<<"Inside Derived Destructor!!";
                 }
                 void gun()
                 {
                     cout<<endl<<"Inside Derived Function!!";
                 }
};
class Sub_Derived : public Derived
{
     public :
             int N,O;

             Sub_Derived()
             {
                 cout<<endl<<"Inside Sub Derived Constructor!!";
             }
             ~Sub_Derived()
             {
                 cout<<endl<<"Inside Sub Derived Destructor!!";
             }
             void jun()
             {
                 cout<<endl<<"Inside Sub Derived Function!!";
             }
};
int main()
{
    Base obj1;
    cout<<endl<<sizeof(obj1);

    Derived obj2;
    cout<<endl<<sizeof(obj2);

    Sub_Derived obj3;
    cout<<endl<<sizeof(obj3);
}

