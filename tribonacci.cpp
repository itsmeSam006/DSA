#include<iostream>
using namespace std;
int main()
{ 
	int n,a,b,c,s=0;
    s=0;
    a=0;
    b=1;
    c=1;
    cout<<"enter the value of N\n";
    cin>>n;
while(a<n)
{
    s=a+b+c;
    cout<<a<<",";
    a=b;
    b=c;
    c=s;
}
}