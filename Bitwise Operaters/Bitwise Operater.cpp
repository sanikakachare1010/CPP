#include<iostream>
using namespace std;

int main()
{
    int iNo1 =13;
    int iNo2 = 24;

    int iAns = 0;

    iAns = iNo1 & iNo2;
    cout<<"Bitwise and : "<<iAns<<"\n";

     iAns = iNo1 | iNo2;
    cout<<"Bitwise Or : "<<iAns<<"\n";

     iAns = iNo1 ^ iNo2;
    cout<<"Bitwise XOr : "<<iAns<<"\n";
    

    return 0;
}
