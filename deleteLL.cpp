
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

 void deleteItem(int k , Node *& head)
 {
     Node *prev=NULL;
     Node *curr=head;

     while(curr->data!=k)
     {
         prev=curr;
         curr=curr->next;
     }
     /// If key is at start
     if(prev==NULL)
     {
         head=curr->next;
         Node *p =curr;
         curr=curr->next;
         delete(p);
     }
     /// For all other cases
     else
     {
         Node *p = curr;
         curr=curr->next;
         prev->next=curr;
         delete(p);
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


    deleteItem(6,head);


    print(head);

}
