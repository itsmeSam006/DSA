#include<iostream>
using namespace std;
class student
{
    private:
    string n;
    int p,c,m,tot;
    public:
    student()
    {
        n="ram";
        p=10;
        c=20;
        m=30;
        tot=p+c+m;
    }
    student(student &st)
    {
        n=st.n;
        p=st.p;
        c=st.c;
        m=st.m;
        st.tot=st.p+st.c+st.m;
    }
    void out()
    {
        cout<<n<<" "<<p<<" "<<c<<" "<<m<<" "<<tot<<endl;
    }
    void change()
    {
        n="ENEMy";
        p=80;
        c=90;
        m=100;
        tot=p+c+m;
    }
};
main()
{
    student stu;
    stu.out();
    stu.change();
    stu.out();
    student stu1(stu);
    stu1.out();
}
