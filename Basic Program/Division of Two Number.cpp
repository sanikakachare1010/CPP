#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int No1 = 0, No2 = 0,Div = 0;

    cout<<"\n Enter 1st Number : ";
    cin>>No1;
    cout<<"\n Enter 2nd Number : ";
    cin>>No2;

    Div = No1 / No2 ;

    cout<<endl<<"Division of "<<No1<<" and "<<No2<<" is "<<Div;

    getch();
    return 0;

}


