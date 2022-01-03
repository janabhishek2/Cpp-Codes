#include<iostream>
using namespace std;
class Queue{
private:
    int size;
    int rear;
    int front;
    int * ptr;
public:
    void isFull();
    void isEmpty();
    Queue(int n)
    {
        size=n;
        front=-1;
        rear=-1;
        ptr=new int[size];
    }
    void enqueue(int val)
    {
        if(rear==size-1)
        {
            cout<<"Queue is full"<<endl;
            return;
        }
        else
        {
            rear++;
            *(ptr+rear)=val;
            return;
        }

    }
    void displayQueue()
    {
        if(front==rear)
        {
            cout<<"Queue is empty"<<endl;
            return;
        }
        else
        {
            for(int i=front+1;i<=rear;i++)
            {
                cout<<*(ptr+i)<<" ";
            }
            cout<<endl;
            return;
        }
    }
    int dequeue()
    {
        if(front==rear)
        {
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        else
        {
            front++;
            return *(ptr+front);
        }
    }

};
void Queue::isEmpty()
{
    if(front==rear)
    {
        cout<<"Queue is Empty"<<endl;
    }
    else cout<<"Not Empty"<<endl;
}
void Queue::isFull()
{
    if(rear==size-1)
    {
        cout<<"Queue is full"<<endl;

    }
    else cout<<"Queue is empty"<<endl;
    return;
}
int main()
{
    Queue q(5);
    q.enqueue(4);
    q.enqueue(10);
     q.enqueue(4);
    q.enqueue(10);
    q.enqueue(20);
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();

return 0;
}
