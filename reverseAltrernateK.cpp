

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

void reverseAlternateK(Node *& head , int k)
{
    if(head==NULL) return ;
    stack<Node *> s;
    Node * curr=head;
    Node *prev=NULL;

    bool b=true;
    while(curr)
    {
        if(b)
        {
            int cnt=0;
            while(curr && cnt<k )
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
            prev->next=NULL;
            b=false;
        }
        else
        {
            int cnt=0;
            while(curr && cnt<k)
            {
                prev->next=curr;
                prev=prev->next;
                curr=curr->next;
                cnt++;
            }
            b=true;
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


    reverseAlternateK(head,3);


    print(head);

}
