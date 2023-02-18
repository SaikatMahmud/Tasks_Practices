#include <iostream>
using namespace std;

class Queue
{

   private:
        //Queue(int);
        int *queue;
        int maxSize;
        int front;
        int rear;

    public:
        Queue(int);
        bool isFull();
        bool isEmpty();
        void enqueue(int);
        void show();
};
Queue::Queue(int size)
        {
            front=rear= -1;
            maxSize = size;
            queue = new int[maxSize];
        }

bool Queue:: isEmpty()
{
      if ((front == -1)&&(rear == -1))
        {return true;}
    else
        {return false;}
}

bool Queue:: isFull()
{
    if (rear == maxSize-1)
    {return true;}
    else
    {return false;};
}

void Queue:: enqueue(int x)
{
    if(isFull())
    {
        cout<< "Queue is Full\n";
        return;
    }
    if(isEmpty())
    front++;
    rear++;

    for(int i=front;i<=rear;i++)
    {
    if(rear == i)
    queue[i] = x;

    else if(x>queue[i])
        {
        int a = queue[i];
        queue[i] = x;
        x = a;
        }
    }
}
void Queue::show()
{
    if(isEmpty())
    {
        cout<<"Cannot show Queue because it is empty\n";
        return;
    }

    cout<<"Priority Queue: ";

    for(int i=front; i<=rear; i++)
    cout<<queue[i]<<" ";
    cout<<endl;
}

int main()
{
    int x;
    cout<<"How many elements in the Queue? ";
    cin>>x;
    Queue q(x);
    for(int i=0; i<x; i++)
    {
        int y;
        cout<<"\nEnter Number: ";
        cin>>y;
        q.enqueue(y);
        q.show();
    }
    return 0;
}
