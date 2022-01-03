#include<iostream>
using namespace std;
struct Node {
int data;
Node *next;
};
class Queue{
private:
    Node * front;
    Node * rear;
public:
    Queue()
    {
        front=NULL;
        rear=NULL;
    }
    void enqueue(int val)
    {
        Node *temp=new Node;
        if(!temp){
            cout<<"Queue is full"<<endl;
            return;
        }
        else
        {
            temp->data=val;
            temp->next=NULL;
            if(front==NULL )
            {
                front=temp;
                rear=temp;
            }
            else
            {
                rear->next=temp;
                rear=temp;
            }
            return;
        }
    }
    int dequeue()
    {
        /// if queue is empty
        if(front==NULL)
        {
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        /// remove front and increment front
        else
        {
            Node *temp=front;
            int x=temp->data;
            front=front->next;
            delete temp;
            return x;
        }
    }
    void display()
    {
        Node *temp=front;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.display();
return 0;
}
