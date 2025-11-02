#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,i;
cout<<"HOW MANY NUMBERS DO YOU WANT"<<endl;
cin>>n;
float *p=new float[n];
float sumf=0;
int sum=0;
for(i=n-1;i>=0;i--)
{
    cout<<"ENTER NUMBERS"<<endl;
    cin>>p[i];
    sumf=sumf+p[i];
    sum=sum+p[i];
}

cout<<sumf-sum;
delete(p);
}
    
    
