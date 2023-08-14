//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int *constructST(int arr[],int n);


int RMQ(int st[] , int n, int a, int b);
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int A[N];
        for(int i=0;i<N;i++)
            cin>>A[i];
        int Q;
        cin>>Q;
        int *segTree = constructST(A,N);
        for(int i=0;i<Q;i++)
        {
            int start,e;
            
            cin>>start>>e;
            if(start>e)
            {
                swap(start,e);
            }
            cout<<RMQ(segTree,N,start,e)<<" ";
        }
        cout<<endl;
    }
}

// } Driver Code Ends


/* The functions which 
builds the segment tree */
void build(int ind,int low,int high,int arr[],int seg[])
{
    if(low==high)
    {
        seg[ind]=arr[low];
        return;
    }
    int mid=(low+high)/2;
    build(2*ind+1,low,mid,arr,seg);
    build(2*ind+2,mid+1,high,arr,seg);
    seg[ind]=min(seg[2*ind+1],seg[2*ind+2]);
    
}

int seg[4*1001];
int *constructST(int arr[],int n)
{
  //Your code here
  
  build(0,0,n-1,arr,seg);
  return seg;
}

int query(int ind,int low,int high,int l,int r,int seg[])
{
    if(l<=low&&r>=high)
    {
        return seg[ind];
    }
    if(l>high||r<low)return INT_MAX;
    int mid=(low+high)/2;
    int left=query(2*ind+1,low,mid,l,r,seg);
    int right=query(2*ind+2,mid+1,high,l,r,seg);
    return min(left,right);
}
/* The functions returns the
 min element in the range
 from a and b */
int RMQ(int st[] , int n, int a, int b)
{
//Your code here
return query(0,0,n-1,a,b,st);



}