///Program Using Function Overloading with different datatypes.
#include<iostream>
#include<conio.h>
using namespace std;
void rect();
void rect(int x);
void rect(int x,int y);

void rect()
{
    int area;
    int x = 4;
    int y = 6;
    area = x * y;
    cout<<"\n Area of Rectangle :"<<area;

}
void rect(int x)
{
    int area;
    int y = 12;
    area = x *y;
    cout<<"\n Area of Rectangle :"<<area;
}
void rect(int x,int y)
{
    int area;
    area = x * y;
    cout<<"\n Area of Rectangle :"<<area;
}
int main()
{
    rect();
    rect(6);
    rect(3,9);
    cout<<"\n Thanks";
    getch();
    return 0;
}


