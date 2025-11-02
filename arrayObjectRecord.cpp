#include<iostream>
#include<string>
using namespace std;
class student
{
    private:
    string name;
    int roll;
    float marks;
    public:
   void input()
   {
    cout<<"ENTER THE NAME\n";
    cin>>name;
    cout<<"ENTER THE ROLL\n";
    cin>>roll;
     cout<<"ENTER THE MARKS\n";
    cin>>marks;
   }
   void display()
   {
    cout<<"NAME"<<name<<endl;
    cout<<"MARKS"<<marks<<endl;
    cout<<"ROLL"<<roll<<endl;
   }
   float getMarks()
   {
    return marks;
   }
   static student highestScorer(student s[],int n)
   {
    int topIndex=0;
    for(int i=1;i<n;i++)
    {
        if(s[i].getMarks()>s[topIndex].getMarks())
        topIndex=i;
    }
    return s[topIndex];
   }
};
int main()
{
   const int n=10;
   student s[n];
   cout<<"ENTER DETAILS OF 10 STUDENTS\n";
   for(int i=0;i<n;i++)
   {
    cout<<"\nSTUDENT"<<i+1<<endl;
    s[i].input();
   }
   student topper=student::highestScorer(s,n);
   topper.display();
}