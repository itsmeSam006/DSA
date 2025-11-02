#include<iostream>
using namespace std;
void abc();
void abc(int);
void abc(int,int);
void abc(int,int,int);
main()
{
    abc();
    abc(2);
    abc(2,3);
    abc(2,3,4);
}
void abc()
{
    int k=5+10;
    cout<<k<<endl;
}
void abc(int a)
{
    int b=10,c;
    c=a-b;
    cout<<c<<endl;
}
void abc(int a,int b)
{
    int l=a*b;
    cout<<l<<endl;
}
void abc(int a,int b,int c)
{
    int d=(a*b)/c;
    cout<<d<<endl;
}
void abc(char,char);
void abc(char,int);
main()
{
    abc('#','=');
    abc('}',100);
    abc('&','@');
    abc('*',20);
}
void abc(char ch,char ph)
{
    for(int i=1;i<=50;i++)
    cout<<ch<<ph;
    cout<<endl;
}
void abc(char ch,int n)
{
    for(int i=1;i<=n;i++)
    cout<<ch;
    cout<<endl;
}
class employee
{
private:
string n;
int b,d,t,h,tot;
public:
void in()
{
    cout<<"ENTER THE NAME\n";
    cin>>n;
    cout<<"ENTER THE BASIC\n";
    cin>>b;
    d=b*0.5;
    t=b*0.4;
    h=b*0.3;
    tot=b+d+t+h;
}
void read()
{
   cout<<"NAME BASIC DA TA HRA";
}
void read(employee emp)
{
    cout<<emp.n<<" "<<emp.b<<" "<<emp.d<<" "<<emp.h<<" "<<" "<<emp.t<<" "<<emp.tot;
}
void read(char ch);
};
void employee::read(char ch)
{
for(int i=0;i<80;i++)
cout<<ch;
cout<<endl;
}

int main()
{
   employee emp;
    emp.in();
    emp.read('#');
    emp.read();
    emp.read('=');
    emp.read(emp);
    emp.read('r');
}