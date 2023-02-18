#include <iostream>
using namespace std;

void countSort(int Arr[],int n)
{
    int k;
    for(int i=1;i<n;i++)
    {
       int max=Arr[0];
       if (Arr[i] > max)
         {max=Arr[i];}
        k=max;
    }
int Count[k+1];
int B[n];

for (int i=0;i<=k;i++)
{
    Count[i]=0;
}
for (int i=0;i<n;i++)
 {
    ++Count[Arr[i]];
 }
for (int i=1;i<=k;i++)
 {
    Count[i]=Count[i]+Count[i-1];
 }
for (int i=n-1;i>=0;i--)
 {
    B[--Count[Arr[i]]]=Arr[i];
 }
for (int i=0;i<n;i++)
 {
    Arr[i]=B[i];
 }
}

void printArray (int Arr[], int n)
{
    cout<<"The sorted array is:"<<endl;
    for (int i=0;i<n;i++)
 {
    cout <<Arr[i]<<", ";
 }
 cout<<endl;
}
int main() {
    int n;
    cout<<"Enter the n of the array: ";
    cin>>n;

    int Arr[n];
    cout<<"\nPlease enter the element of Array: ";
    for (int i=0;i<n;i++)
    {
        cin>>Arr[i];
    }

    cout<<"\nThe Unsorted Array is: ";
    for (int i=0;i<=n;i++)
    {
        cout << Arr[i] <<", ";
    }

    countSort(Arr,n);
    printArray(Arr,n);
    return 0;
}
