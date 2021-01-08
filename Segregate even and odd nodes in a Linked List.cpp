

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
void moveOddtoEnd(Node *& head)
{
    Node * curr = head;
    Node * temp=head;
    while(temp->next)
    {
        temp=temp->next;
    }
    Node *odd=temp;
    Node *prev=NULL;
    while(curr!=odd)
    {
        if(curr->data%2!=0 && curr->visited==false)
        {
            curr->visited=true;
            Node * rem=curr;
            curr=curr->next;
            if(prev==NULL)
            {
              head=curr;

            }
            else{
                 prev->next=curr;
            }

            rem->next=NULL;
            odd->next=rem;
            odd=odd->next;

        }
        else
        {

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


    moveOddtoEnd(head);
    print(head);



}
