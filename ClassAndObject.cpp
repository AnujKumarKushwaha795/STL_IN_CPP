#include<iostream>
#include<bits/stdc++.h>
using namespace std;

template <class X>
class ArrayList{
 
    struct ConrolBlock
    {
     X capacity;
     X *arr_pointer;
    };
    ConrolBlock *s;
public:
ArrayList(X capacity){
    s=new ConrolBlock;
    s->capacity=capacity;
    s->arr_pointer=new X[s->capacity];

}
void addElement(X index,X data){
    if(index>=0&&index<=s->capacity-1)
    s->arr_pointer[index]=data;
    else
    cout<<"\n Array list is not valid";

}

void viewElement(X index,X &data){
    if(index>=0&&index<=s->capacity-1)
data=s->arr_pointer[index];
else
cout<<"\nArray index is not valid";

}

};
class Node{
    public:
    int data;
    Node* Next;

Node(int data, Node *head){
    this->data=data;
   this->Next=head;
}

//  Node::Node(int data, Node *head){
//     data=data;
//     Next=head;
// }

};

// class Anuj
// {
// private:
//     /* data */
// public:
//     Anuj(/* args */);
//     ~Anuj();
// };

// Anuj::Anuj(/* args */)
// {
// }

// Anuj::~Anuj()
// {
// }



int main()
{
ArrayList<int> list1(5);
list1.addElement(0,10);
list1.addElement(1,20);
list1.addElement(2,30);
int a;
list1.viewElement(1,a);
cout<<a;
Node *n,*n1;

Node* n2=new Node(10,n1);
Node* n3=new Node(100,n2);

cout<<endl<<n3->Next<<" "<<n2<<endl;

vector<Node*> v1;
v1.push_back(n2);
v1.push_back(n3);
cout<<endl<<v1[0]->data<<" "<<v1[1]->data<<" " << v1[1]->Next<<endl;











    return 0;
}


