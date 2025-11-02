// #include<iostream>
// using namespace std;
// class employee
// {
//     protected:
//     string n;
//     int b;
//     public:
//     void in()
//     {
//         cout<<"ENTER NAME"<<endl;
//         cin>>n;
//         cout<<"ENTER BASIC"<<endl;
//         cin>>b;
//     }
//     void out()
//     {
//         cout<<n<<"  "<<b<<endl;
//     }
// };
// class employeesal:public employee
// {
// private:
// int d,t,hra,tot;
// public:
// void in()
// {
//     employee::in();
//     d=0.5*b;
//     t=0.4*b;
//     hra=0.3*b;
//     tot=d+t+hra+b;
// }
// void out()
// {
//     employee::out();
//     cout<<d<<" "<<t<<" "<<hra<<" "<<tot<<endl;
// }
// };
// int main()
// {
//     employeesal emp;
//     emp.in();
//     emp.out();
//     return 0;
// }
// #include<iostream>
// using namespace std;
// class employeeNameANDBasic
// {
//     protected:
//     string n;
//     int b;
//     public:
//     void in()
//     {
//         cout<<"ENTER NAME"<<endl;
//         cin>>n;
//         cout<<"ENTER BASIC"<<endl;
//         cin>>b;
//     }
//     void out()
//     {
//         cout<<n<<"  "<<b<<endl;
//     }
// };
// class employeeDATAHRA:public employeeNameANDBasic
// {
// protected:
// int d,t,hra,tot;
// public:
// void in()
// {
//     employeeNameANDBasic::in();
//     d=0.5*b;
//     t=0.4*b;
//     hra=0.3*b;
// }
// void out()
// {
//     employeeNameANDBasic::out();
//     cout<<d<<" "<<t<<" "<<hra<<" "<<endl;
// }
// };
// class employeeBONUS:public employeeDATAHRA
// {
// private:
// int bonus;
// public:
// void check()
// {
//     employeeDATAHRA::in();
//     employeeDATAHRA::out();
//         tot=d+t+hra+b;
//          if(tot<10000)
//         bonus=tot*.5;
//         cout<<"THE TOTAL IS "<<tot<<endl;
//         cout<<"THE BONUS IS "<<bonus;
// }
// };
// int main()
// {
//     employeeBONUS emp;
//     emp.check();
//     return 0;
// }
#include<iostream>
using namespace std;
class employee
{
    protected:
    string n;
    int b,da,ta,hra,tot;
    public:
    void in()
    {
        cout<<"ENTER THE NAME OF THE RESPECTIVE EMPLOYEE\n";
        cin>>n;
        cout<<"BASIC SALARY\n";
        cin>>b;
    }
    void out()
    {
        cout<<n<<" "<<b;
    }
    void calculate()
    {
        da=0.2*b;
        ta=0.3*b;
        hra=0.4*b;

    }
};
class employeedoc:public employee
{
protected:
int pma,oa;
public:
void update()
{
    employee::in();
    employee::calculate();
     tot=da+ta+hra+b;
    if(tot<10000)
    {
        int pma=tot*0.1;
        tot+=pma;
        int oa=tot*0.05;
        tot=tot+oa;
    }
    employee::out();
   cout<<n<<endl;
    cout<<da<<endl;
    cout<<ta<<endl;
    cout<<b<<endl;
    cout<<hra<<endl;
}
};
class employeeeng:public employee
{
protected:
int ga,uta;
public:
void update()
{
    employee::in();
    employee::calculate();
     tot=da+ta+hra+b;
    if(tot<10000)
    {
        int ga=tot*0.1;
        tot+=ga;
        int uta=tot*0.05;
        tot=tot+uta;
    }
    employee::out();
    cout<<n<<endl;
    cout<<da<<endl;
    cout<<ta<<endl;
    cout<<b<<endl;
    cout<<hra<<endl;
}
};
int main()
{
    char ch;
    cout<<"ENTER E FOR ENGINEER ENTER  D FOR DOCTOR\n";
    cin>>ch;
    if (ch=='E')
    {
        employeeeng ee;
        ee.update();
    }
    else
    {
        employeedoc dd;
        dd.update();
    }
    return 0;
}

// #include<iostream>
// using namespace std;
// class employee
// {
//     protected:
//     string n;
//     int p,c,m,tot;
//     public:
//     void in()
//     {
//         cout<<"ENTER THE NAME OF THE STUDENT\n";
//         cin>>n;
//         cout<<"ENTER THE MARKS OF PHYSICS CHEMISTRY MATHS\n";
//         cin>>p>>c>>m; 
//     }
// };
// class updatemarks:public employee
// {
//     protected:
//     int eng;
//     public:
//     void update()
//     {
//      employee::in(); 
//      cout<<"ENTER THE NUMBER OBTAINED IN ENGLISH\n";
//      cin>>eng;  
//     }
// };
// class bengali:public updatemarks
// {
//     private:
//     int beng;
//     public:
//     void change()
//     {
//         updatemarks::update();
//         cout<<"ENTER MARKS IN BANGALI\n";
//         cin>>beng;
//         tot=p+c+m+beng+eng;
//         cout<<"TOTAL"<<tot;
//     }
// };
// class hindi:public updatemarks
// {
//     private:
//     int hindi;
//     public:
//     void change()
//     {
//         updatemarks::update();
//         cout<<"ENTER MARKS IN HINDI\n";
//         cin>>hindi;
//         tot=p+c+m+hindi+eng;
//         cout<<"TOTAL"<<tot;
//     }
// };
// int main()
// {
//     char ch;
//     cout<<"ENTER B FOR BENGLI\n";
//     cout<<"ENTER H FOR HINDI\n";
//     cin>>ch;
//     if(ch=='B')
//     {
//         bengali b;
//         b.change();
//     }
//     else{
//         hindi h;
//         h.change();
//     }
// }