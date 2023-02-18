#include<iostream>
using namespace std;

class Queue
{
    private:
        int arr[8];
        int front;
        int rear;
    public:
        Queue();
        bool enqueue(int);
        bool dequeue();
        bool isEmpty();
        bool isFull();
        void show();
};
Queue::Queue(){
    front=rear=-1;
}

bool Queue::isEmpty(){
    if ((front == -1)&&(rear == -1))
        {return true;}
    else
        {return false;}
}

bool Queue::isFull(){
    if (rear == 7)
    {return true;}
    else
    {return false;}
}

bool Queue::enqueue(int n){
 if(isFull())
    {
        cout<< "Queue is Full\n";
        return false;
    }
  else if(isEmpty())
    {
        front = rear = 0;
        arr[rear] =n;
        cout<<n<<" is inserted into the Queue successfully.\n";
        return true;
    }
    else
    {
        rear++;
        arr[rear]=n;
        cout<<n<<" is inserted into the Queue successfully.\n";
        return true;
    }
}

bool Queue::dequeue(){

    if(isEmpty() )
    {
        cout << "Queue is empty! Dequeue not possible\n";
        return false;
    }
    else if (front==rear)
    {
        front = rear = -1;
        cout << "Dequeue operation is performed successfully.\n";
        return true;
    }
    else
    {
        front++;
        cout << "Dequeue operation is performed successfully.\n";
        return true;
    }
}

void Queue::show(){

  if (isEmpty() )
  {
      cout << "Cannot show Queue because it is empty\n";
      return;
  }

  else
  {
     cout << "\nQUEUE ELEMENTS: ";
     for(int i = front; i <= rear; i++)
     {
        cout << arr[i] << " ";
     }
     cout << endl << endl;
  }
}
int main(){

     Queue q;
    int choice, value;
    do
    {
        cout<<"1 - Enqueue value"<<endl;
        cout<<"2 - Dequeue value"<<endl;
        cout<<"3 - Show Queue"<<endl;
        cout<<"0 - Exit \n"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice){
            case 0: break;

            case 1:
                cout<<"Enter value to enqueue: ";
                cin>>value;
                q.enqueue(value);
            break;

            case 2:
              q.dequeue();
            break;

            case 3:
                q.show();
                break;
            default:
                cout<<"Invalid choice"<<endl;
                cout<<endl;
        }
    }while(choice!=0);


    return 0;

}
