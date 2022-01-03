

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

void func(Node *& head)
{
    Node *b=NULL;
    Node * temp=head;
    while(temp->next)
    {
        temp=temp->next;
    }
    b=temp;
    Node * curr =head;
    Node *prev=NULL;
    while(curr)
    {
        if(curr->data%2==0 && curr->visited==false)
        {
            curr->visited=true;
            if(prev==NULL)
            {
                head=curr->next;
                Node *rem=curr;
                curr=curr->next;
                rem->next=NULL;
                b->next=rem;
                b=b->next;
            }
            else
            {
                Node *rem=curr;
                curr=curr->next;
                prev->next=curr;
                rem->next=NULL;
                b->next=rem;
                b=b->next;
            }
        }
        else
        {
            curr->visited=true;
            prev=curr;
            curr=curr->next;
        }
    }
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
    insertElement(head,7);
    insertElement(head,8);
    insertElement(head,9);

    func(head);



    print(head);

}
