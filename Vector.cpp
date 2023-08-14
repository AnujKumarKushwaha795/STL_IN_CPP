#include<iostream>
#include<bits/stdc++.h>
using namespace std;

typedef struct Expr
{
int data;
int next;
} E;


int main(int argc, char const *argv[])
{

cout<<"vector"<<endl;
vector<int> v1{1,2,3};
for(auto i:v1)
cout<<i<<" ";
 E *ee=(E*)malloc(sizeof(E));
 ee->data=100;
//  ee->next=NULL;

vector<E*> v2;
v2.push_back(ee);

for(auto i:v2)
cout<<i->data<<" ";

vector<int>v3;
v3.push_back(10);
v3.push_back(20);
v3.push_back(30);
v3.push_back(40);
vector<float> f;
f.push_back(1.5);
f.push_back(2.5);
f.push_back(3.5);
f.push_back(4.5);

vector<float> f1;
f1.push_back(1.51);
f1.push_back(2.51);
f1.push_back(3.51);
f1.push_back(4.51);

vector<vector<float>>v5;
// v5.push_back(v3);
v5.push_back(f);
v5.push_back(f1);
// cout<<v5[1][0]<<" "<<endl;
cout<<endl;

for(auto i:v5){
  for(auto j:i)
  cout<<j<< " ";
  cout<<"\n";

}

for(auto &value:v3)
value=value/10;
// cout<<endl;

for(auto value:v3)
cout<<value<<" ";
// sort();

    return 0;
}
