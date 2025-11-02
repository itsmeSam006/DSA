#include<bits/stdc++.h>
#include<string.h>
using namespace std;

class student
{
public:
float basic,DA,TA,HRA,Total;
string name;
};
student ss;
void in()
{
    cout<<"ENTER THE NAME OF THE PERSON"<<endl;
    cin>>ss.name;
    fflush(stdin);
    cout<<"ENTER THE BASIC SALARY OF THHE PERSON"<<endl;
    cin>>ss.basic;
}
void calculate()
{
    if(ss.basic<2000)
    {
        ss.DA=0;ss.TA=0;ss.HRA=0;
    }
    else if(ss.basic>=2000&&ss.basic<=5000)
    {
        ss.DA=0.4;ss.TA=0.20;ss.HRA=0.30;
    }
     else if(ss.basic>5000&&ss.basic<=10000)
    {
        ss.DA=0.5;ss.TA=0.4;ss.HRA=0.30;
    }
    ss.DA=ss.DA*ss.basic;
    ss.TA=ss.TA*ss.basic;
    ss.HRA=ss.HRA*ss.basic;
ss.Total=ss.basic+ss.DA+ss.TA+ss.HRA;
}
void out()
{
    cout<<"NAME IS "<<ss.name<<endl;  
    cout<<"DA "<<ss.DA<<endl;  
    cout<<"TA "<<ss.TA<<endl;  
    cout<<"HRA "<<ss.HRA<<endl;  
    cout<<"Total "<<ss.Total<<endl;  

}
main()
{

    int i;
    for(auto i:{1,2,3,4,5,6,6})
    cout<<i<<endl;
}