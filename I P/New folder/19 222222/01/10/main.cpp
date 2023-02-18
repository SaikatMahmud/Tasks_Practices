#include <iostream>

using namespace std;

int main()
{
int i,N;
cout<<"Enter Array Size"<<endl;
cin>>N;
int myArray[N];
for (i=0;i<N;i++)
{
    cin>>myArray[i];
}

    for (int i=0;i<N;i++)
{

cout<<"myArray["<<i<<"] ="<<myArray[i]<<endl;
}

 return 0;
}
