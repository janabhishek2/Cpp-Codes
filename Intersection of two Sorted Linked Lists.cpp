
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
Node* interSection(Node *& head1, Node *& head2)
{
    Node *temp1=head1;
    Node *temp2=head2;
    Node *head3=NULL;
    while(temp1 && temp2)
    {
        if(temp1->data<temp2->data)
        {
            temp1=temp1->next;
        }
        else if(temp2->data<temp1->data)
        {
            temp2=temp2->next;
        }
        else if(temp2->data==temp1->data)
        {
            insertElement(head3,temp1->data);
            temp1=temp1->next;
             temp2=temp2->next;
        }
    }

    return head3;
}
int main()
{
    Node * head=NULL;
    Node * head2=NULL;
    insertElement(head,1);
    insertElement(head,2);
    insertElement(head,3);
    insertElement(head,4);
    insertElement(head,6);

    insertElement(head2,2);
    insertElement(head2,4);
    insertElement(head2,6);
    insertElement(head2,8);
    Node * h =interSection(head,head2);
    print(h);



}
