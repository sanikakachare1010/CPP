#include<iostream>
#include<stdio.h>
using namespace std;

class Base1
{
    public :
             int i,j,k;

             Base1()
             {
                 cout<<endl<<"Inside Base1 Constructor!!";

             }
             ~Base1()
             {
                 cout<<endl<<"Inside Base1 Destructor!!";
             }
             void fun()
             {
                 cout<<endl<<"Inside Base1 Function!!";
             }
};
class Base2
{
       public :
                 int K,M;

                 Base2()
                 {
                     cout<<endl<<"Inside Base2 Constructor!!";
                 }
                 ~Base2()
                 {
                     cout<<endl<<"Inside Base2 Destructor!!";
                 }
                 void gun()
                 {
                     cout<<endl<<"Inside Base2 Function!!";
                 }
};
class Derived :Base1,Base2
{
     public :
             int N,O;

             Derived()
             {
                 cout<<endl<<"Inside Derived Constructor!!";
             }
             ~Derived()
             {
                 cout<<endl<<"Inside Derived Destructor!!";
             }
             void jun()
             {
                 cout<<endl<<"Inside Derived Function!!";
             }
};
int main()
{
    Base1 obj1;
    cout<<endl<<sizeof(obj1);

    Base2 obj2;
    cout<<endl<<sizeof(obj2);

    Derived obj3;
    cout<<endl<<sizeof(obj3);
}
