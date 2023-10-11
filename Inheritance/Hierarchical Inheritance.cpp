using namespace std;
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

class Calculator
{
    protected:
              int No1 = 0 ,No2 = 0,Sum = 0,Sub = 0,Mul = 0,Div = 0;

    public :

             void getCalculator()
             {
                 cout<<endl<<"Enter First Number :";
                 cin>>No1;

                 cout<<endl<<"Enter Second Number :";
                 cin>>No2;
             }
             void showCal()
             {
                 cout<<"\n First Number : "<<No1;
                 cout<<"\n Second Number :"<<No2;
             }
};
class Addition : public Calculator
{
    public :

             void getAdd()
             {
                 Calculator :: getCalculator();
                 Sum = No1 + No2;
             }
             void showAdd()
             {
                 cout<<"\n "<<No1<<" + "<<No2<<" = "<<Sum;
             }
};
class Substraction : public Calculator
{
    public :

             void getSub()
             {
                 Calculator :: getCalculator();
                 Sub = No1 - No2;
             }
             void showSub()
             {
                 cout<<"\n "<<No1<<" - "<<No2<<" = "<<Sub;
             }
};

class Multiplication : public Calculator
{
    public :

             void getMul()
             {
                 Calculator :: getCalculator();
                 Mul = No1 * No2;
             }
             void showMul()
             {
                 cout<<"\n "<<No1<<" * "<<No2<<" = "<<Mul;
             }
};
class Division : public Calculator
{
    public :

             void getDiv()
             {
                Calculator :: getCalculator();
                 Div = No1 / No2;
             }
             void showAdd()
             {
                 cout<<"\n "<<No1<<" / "<<No2<<" = "<<Div;
             }
};
int main()
{
    system("cls");
    Addition A;
    Substraction s;
    Multiplication M;
    Division D;
    cout<<"\n\n Addition of Number =>\n";
    A.getAdd();
    A.showAdd();

    cout<<"\n\n Substraction of Number =>\n";
    s.getSub();
    s.showSub();

    cout<<"\n\n Multiplication of Number =>\n";
    M.getMul();
    M.showMul();

    cout<<"\n\nDivision of Number =>\n";
    D.getDiv();
    D.showAdd();

    getch();
    return 0;
}




