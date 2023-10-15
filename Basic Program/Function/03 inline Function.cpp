#include<iostream>
#include<conio.h>
using namespace std;

inline  int tri(int x,int y)
{
    return(0.5*x * y);
};
int main()
{
    int b = 0,h = 0;
    cout<<endl<<"Enter Base :";
    cin>>b;
    cout<<endl<<"Enter height :";
    cin>>h;
   cout<<"Area of Triangle is :"<<tri(b,h);
    getch();
    return 0;

}

