#include<iostream>
using namespace std;
class calculate
{
    private:
    int prod;
    public:
    int sum(int arr[],int n)
    {
        int s=0;
        for(int i=0;i<n;i++)
        s=s+arr[i];
        return s;
    }
    float sum(float arr[],int n)
    {
        float s=0;
        for(int i=0;i<n;i++)
        s=s+arr[i];
        return s;
    }
    void sum(int arr1[][3],int arr2[][3],int m)
    {
        int result[m][m];
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<m;j++)
            result[i][j]=arr1[i][j]+arr2[i][j];
        }
       for(int i=0;i<m;i++)
        {
            for(int j=0;j<m;j++)
           {
             printf("%d   ",result[i][j]);
           }
            cout<<endl;
        }
    }
    void calci(int n,int m)
    {
        int prod=1;
        while(m>0)
        {
            prod=n*prod;
            m--;
        }
        cout<<prod<<endl;
    }
    string numsystem(int n)
    {
        string ans;
        while(n>0)
        {
            int d=n%10;
            n=n/10;
            if(d>=0&&d<=9)
            ans="DECIMAL";
            else if(d>=0&&d<=7)
            ans="OCTAL"; 
            else if(d==1||d==0)
            ans="BINARY";
            else
            ans="HEXADECIMAL"; 
        }
return ans;
    }
};
calculate ss;
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    float arr1[]={1.2,1.4,1.6,1.7,1,9,1.9,2.3};
    int n1=sizeof(arr)/sizeof(arr[1]);
    int n2=sizeof(arr1)/sizeof(arr1[1]);
    cout<<"THE SUM IS "<<ss.sum(arr,n1)<<endl;
    cout<<"THE SUM IS "<<ss.sum(arr1,n2)<<endl;
    int arr4[][3]={{1,2,3},{3,4,5},{6,7,8}};
    int arr5[][3]={{10,12,13},{13,14,15},{16,17,18}};
    ss.sum(arr4,arr5,3);
      ss.calci(2,3);  
      cout<<ss.numsystem(16);

}