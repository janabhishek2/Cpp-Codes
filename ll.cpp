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
bool findInList(int x,Node *&head)
{
    Node * temp=head;
    while(temp!=NULL)
    {
        if(temp->data==x)
        {
            return true;
        }
        temp=temp->next;
    }
}
int detectLoop (Node *& head)
{
    Node *slow=head;
    Node*fast=head;



    while( fast!=NULL)
    {
        if(slow==fast)
        {
            return true;
        }
        slow=slow->next;
        fast=fast->next->next;
    }
    return false;
}

int loopLength(Node *&head)
{
    Node *fast=head;
    Node*slow=head;
    Node *p=NULL;
    while(fast!=NULL )
    {
        if(fast==slow)
        {
            p=slow;
            break;
        }
        slow=slow->next;
        fast=fast->next->next;
    }

    int cnt=1;
    Node *temp=p;
    while(temp!=p)
    {
        cnt++;
        temp=temp->next;

    }
    return cnt;
}

int main()
{
    Node * head=NULL;

    insertElement(head,5);
    insertElement(head,10);

    insertElement(head,15);

    insertElement(head,210);

    head->next->next->next=head->next;
    cout<<loopLength(head);

}
