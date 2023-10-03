using namespace std;
#include<iostream>
#include<conio.h>
#include<stdio.h>

class Calculator
{
    public:
            int No1 , No2 ,Res;

            Calculator();

            Calculator(int N1,int N2);

            void Add();

            void Sub();

            ~Calculator();

};
Calculator :: Calculator()
{
    cout << endl << "\n Inside Default Constructor !!!!" << endl;

    No1 = No2 = Res = 0;
}
Calculator :: Calculator(int N1 ,int N2)
{
    cout << endl << "\n Inside Parameterized Constructor !!!!" << endl;

    No1 = N1; No2 = N2; Res = 0;
}
void Calculator :: Add()
{
    Res = No1+No2;
}
void Calculator :: Sub()
{
    Res = No1 - No2;
}
Calculator :: ~Calculator()
{
     cout<< "Inside Destructor of Our Calculator Class!!!!!"<< Res <<endl;

    No1 = No2 = Res = 0;
}
int main()
{
    Calculator Obj1;

    cout<<"\n Enter First Number =";
    cin >> Obj1.No1;
    cout<<"\n Enter Second Number =";
    cin>>Obj1.No2;

    Obj1.Add();

    cout<<endl<<"Addition of"<<Obj1.No1<<" & "<<Obj1.No2<<" is = " << Obj1.Res<<endl;

    getch();

    Obj1.Sub();

    cout<<endl<<"Subtraction of "<<Obj1.No1<<" & "<<Obj1.No2<<" is ="<<Obj1.Res<<endl;

    Calculator Obj2(100,55);

    Obj2.Add();

    cout<<endl<<"Addition of"<<Obj2.No1<<" & "<<Obj2.No2<<" is = " << Obj2.Res<<endl;

    getch();

    Obj2.Sub();

    cout<<endl<<"subtraction of "<<Obj2.No1<<" & "<<Obj2.No2<<" is ="<<Obj2.Res<<endl;

    getch();
    return 0;
}
