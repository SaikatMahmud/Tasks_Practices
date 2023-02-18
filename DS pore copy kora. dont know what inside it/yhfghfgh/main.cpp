#include <iostream>
using namespace std;
void countSort(int Arr[],int n)
{
int k;
int max=Arr[0];
for(int i=1;i<n;i++)
{
if (Arr[i] > max)
max=Arr[i];
k=max;
}
int Count[k+1];
int B[n];
cout<<"\nCreate & initialize an array with all 0 values.\nLength of this array Max+1.\nCount array["<<k+1<<"]: ";
for (int i=0;i<=k;i++)
{
Count[i]=0;
cout<<"("<<i<<")"<<Count[i]<<" ";
}
cout<<endl;
for (int i=0;i<n;i++)
{
++Count[Arr[i]];
}
cout<<"\nFrequency of the Count array: ";
for (int i=0;i<=k;i++)
{
cout<<"("<<i<<")"<<Count[i]<<" ";
}
cout<<endl;
for (int i=1;i<=k;i++)
{
Count[i]=Count[i]+Count[i-1];
}
cout<<"\nActual position of the elements after updating Count array: ";
for (int i=0;i<=k;i++)
{
cout<<"("<<i<<")"<<Count[i]<<" ";
}
cout<<endl;
for (int i=n-1;i>=0;i--)
{
B[Count[Arr[i]]-1]=Arr[i];
Count[Arr[i]]--;
}
for (int i=0;i<n;i++)
{
Arr[i]=B[i];
}
}
void printArray (int Arr[], int n)
{
for (int i=0;i<n;i++)
{
cout <<Arr[i]<<" ";
}
cout<<endl;
}
int main()
{
int n;
cout<<"Enter the number of elements: ";
cin>>n;
int Arr[n];
cout<<"Please enter the element of Array:"<<endl;
for (int i=0;i<n;i++)
{
cin>>Arr[i];
}
cout<<"The Unsorted Array is: ";
printArray(Arr,n);
countSort(Arr,n);
cout<<"\nThe Sorted array is: ";
printArray(Arr,n);
return 0;
}
