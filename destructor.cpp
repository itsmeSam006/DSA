#include<iostream>
using namespace std;
int i=0;
class student
{
private:
string n;
int p,c,m,tot;
public:
student()
{
    n="Ram";
    p=5;
    c=6;
    m=7;
    tot=p+c+m;
    i++;
    cout<<"Object Stu"<<i<<" CREATED\n";
}
~student()
{
  
    cout<<"Student Stu"<<i<<" destroyed\n";
    i--;
}
void out()
{
    tot=p+c+m;
    cout<<n<<" "<<p<<" "<<c<<" "<<m<<" "<<tot<<endl;
}
};
main()
{
    student stu1,stu2,stu3;
    stu1.out();
    stu2.out();
    stu3.out();
}