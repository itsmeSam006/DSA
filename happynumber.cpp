#include<iostream>
using namespace std;
int main()
{
    int s=0,n;
    cout<<"ENTER THE NUMBER";
    cin>>n;
    while(n!=1 &&n!=4)
    {
    	s=0;
        while(n!=0)
        {
            int d=n%10;
            s=s+d*d;
            n=n/10;
        }
        n=s;
        if(n==1)
        {
        	cout<<"happy number\n";
        	exit(1);
		}
        s=0;
    }
    cout<<"not happy";
}
