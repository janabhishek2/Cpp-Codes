
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
void swapNodes(int i,int j,Node *& head)
{
    Node * temp=head;
    Node *prevFirst = NULL;
    Node *nextFirst=NULL;
    Node *prevSecond=NULL;
    Node *nextSecond=NULL;
    Node *first=NULL;
    Node * second=NULL;
    Node *prev=temp;
    while(temp!=NULL)
    {
        if(temp->data==i)
        {
            prevFirst=prev;
            first=temp;
            nextFirst=temp->next;
        }
        if(temp->data==j)
        {
            prevSecond=prev;
            second=temp;
            nextSecond=temp->next;
        }
        prev=temp;
        temp=temp->next;
    }
 prevFirst->next=second;
 prevSecond->next=first;
 first->next=nextSecond;
 second->next=nextFirst;

}
int main()
{
    Node * head=NULL;

    insertElement(head,5);
    insertElement(head,10);
    insertElement(head,15);
    insertElement(head,15);
    insertElement(head,20);
    insertElement(head,25);
    swapNodes(10,20,head);

    print(head);



}
