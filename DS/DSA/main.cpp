#include <iostream>
using namespace std;

int queue[5], front = -1, rear = -1, maxSize=5;

///returns True if the queue is empty
bool isEmpty(){
    if ((front == -1) && (rear == -1))
    {
        return true;
    }

    else
    {
        return false;
    }
}

///returns True if the queue is full
bool isFull()
{
    if (((rear+1)%maxSize)==front)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool enqueue(int Element)
{
  if(isFull() )
    {
        cout<< "Queue is Full\n";
        return false;
    }
  else if(isEmpty() )
    {
        front = rear = 0;
        queue[rear] = Element;
        cout<< Element <<" is inserted into the Queue successfully.\n";
        return true;
    }
    else
    {
        rear=(rear+1)%maxSize;
        queue[rear] = Element;
        cout<< Element <<" is inserted into the Queue successfully.\n";
        return true;
    }
}


bool dequeue()
{
    if(isEmpty() )
    {
        cout << "Queue is empty! Dequeue not possible\n";
        return false;
    }

    else if (front == rear)
    {
        front = rear = -1;
        cout << "Dequeue operation is performed successfully.\n";
        return true;
    }

    else
    {
        front=(front+1)%maxSize;
        cout << "Dequeue operation is performed successfully.\n";
        return true;
    }
}

int frontElement()
{
  return front;
}

int rearElement()
{
  return rear;
}


void showQueue()
{
  if (isEmpty() )
  {
      cout << "Cannot show Queue because it is empty\n";
      return;
  }
else if (front<=rear){
     cout << "\nQUEUE ELEMENTS: ";
     for(int i = front; i <= rear; i++)
     {
        cout << queue[i] << " ";
     }
}
  else
  {
     cout << "\nQUEUE ELEMENTS: ";
     for(int i = front; i <=(maxSize-1); i++)
     {
        cout << queue[i] << " ";
     }
     cout << endl << endl;
  }
}



int main()
{
    enqueue(1);
enqueue(2);
enqueue(3);
    ////
enqueue(4);
dequeue();
dequeue();
enqueue(5);
enqueue(6);


    cout<<"\nFront Element of the Queue: " << frontElement() <<endl;
    cout<<"Rear Element of the Queue: " << rearElement() <<endl;
    showQueue();
    return 0;
}
