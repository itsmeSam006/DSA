#include<iostream>
#include<string>
using namespace std;
class box
{
    private:
    int l,b,h;
    public:
   void input()
   {
    cout<<"ENTER THE DIMENSIONS\n";
    cin>>l>>b>>h;
   }
   void display()
   {
    cout<<l<<endl;
    cout<<b<<endl;
    cout<<h<<endl;
   }
   float getVal()
   {
    return l*b*h;
   }
   static box highest(box b[],int n)
   {
    int topIndex=0;
    for(int i=1;i<n;i++)
    {
        if(b[i].getVal()>b[topIndex].getVal())
        topIndex=i;
    }
    return b[topIndex];
   }
};
int main()
{
    int n=5;
   box s[n];
   cout<<"ENTER DETAILS OF 5 BOX\n";
   for(int i=0;i<n;i++)
   {
    cout<<"\nBOX"<<i+1<<endl;
    s[i].input();
   }
   box topper=box::highest(s,n);
   topper.display();
}