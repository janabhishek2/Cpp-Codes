




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
void reverseLL(Node *& head)
{
    Node *curr=head;
    Node *prev=NULL;
    Node *next=head;

    while(curr)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
}
Node * mergeLLDesc(Node *&head1 , Node*& head2)
{
    reverseLL(head1);

    reverseLL(head2);
    Node *x=head1;
    Node *y=head2;
    Node *head=NULL;
    while(x && y)
    {
        if(x->data>y->data)
        {
            insertElement(head,x->data);
            x=x->next;
        }
        else if(x->data<y->data)
        {
            insertElement(head,y->data);
            y=y->next;
        }
        else if(x->data==y->data)
        {
            insertElement(head,x->data);
            x=x->next;
            y=y->next;
        }
    }
    while(x)
    {
        insertElement(head,x->data);
        x=x->next;
    }
    while(y)
    {
        insertElement(head,y->data);
        y=y->next;
    }
    return head;
}

int main()
{
    Node * head1=NULL;
    Node *head2=NULL;

    insertElement(head1,1);
    insertElement(head1,2);
    insertElement(head1,3);
    insertElement(head1,4);

    insertElement(head2,5);
    insertElement(head2,6);



   Node *h=mergeLLDesc(head1,head2);


    print(h);

}
