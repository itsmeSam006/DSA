#include<iostream>
using namespace std;
class box
{
    private:
    int l,b,h,vol;
    public:
     box()
    {
        l=5,b=10,h=15;
    }
    box(int len)
    {
        l=b=h=len;
    }
     box(int a,int c)
    {
        l=a,b=c,h=15;
       
    }
    box(int s,int p,int r)
    {
        l=s,b=p,h=r;
    }
    box(box &bb)
    {
        l=bb.l,b=bb.b,h=bb.h;
    }
    void out()
    {
        vol=l*b*h;
        cout<<l<<"*"<<b<<"*"<<h<<"="<<vol<<endl;
    }

};
int main()
{
    box bb;
    bb.out();
    box bb1(2);
    bb1.out();
   box bb2(3,4);
   bb2.out();
   box bb3(5,6,7);
   bb3.out();
   box bb6(bb3);
   bb6.out();

    
}
