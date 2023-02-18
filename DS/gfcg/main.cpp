#include<iostream>
using namespace std;

class Stack
{
    private:
        int *arr;
        int top;
        int MaxSize;
    public:
        Stack();
        void inputSize(int);
        bool push(int);
        bool pop();
        bool isEmpty();
        bool isFull();
        int maxValue();
        int minValue();
        void show();
};
Stack::Stack(){
    top=-1;
    MaxSize=0;
}


void Stack::inputSize(int Size){
	int *tempStk = new int[MaxSize + Size];
	for( int i=0; i<MaxSize; i++ )  tempStk[i] = arr[i];
	MaxSize += Size;
	delete [] arr;
	arr = tempStk;
}

bool Stack::isEmpty(){
    if(top==-1)
        return true;
    else
        return false;
}

bool Stack::isFull()
{
    if(top==(MaxSize-1))
        return true;
    else
        return false;
}

bool Stack::push(int n){
    if(isFull()){
        cout<<"Stack is Full\n";
        return false;
    }
    arr[++top]=n;
    return true;
}

bool Stack::pop(){
    if(isEmpty())
    {cout << "Stack is empty\n";
    return false;}
    --top;
    cout << "Pop operation is performed successfully.\n";
    return true;

}

int Stack::maxValue()
{
    int max = arr[0];
    for (int i=0; i<=top;i++)
    {
        if(arr[i]>max)
       {
        max=arr[i];
       }
    }

    return max;
}

int Stack::minValue()
{
     int min = arr[0];
    for (int i=0; i<=top;i++)
    {
        if(arr[i]<min)
       {
        min=arr[i];
       }
    }
    return min;
}


void Stack::show(){

    if(isEmpty())
    {
        cout<<"Stack is Empty \n";
        return;
    }
    cout<<"\n---------- STACK ELEMENTS ----------\n";
    for(int i=(top); i>=0; i--)
    cout<<arr[i]<<endl;
    cout<<endl;
}

int main()
{
    Stack stk;
    int p,q;
    cout<<"Enter your stack length: ";
    cin>>p;
    stk.inputSize(p);
    cout<<"Enter your "<<p<<" length stack: "<<endl;

    for(int i=0;i<p;i++)
    {
      cin>>q;
      stk.push(q);
    }
    stk.show();

    cout<<"Min: "<<stk.minValue()<<endl;
    cout<<"Max: "<<stk.maxValue()<<endl;


    return 0;
}
