#include<iostream>
using namespace std;
int main()
{
    int a;int &n=a;
    cout<<"ENTER THE VALUE OF A";
    cin>>a;
    if(n>0)
        {
            cout<<"POSITIVE";
            if(n%2==0)
            cout<<"EVEN";
            else
            cout<<"ODD";
        }
    else if(n<0)
    {
         cout<<"NEGATIVE";
            if(n%2==0)
            cout<<"EVEN";
            else
            cout<<"ODD";
    }
    else if (n==0)
    cout<<"THE NUMBER IS ZERO";
}