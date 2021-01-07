
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
void removeDuplicates(Node *& head)
{
    Node * temp=head;
    while(temp!=NULL)
    {
        if(temp->next && temp->next->data==temp->data)
        {
            Node *x= temp->next;
            temp->next=temp->next->next;
            delete(x);
        }
        else
        {
            temp=temp->next;
        }
    }
}
int main()
{
    Node * head=NULL;

    insertElement(head,5);
    insertElement(head,10);
    insertElement(head,10);
    insertElement(head,10);
    insertElement(head,15);

    insertElement(head,210);
    insertElement(head,210);
    insertElement(head,210);
    removeDuplicates(head);
    print(head);



}
