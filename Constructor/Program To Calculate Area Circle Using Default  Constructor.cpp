///Program To Calculate Area Circle Using Default Constructor
#include<iostream>
#include<conio.h>
using namespace std;

class Circle
{
    public :
             int r,area;

    Circle()
    {
        cout<<"\n Enter Radius of Circle :";
        cin>>r;
        area = 3.14 * r * r;


    }
    ~Circle()
    {
        cout<<"\n Area of  Circle :"<<area;
    }
};
int main()
{
    Circle obj;
    getch();
    return 0;
}
