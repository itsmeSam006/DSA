#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
using namespace std;
int main()
{
  string s="programming is very good if done correctly by the user";
  sort(s.begin()+3,s.end());
  cout<<"SORTED STRING\n"<<s<<endl;
  return 0;
}
