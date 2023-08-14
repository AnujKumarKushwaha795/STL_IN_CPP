#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s="Hello";
    char ch[]="Student";
    int a=(s==ch);
    cout<<"compare of string class and character string "<<a<<" "
    <<" length of string="<<s.length()<<"length of character string="<<sizeof(ch)/sizeof(char)<<endl;
//   for(auto i:ch)
//   cout<<i;
string s2="Welcome";
int b=s.compare(s2);

cout<<endl<<"compare of two string="<<s.compare(s2)<<" "<<"Size of string="<<s2.size()<<endl;
s.insert(5," World");
cout<<s<<endl;
s.append("!!!");
cout<<s<<endl;
s.replace(11,1,"$$$$$$$$$$$$$$");




    cout<<s<<endl;
    return 0;
}


