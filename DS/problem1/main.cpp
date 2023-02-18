#include <iostream>
using namespace std;
 int main(){
   int size;
    cout << "Enter the size of the Array (more than 5): ";
    cin >> size;

    int Arr[size];
    cout << "Please enter the elements of the Array:"<<endl;
    for (int i = 0; i <size; i++)
    {
        cin >> Arr[i];
    }

    cout << "The Array is: "<<endl;
    for (int i = 0; i <size; i++)
    {
        cout << Arr[i] <<", ";
    }
 int i,j,k,temp;
 int n=size;
 for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(Arr[i]==Arr[j]){
            for(k=j;k<n;k++){
                Arr[k]=Arr[k+1];
            }
            n--;
            j--;
        }
    }

 }
 cout<<"After shorted";
 cout<<endl;
 for(i=0;i<n;i++)
 cout<<Arr[i]<<",";
return 0;
 }
