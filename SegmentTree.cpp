#include "bits/stdc++.h"
using namespace std;
#define N 10
// int arr[N]={5,5,15,6,8,6,8,10,23,2},seg[4*N];
void build(int ind,int low, int high,int arr[],int seg[])
{
    if(low==high)
    {
        seg[ind]=arr[low];
        return;
    }
    int mid=(low+high)/2;
    build(2*ind+1,low,mid,arr,seg);
    build(2*ind+2,mid+1,high,arr,seg);
    seg[ind]=seg[2*ind+1]+seg[2*ind+2];
    // seg[ind]=max(seg[2*ind+1],seg[2*ind+2]);
}
int query(int ind,int low,int high,int l,int r,int seg[])
{
    if(l<=low&&r>=high)
    return seg[ind];
    if(l>high||r<low)
    return 0;
    // return INT_MIN; 
    int mid=(low+high)/2;
    int left=query(2*ind+1,low,mid,l,r,seg);
    int right=query(2*ind+2,mid+1,high,l,r,seg);
    return left+right;
    // return max(left,right);
}
void update(int ind,int low,int high,int l,int r,int seg[],int x)
{
    if(low==high)
    {
        seg[ind]=x;
        return;
    }
    if(r<low||l>high)return;
    int mid=(low+high)/2;
    update(2*ind+1,low,mid,l,r,seg,x);
    update(2*ind+2,mid+1,high,l,r,seg,x);
    seg[ind]=seg[2*ind+1]+seg[2*ind+2];
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int arr[n],seg[4*n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int l,r;
    cin>>l>>r;
     build(0,0,n-1,arr,seg);
     update(0,0,n-1,0,n-1,seg,10);
     cout<<"print segment tree"<<endl;
     for(auto i:seg)
     cout<<i<<" ";
     cout<<endl;
     cout<<query(0,0,n-1,l,r,seg);
    return 0;
}

