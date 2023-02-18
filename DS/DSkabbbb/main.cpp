#include <iostream>
using namespace std;

int comparison=0, exchange=0;
void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

void selectionSort(int arr[], int n)
{
    int k;
    for(int i=0; i<n; i++)
    {
         k=i;
        for(int j= i+1; j<n; j++)
        {
            if (arr[k] > arr[j])
                {
                    k=j;
                    swap(arr[i], arr[k]);
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
    cout<<"    _______Selection Sort_________"<<endl;
    cout << "Please enter the size of an array: ";
    cin >> n;
    int arr[n];
    cout << "Please enter the elements of the array: "<<endl;
    for(int i = 0; i<n; i++)
    {
        cin >>arr[i];
    }
    cout<<"Unsorted Elements: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl << endl;

    selectionSort(arr, n);
    cout<<"Sorted Elements: ";
    printArray(arr, n);
    return 0;
}


