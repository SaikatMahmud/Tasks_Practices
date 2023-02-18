#include <iostream>
using namespace std;

int main() {
    int i,j;
    int A[3][2]={{1,2},{4,5},{7,8}};
     cout<<"\n---------- The Matrix -----------\n";
    for (i = 0; i <3; i++)
    {
        for(j = 0; j <2; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

      cout<<"\n---------- Transpose Matrix -----------\n";
    for (j = 0; j <2; j++)
    {
        for(i = 0; i<3; i++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}
