#include <iostream>
using namespace std;

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<"\nstep-"<<i<<" :";
        for(int k=0; k<n; k++)
        {
            cout<<arr[k]<<" ";

        }
        for (int j = 0; j < n; j++)
        {
            if (arr[j] > arr[j+1])
                {
                    swap(arr[j], arr[j+1]);
                }
        }
    }
}

void printArray(int arr[], int size)
{

    cout << endl;
}

int main()
{
    int n;
    cout<<"    _______Bubble Sort_________"<<endl;
    cout << "Please enter the size of an array: ";
    cin >> n;
    int arr[n];
    cout << "Please enter the elements of the array: "<<endl;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<"Unsorted Elements: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl << endl;
    bubbleSort(arr, n);
    return 0;
}
