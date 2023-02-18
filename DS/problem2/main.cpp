#include <iostream>
using namespace std;

int main()
{
    int Arr[10];
   cout <<"Please enter 10 integers of the Array"<<endl;
    for(int i=0;i<10;i++)
        cin >>Arr[i];
    for(int i=0;i<10;i++)
    {
        int n=0;
        for(int j=0; j<10; j++)
        {
            if(Arr[i]==Arr[j]&&j!=i)
            {
                n++;
                Arr[j] = -1;
            }
        }
        if(Arr[i]!=-1)
            {cout << Arr[i] << " occurs = " << n+1 << " times"<<endl;}
    }
    return 0;
}
