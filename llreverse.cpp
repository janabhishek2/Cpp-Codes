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
    Node *curr=head;
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
int main()
{
    Node * head=NULL;
    insertElement(head,5);
    insertElement(head,15);
    insertElement(head,25);
    insertElement(head,30);
    insertElement(head,5);
    reverseLL(head);
      print(head);
}
