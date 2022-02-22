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
void reverseList(Node *&head)
{

    Node * curr=head;
    Node *prev=NULL;
    Node * next=curr->next;

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
Node * sumOfTwoLists(Node *&head1, Node *&head2){
       reverseList(head1);
       reverseList(head2);

       Node * head3;
       Node *temp1=head1;
       Node *temp2=head2;

       int sum=0,rem=0;
       while(temp1!=NULL || temp2!=NULL){
              sum=temp1->data+temp2->data+rem;

       }


}
int lengthLL(Node *&head)
{
    int len=0;
    Node * temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
        len++;
    }
    return len;
}

Node * reverseKnodesRec(Node * &head,int k)
{

    if (!head) return NULL;
    Node* current = head;
    Node* next = NULL;
    Node* prev = NULL;
    int count = 0;

    /*reverse first k nodes of the linked list */
    while (current != NULL && count < k)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }

    /* next is now a pointer to (k+1)th node
    Recursively call for the list starting from current.
    And make rest of the list as next of first node */
    if (next != NULL)
        head->next = reverseKnodesRec(current, k);

    return prev;

}
void reverseKnodes(Node* &head,int k)
{
    int cnt=0;
    int length=lengthLL(head);
    Node *headx=head;
    Node *curr=head;
    Node *prev=NULL;
    Node *next=curr->next;
    for(int i=0; i<length; i=i+k)
    {
        headx=prev;
        int j=0;
        while(j<k && curr!=NULL)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;

            j++;
        }
        headx=prev;
        prev->next=headx;
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
bool detectLoop(Node *&head)
{
    bool loopFound=false;
    Node *fast=head;
    Node *slow=head;
    while( fast->next->next!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
            loopFound=true;
            break;
        }
    }
    return loopFound;
}

void removeLoop(Node *&head)
{

    Node *slow=head;
    Node *fast=head;
    Node *prevSlow=slow;
    do
    {
        prevSlow=slow;
        fast=fast->next->next;
        slow=slow->next;
    }
    while(fast!=slow);
    Node *temp=head;
    while(temp->next!=slow)
    {
        temp=temp->next;
    }
    temp->next=NULL;

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

    Node *first=new Node(1);

    Node *second=new Node(2);
    Node *third=new Node(3);
    Node *fourth=new Node(4);
    head=first;
    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=NULL;


    printLL(head);
    cout<<endl;
    reverseList(head);
    printLL(head);

}



