#include<iostream>
#include<vector>
using namespace std;
class Node{
public:

    int data;
    Node *next;
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
bool checkPalindrome(Node * &head)
{
    vector<int> v;
    Node *temp=head;
    while(temp!=NULL)
    {
        v.push_back(temp->data);
        temp=temp->next;
    }
    vector<int>::iterator itr;

    int n=v.size();
    for(int i=0;i<n/2;i++)
    {
        if(v[i]!=v[n-i-1])
        {

            return false;
        }

    }
    return true;
}
int main()
{
    Node * head=NULL;
    insertElement(head,5);
    insertElement(head,15);
    insertElement(head,25);
    insertElement(head,10);
    insertElement(head,5);

      cout<<checkPalindrome(head);
}
