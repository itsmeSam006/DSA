#include<iostream>
using namespace std;
int main()
{ 
	int n,fact=1;
	float sum=0;
cout<<"enter the value of N\n";
cin>>n;
for(int i=1;i<=n;i++)
	{
	cout<<i+1<<"/"<<fact<<" + ";
	fact=fact*i;
	}
	cout<<fact;
}

