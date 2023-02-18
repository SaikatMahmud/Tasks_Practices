 #include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int Arr[size],count=0;
    cout << "\nPlease enter the element of an Array: ";
    for (int i = 0; i<size; i++)
    {
        cin >> Arr[i];
    }

    cout << "\nArray is: ";
    for (int i = 0; i<size; i++)
    {
        cout << Arr[i] <<", ";
    }

 for(int i=0; i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
        if(Arr[i] == Arr[j])
            {
                count++;
                break;
            }
        }
    }
    cout<<"\nTotal number of duplicate elements found in array: "<<count;

    return 0;
}
