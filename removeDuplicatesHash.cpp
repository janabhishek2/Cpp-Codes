

#include<bits/stdc++.h>
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
void removeDuplicatess(Node *& head)
{
    Node *temp=head;
    set<int> s;
    Node *prev=NULL;
    while(temp)
    {
        if(s.count(temp->data)==0)
        {
            s.insert(temp->data);
            prev=temp;
            temp=temp->next;
        }
        else
        {
            Node * rem=temp;
            temp=temp->next;
            delete(rem);
            prev->next=temp;
        }

    }
}
int main()
{
    Node * head=NULL;


     insertElement(head,6);
    insertElement(head,1);
     insertElement(head,6);
    insertElement(head,2);
    insertElement(head,3);
     insertElement(head,6);
    insertElement(head,4);
    insertElement(head,4);
    insertElement(head,5);
    insertElement(head,6);
    insertElement(head,7);


    removeDuplicatess(head);

    print(head);



}
