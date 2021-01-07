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
    while(temp->next!=NULL)
    {
        int d=temp->data;
        Node *x=temp->next;
        Node *prev=temp;
        while(x!=NULL)
        {
            if(x->data==d)
            {
                Node *y=x;
                prev->next=x->next;
                x=x->next;
                delete(y);

            }
            else
                {
                prev=x;
                x=x->next;
                }



        }
        temp=temp->next;
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
    insertElement(head,15);
    insertElement(head,15);
    removeDuplicates(head);
    print(head);



}
