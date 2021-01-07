

#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node * next;
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
void pairWiseSwap(Node *& head)
{
    Node * curr=head;
    Node * prev=head;
    while(curr)
    {
        Node * x=curr;
        Node *y=curr->next;


        Node *temp=y->next;
        y->next=x;
        x->next=temp;

        if(prev==head)
        {
            head=y;
        }
        else
        {   prev->next=y;

        }



        prev=x;
        curr=temp;
    }
}
int main()
{
    Node * head=NULL;

    insertElement(head,5);
    insertElement(head,10);
    insertElement(head,15);

    insertElement(head,20);
    insertElement(head,25);
      insertElement(head,30);
    pairWiseSwap(head);

    print(head);



}
