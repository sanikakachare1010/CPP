#include<iostream>
using namespace std;
int main()
{
    int iNo = 0;
    int iMask = 2;
    int iResult = 0;

    cout<<"Enter number: \n";
    cin>>iNo;

    iResult = iNo & iMask;

    if(iResult == 0)
    {
        cout<<"Second bit is off\n";
    }
    else
    {
        cout<<"Second bit is on\n";
    }

    return 0;

}