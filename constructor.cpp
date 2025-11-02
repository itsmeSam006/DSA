#include<iostream>
using namespace std;
class employee
{
    string n;
    int b,d,t,h,total;
    public:
    employee(string nn,int bb,int dd,int tt,int hh)
    {
        nn=n;
        b=bb;
        d=dd;
        t=tt;
        h=hh;
        total=b+d+t+h;
    }
    void out()
    {
        cout<<n<<endl;
        cout<<b<<endl;
        cout<<d<<endl;
        cout<<t<<endl;
        cout<<total<<endl;
    }
};

int main()
{
    employee stu1("HIRA",2000,200,200,2);
    employee stu2=employee("SAM",1000,100,100,1);
    stu1.out();
    stu2.out();

}