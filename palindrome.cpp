#include<iostream>
using namespace std;
int main()
{
    int s,d,n,a,c=0,temp;
    cout<<"ENTER THE VALUE OF N"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"ENTER THE NUMBERS"<<endl;
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        temp=arr[i];
        a=temp;
        s=0;
        while(a>0)
        {
            d=a%10;
            a=a/10;
            s=s*10+d;
        }
        arr[i]=s;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
        
    }

}