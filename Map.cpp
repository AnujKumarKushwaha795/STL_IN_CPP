
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   unordered_map<int,string>m;
    m[15]="Anuj";
    m[10]="Shivam";
    m[5]="Satyam";
    for(auto i:m)
    cout<<i.first<<"="<<i.second<<" ";
map<int,vector<int>>m1;
vector<int>v3;
v3.push_back(10);
v3.push_back(20);
v3.push_back(30);
v3.push_back(40);
m1[2]=v3;
cout<<endl;
for(auto i:m1)
{
    for(auto j:i.second)
    cout<<j<<" ";

}
cout<<"\nIs empty="<<m1.empty()<<" "<<" Size="<<m1.size()<<" "<<m1.at(2)[1]<<endl;
auto it=m.find(95);
cout<<(it==m.end())<<endl;

    return 0;
}



