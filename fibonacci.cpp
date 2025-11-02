#include<iostream>
using namespace std;
void abc(int &a,int &b)
{
    int c=a+1;
    int s=0;
    cout<<a<<","<<c<<",";
    while(s<=b)
    {
        s=a+c;
        a=c;
        c=s;
        cout<<s<<",";
    }
}
int main()
{
    int lower,upper;
    cout<<"ENTER THE LOWER"<<endl;
    cin>>lower;
    cout<<"ENTER THE UPPER"<<endl;
    cin>>upper;
    abc(lower,upper);
}