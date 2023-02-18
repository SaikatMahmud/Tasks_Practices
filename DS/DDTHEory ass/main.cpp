#include <iostream>
using namespace std;

int comparison=0, exchange=0;
void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j] < arr[j+1])
                {
                    swap(arr[j], arr[j+1]);
                    exchange++;
                }
          comparison++;
        }
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout <<arr[i]<< " ";
    }
    cout << endl;
    cout<<"Number of comparisons = "<<comparison<<endl;
    cout<<"Number of exchanges = "<<exchange<<endl;
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
    cout<<"Sorted Elements: ";
    printArray(arr, n);
    return 0;
}
