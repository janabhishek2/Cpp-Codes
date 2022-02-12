#include<iostream>
using namespace std;
class Node
{

public:
    int data;
    Node *next;
    static Node *head;
    Node(int d)
    {
        data=d;
        next=NULL;
    }

};
int lengthLL(Node *&head){
int len=0;
Node * temp=head;
while(temp!=NULL){
       temp=temp->next;
       len++;
}
return len;
}
void reverseKnodes(Node* &head,int k){
       int cnt=0;
       int length=lengthLL(head);
       for(int i=0;i<length;i=i+k){

       }
}
void insertInLL(Node* &head,int val)
{

    Node *newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    else
    {
        Node *temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newNode;
        return;
    }
}
void insertInHead(Node *&head,int val)
{

    Node *newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    else
    {
        newNode->next=head;
        head=newNode;
    }

}
void printLL(Node *&head )
{

    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return;

}
void deleteElementWithVal(int val,Node *&head)
{
    Node *temp=head;

    if(temp->data==val)
    {
        head=head->next;
        delete(temp);
        cout<<"Deleted !"<<endl;
        return;
    }
    else
    {
        Node* prev=head;
        bool found=false;
        while(temp!=NULL)
        {
            if(temp->data==val)
            {
                found=true;
                break;
            }
            prev=temp;
            temp=temp->next;
        }
        if(found)
        {
            prev->next=temp->next;
            delete(temp);
            cout<<"Deleted !"<<endl;
        }
        else
        {
            cout<<"Not Found ! "<<endl;
        }
        return;

    }

}
void reverseLL(Node *&head)
{

    Node *temp=head;
    if(head==NULL)
    {
        return;
    }
    if(temp->next==NULL)
    {
        return;
    }
    else
    {
        Node *curr=head,*prev=NULL,*next=curr->next;
        while(curr!=NULL)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        head=prev;
        return;
    }

}
int main()
{
    Node *head=NULL;
    printLL(head);
    cout<<endl;
    reverseLL(head);
    printLL(head);
    insertInLL(head,4);

    insertInLL(head,5);

    insertInLL(head,6);
    insertInLL(head,7);


}
