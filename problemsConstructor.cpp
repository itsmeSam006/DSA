#include<iostream>
using namespace std;
class employee
{
    private:
    string n;
    int b,d,t,h,total;
    public:
    employee()
    {
        n="RAM";
        b=2000;
        d=b*0.5;
        t=b*0.4;
        h=b*0.3;
    }
    void change()
    {
        n="KUTTA";
        b=8000;
        d=b*0.5;
        t=b*0.4;
        h=b*0.3;
    }
    void out()
    {
        total=b+d+t+h;
        cout<<n<<" "<<b<<" "<<d<<" "<<t<<" "<<h<<" "<<total<<endl;
    }
};
main()
{
    employee emp;
    emp.out();
    emp.change();
    emp.out();
    employee emp1;
    emp1.out();
}