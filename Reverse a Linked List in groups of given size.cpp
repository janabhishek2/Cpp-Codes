
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
void reverseK(Node *& head,int k)
{
    Node *curr=head;
    Node *prev=NULL;

    stack<Node*> s;

    while(curr)
    {
        int cnt=0;
        while(cnt<k && curr)
        {
            s.push(curr);
            curr=curr->next;
            cnt++;
        }

        while(s.size()>0)
        {
        if(prev==NULL)
        {
            prev=s.top();
            head=prev;
            s.pop();
        }
        else
        {
            prev->next=s.top();
            prev=prev->next;
            s.pop();
        }
        }

    }
    prev->next=NULL;
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


    int k=3;

    reverseK(head,k);


    print(head);

}
