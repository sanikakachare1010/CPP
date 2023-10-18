using namespace std;
#include<iostream>
#include<conio.h>
#include<stdio.h>

class Circle
{
      public :
               float Rad;

             Circle()
             {
                 Rad = Area =Circum = 0;
                 PI = 3.14;

                 cout<<endl<<"Inside our Circle Class Default Constructor"<<endl;

             }
             Circle(float R)
             {
                 Rad = R;
                 PI = 3.14;
                 Calculate_Area_And_Circum();

                 cout<<endl<<"Inside our Circle Class Parameterized Constructor"<<endl;
             }
             ~Circle()
             {
                 cout<<endl<<"Inside Our Class Destructor - For Object With Radius ="<<Rad;

             }
             void Calculate_Area_And_Circum()
             {

                 Area_Of_Circle();
                 Circumference_Of_Circle();
             }
             void  Display_Details()
             {
                 cout<<"Details of Circle Are =>"<<endl;

                 cout<<"\n\t\t Radius     = "<<Rad;
                 cout<<"\n\t\t Area of Circle = "<<Area;
                 cout<<"\n\t\t Circumference of Circle = "<<Circum;

                 cout<<"\n\n=========================***========================\n\n";
             }
      private :
              float PI,Area,Circum;

              void Area_Of_Circle()
              {
                  Area = PI *Rad * Rad;
              }
              void Circumference_Of_Circle()
              {
                  Circum = 2 * PI *Rad;
              }
};
int main()
{
    float R = 0.0;
    Circle obj1;

    obj1.Rad = 7;
    obj1.Calculate_Area_And_Circum();

    obj1.Display_Details();

    getch();

    cout<<endl<<"Enter Radius For New Object = ";
    cin>>R;

    Circle obj2(R);

    obj2.Display_Details();

    getch();
    return 0;
}
