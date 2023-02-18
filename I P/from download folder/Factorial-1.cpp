#include<iostream>
using namespace std;
int main()
{
    int x,fact;
    cout<<"Enter the  number: ";
    cin>>x;
    fact=x;
    while(x>1)
    {
        x--;
        fact=fact*x;
    }
    cout<<"The factorial of the number is="<<fact<<endl;

}
