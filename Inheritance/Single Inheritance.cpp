#include<iostream>
using namespace std;
#include<conio.h>


class Base_Class
{
    public:
           int i,j;

         Base_Class()
         {
             cout<<endl<<"Inside Base Class Constructor";
         }
         ~Base_Class()
         {
             cout<<endl<<"Inside Base class Destructor";
         }
         void Fun()
         {
             cout<<"\n\nBase Class Function";
         }

};
class Derived : public Base_Class
{
     public:
            int L,M,N;

        Derived()
        {
            cout<<"\n\n Inside Derived Class Constructor";
        }
        ~Derived()
        {
            cout<<"\n\nInside Derived Class Destructor";
        }
        void Gun()
        {
            cout<<endl<<"Derived Class Function";
        }
};
int main()
{
    Base_Class obj1;

    getch();

    Derived obj2;

    cout<<endl<<sizeof(obj1);
    cout<<endl<<sizeof(obj2)<<endl;
}
