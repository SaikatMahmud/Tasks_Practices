#include<iostream>
using namespace std;
int main()
{
    int a,num,fact=1;
    cout<<"Enter the  number: ";
    cin>>num;

    for(a=1;a<=num;a++)
    {
               fact=fact*a;
    }
    cout<<"The factorial of the number is="<<fact<<endl;

}

