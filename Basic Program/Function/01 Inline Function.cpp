#include<iostream>
#include<conio.h>
using namespace std;

inline int rect(int x,int y)
{
    return (x * y);
}
int main()
{
    cout<<endl<<"Area of Rectangle is :"<<rect(6,3);
    getch();
    return 0;
}
