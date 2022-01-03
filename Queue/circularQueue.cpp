#include<iostream>
using namespace std;
class CircularQueue{
private:
    int size;
    int front;
    int rear;
    int *ptr;
public:
    CircularQueue(int sz)
    {
        size=sz;
        front=0;
        rear=0;
        ptr=new int[sz];
    }
    void enqueue(int val)
    {
        ///check if queue full
        if((rear+1)%size==front)
        {
            cout<<"Queue is full"<<endl;
            return;
        }
        else
        {
            rear=(rear+1)%size;
            *(ptr+rear)=val;
            return;
        }
    }
    int dequeue()
    {
        ///check if queue is empty
        if(front==rear)
        {
            return -1;
        }
        else
        {
            front=(front+1)%size;
            return *(ptr+front);
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
          int i;
          for(i=(front+1)%size;i!=(rear+1)%size;)
          {
              cout<<ptr[i]<<" ";
              i=(i+1)%size;
          }
          return;
        }
    }
    void displayArr()
    {
        cout<<"Array"<<endl;
        for(int i=0;i<size;i++)
        {
            cout<<ptr[i]<<" ";
        }
        cout<<endl;
    }
};
int main()
{
    CircularQueue cq(5);
    cq.enqueue(5);
    cq.enqueue(10);
    cq.enqueue(15);
    cq.enqueue(20);


    cq.displayQueue();
    return 0;
}
