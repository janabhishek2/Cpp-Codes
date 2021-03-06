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
if(head==NULL)
{
cout<<"List Empty !"<<endl;
return;
}
Node * temp= head;
while(temp->next!=NULL)
{
cout<<temp->data<<" --> ";
temp=temp->next;
}
cout<<temp->data;
cout<<endl;
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
}
int nthNodeFromEndTwoPointers(Node *& head,int n)

/// we have to move the main ptr len-n+1 ahead of its initial posn so we move reff pointer n nodes ahead and move each of them len-n times ahead !
{
int len=lengthList(head);
if(n<0 || n>len)
{
return -1;
}
Node * main=new Node;
Node * reff=new Node;
main=head;
reff=head;

while(n!=0 && reff!=NULL)
{
reff=reff->next;
n--;
}
while(reff!=NULL)
{
main=main->next;
reff=reff->next;
}
return main->data;

}
int middleElementUsingTwoPointers(Node *& head)
{
if(head==NULL)
 return -1;

Node * slow=new Node;
Node * fast=new Node;
slow=fast=head;

while(fast!=NULL && fast->next!=NULL)
{
slow=slow->next;
fast=fast->next->next;
}
return slow->data;
}
int numOfTimesInt(int val,Node *& head)
{
int cnt=0;
Node * temp=new Node;
temp=head;
while(temp!=NULL)
{
if(temp->data==val)
{
cnt++;
}
temp=temp->next;
}
return cnt;
}
int numOfTimesIntRecursive(Node *& head,int val)
{
if(head==NULL) return 0;
else return (head->data==val)+numOfTimesIntRecursive(head->next,val); ///using boolean output to add 1 to the output sum
}
int lengthOfCycle(Node *& head)
{
Node * slow=new Node;
Node * fast=new Node;
Node * ans;

bool cycle=false;
slow=fast=head;
while(fast->next!=NULL && fast!=NULL && slow)
{
slow=slow->next;
fast=fast->next->next;

if(slow==fast)
{
ans=slow;
cycle=true; /// cycle found
break;
}
}
if(cycle==false) return 0;
else
{
Node * temp;
temp=ans;
int cnt=1;
while(temp->next!=ans)
{
temp=temp->next;
cnt++;
}
return cnt;
}

}
bool detectCycle(Node *& head)
{
Node * slow=new Node;
Node * fast= new Node;
slow=fast=head;
while(fast!=NULL && fast->next!=NULL)
{
slow=slow->next;
fast=fast->next->next;
if(slow==fast)
{
return true;
}
}
return false;
}
bool isPalindrome(Node *& head)
{
int arr[10];
int x=0;
int len=lengthList(head);
if(len==1)
{
return true;
}
int mid=len/2;
Node * temp=head;
for(int i=0;i<mid;i++)
    {
        arr[x]=temp->data;
        x++;
        temp=temp->next;
    }


if(len%2!=0)
{
temp=temp->next;
}
x--;
while(temp!=NULL)
{
if(temp->data==arr[x])
{
x--;
temp=temp->next;
}
else
{
return false;
}
}
if(x==-1) return true;
}
void removeDuplicatesInSortedList(Node *& head)
{
if(head==NULL) return;
Node * temp=head;
while(temp->next!=NULL)
{
Node *x;
if(temp->data==temp->next->data)
{
x=temp->next->next;
free(temp->next);
temp->next=x;

}
else
{
temp=temp->next;
}
}
}
void removeDuplicatesInSortedListRecursive(Node *& head)
{
if(head==NULL)
{
return;
}
if(head->next!=NULL)
{
if(head->next->data==head->data)
{
Node * tofree=head->next;
head->next=head->next->next;
free(tofree);
removeDuplicatesInSortedListRecursive(head);
}
else
{
removeDuplicatesInSortedListRecursive(head->next);
}
}
}
void removeDuplicatesInUnSortedList(Node *& head)
{
Node *x=head;
while(x->next!=NULL)
{
int dx=x->data;
Node * curr=x->next->next;
Node * prev=x->next;
while(curr!=NULL)
{

}
x=x->next;
}
}
int main()
{
Node * head=NULL;
add_node(25,head);
add_node(33,head);
add_node(33,head);
add_node(33,head);
add_node(55,head);


displayList(head);
cout<<endl;

}
