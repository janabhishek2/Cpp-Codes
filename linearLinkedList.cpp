#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
class Node{
public:
int data;
Node * next;
};
void push(int d,Node *& head)
{
Node * temp=new Node();
temp->data=d;
temp->next=head;
head=temp;

}
void insertAfter(int d,Node *&ins)
{
Node * temp=new Node;
temp->data=d;
temp->next=ins->next;
ins->next=temp;
}
void insertAtEnd(Node *&head ,int d)
{
Node * temp=new Node;
temp->next=NULL;
temp->data=d;
Node *x=head;
while(x->next!=NULL)
{
x=x->next;
}
x->next=temp;
}
void add_node(int d,Node *& headx)
{
Node * temp= new Node();
temp->data=d;
temp->next=NULL;

if(headx==NULL)
{
headx=temp;
}
else
{
Node * x= headx;
while(x->next!=NULL)
{
x=x->next;
}
x->next=temp;
}
}
void displayList(Node * head)
{
Node * temp= head;
while(temp!=NULL)
{
cout<<temp->data<<endl;
temp=temp->next;
}
}
void deleteNode(int d,Node *& head)
{
Node * temp=head;
Node* prev=NULL;
if(temp->data==d && temp!=NULL)
{
head=temp->next;
free(temp);
return ;
}

else
{
while(temp !=NULL && temp->data!=d)
{
prev=temp;
temp=temp->next;

}
if(temp==NULL)
{
cout<<"NUM not found"<<endl;
}
else{
prev->next=temp->next;
free(temp);
}
}
}
void deleteAtPosition(int pos,Node *& head)
{
if(pos==1)
{
Node * temp=head;

head=temp->next;
free(temp);
}
else
{
Node * temp=head;
Node * prev;
Node * curr;
while(pos!=1 && temp!=NULL)
{
prev=temp;
temp=temp->next;
pos--;
}
if(temp==NULL)
{
cout<<"Position Not found !"<<endl;
}
else
{
prev->next=temp->next;
free(temp);
}

}
}
int lengthList(Node *& head)
{
Node * temp=head;
int cnt=0;
while(temp!=NULL)
{
temp=temp->next;
cnt++;
}
return cnt;
}
int recursiveLength(Node *& head)
{
if(head==NULL) return 0;
else return 1+recursiveLength(head->next);
}
bool isValuePresent(int val,Node *& head)
{
Node * temp=head;
while(temp!=NULL)
{
if(temp->data==val) return true;
temp=temp->next;
}
return false;
}
bool isValuePresentRecursive(int val,Node *& head)
{
if(head==NULL) return false;

else return (head->data==val) || isValuePresent(val,head->next);
}
int getNodeFromBeg(int x, Node *& head)
{
Node * temp=head;
while(x!=1 && temp!=NULL)
{
temp=temp->next;
x--;
}
if(temp==NULL)
{
return -1;
}
else return temp->data;
}
int nthNodeFromEnd(Node *& head,int n)
{

int len=lengthList(head);
if(n>len)
{
return -1;
}
int x=len-n+1;
if(x==1)
{
return head->data;
}
else
{
Node * temp=new Node;
temp=head;
while(x!=1 && temp!=NULL)
{
temp=temp->next;
x--;
}
return temp->data;
}
int nthNodeFromEndTwoPointers(Node *& head,int n)
{
int len=lengthList(head);
if(n<0 || n>len)
{
return -1;
}
}
}
int main()
{
Node * head=NULL;
add_node(5,head);
add_node(10,head);
add_node(15,head);
add_node(13,head);
add_node(33,head);
displayList(head);
cout<<endl;
cout<<nthNodeFromEnd(head,2);
}
