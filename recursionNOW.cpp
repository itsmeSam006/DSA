#include<bits/stdc++.h>
using namespace std;
int arrayWork(string allStudent[],string studentName)
{
for(int i=0;i<5;i++)
if(allStudent[i]==studentName)
return 1;
else 
return 0;
}
int main()
{
    cout<<"ENTER THE NAME OF 5 STUDENT"<<endl;
    string allStudent[5];
    for(int i=0;i<5;i++)
    {
        getline(cin,allStudent[i]);
    }
    cout<<"ENTER THE NAME TO BE SEARCHED";
    string studentName;
getline(cin,studentName);
  if(arrayWork(allStudent,studentName))
  cout<<"FOUND!";
  cout<<"NOT THERE";
}
