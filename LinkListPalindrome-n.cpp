
#include<iostream>
#include<vector>
using namespace std;
class Node{
public:

    int data;
    Node *next;
};
void insertElement(Node* &head,int key)
{
        Node * node=new Node();
        node->data=key;
        node->next=NULL;
    if(head==NULL)
    {
        head=node;
    }
    else
    {
        Node * temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=node;
    }
}
void print(Node* &head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

void reverseLL(Node * &head)
{
    Node * prev=NULL;
    Node * curr=head;
    Node * next=NULL;

    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
    return;
}
int length(Node *& head)
{
    Node * temp=head;
    int cnt=0;
    while(temp!=NULL)
    {
        cnt++;
        temp=temp->next;
    }
    return cnt;
}
bool isPalindrome(Node *& head)
{
    int x=length(head);
    if(x%2==0)
    {
        int ri=x/2;
        Node *newHead = head;
        Node *prev=NULL;
        while(ri!=0)
        {
            prev=newHead;
            newHead=newHead->next;
            ri--;
        }

        reverseLL(newHead);
           prev->next=NULL;
           Node *first=head;
           Node *second=newHead;
      while(first!=NULL && second!=NULL)
      {

          if(first->data!=second->data)
          {
              return false;
          }
          first=first->next;
          second=second->next;
      }
      return true;
    }
    else
    {
        int ri=x/2;
        Node *newHead = head;
        Node *prev=NULL;
        while(ri!=0)
        {
            prev=newHead;
            newHead=newHead->next;
            ri--;
        }
        newHead=newHead->next;
        reverseLL(newHead);
           prev->next=NULL;
           Node *first=head;
           Node *second=newHead;
      while(first!=NULL && second!=NULL)
      {

          if(first->data!=second->data)
          {
              return false;
          }
          first=first->next;
          second=second->next;
      }
      return true;
    }
}
int main()
{
    Node * head=NULL;
    insertElement(head,5);
    insertElement(head,15);

    insertElement(head,25);
    insertElement(head,15);
insertElement(head,5);
    cout<<isPalindrome(head);
}
