#include<iostream>
using namespace std;
class abc
{
    private:
    int n;
    static int m,a,b;
    public:
    void out()
    {
        cout<<n<<" "<<m<<" "<<a<<" "<<b;
    }
};
int abc::m;
int abc::a=7;
int abc::b=41;
main()
{
    abc ab;
    ab.out();
}