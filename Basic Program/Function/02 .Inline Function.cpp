#include<iostream>
#include<conio.h>
using namespace std;

inline  int rect (int x,int y)
{
    return(x * y);
};
int main()
{
    int l = 0,b = 0;
    cout<<endl<<"Enter length :";
    cin>>l;
    cout<<endl<<"Enter Breadth :";
    cin>>b;
   cout<<"Area of Rectangle is :"<<rect(l,b);
    getch();
    return 0;

}
