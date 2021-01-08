



#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node * next;
    bool visited;

    Node()
    {
        visited=false;
    }
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
void reverseLL(Node *&head)
{

    Node * curr=head;
    Node *prev=NULL;
    Node *n=NULL;

    while(curr)
    {
        n=curr->next;
        curr->next=prev;


        prev=curr;
        curr=n;

    }
    head=prev;
}
int main()
{
    Node * head=NULL;

    insertElement(head,1);
    insertElement(head,2);
    insertElement(head,3);
    insertElement(head,4);
    insertElement(head,5);
    insertElement(head,6);


    reverseLL(head);


    print(head);

}
