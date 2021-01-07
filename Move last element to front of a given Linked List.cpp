
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
void doMove(Node *& head)
{
    Node *temp=head;
    Node *prev=head;

    while(temp->next)
    {
        prev=temp;
        temp=temp->next;
    }
    Node * first=head;
    prev->next=first;
    Node * tmp=first->next;
    first->next=NULL;
    temp->next=tmp;
    head=temp;



}

int main()
{
    Node * head=NULL;

    insertElement(head,5);
    insertElement(head,10);

    insertElement(head,15);

    insertElement(head,210);
    doMove(head);
    print(head);

}
