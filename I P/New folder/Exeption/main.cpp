#include <iostream>
using namespace std;
int main()
{
    while(1){
     try{
    double num1,num2;
    cout <<"Enter 1st number: "<<endl;
    cin>>num1;
    cout<<"Enter 2nd number: "<<endl;
    cin>>num2;

    if(num1<0 || num2<0)
    {
        throw 99;
    }
     float result= num1+num2;
     cout<<"Result= "<<result<<endl;
     if (result%2==0)
     {
         cout<<"The number is even"<<endl;
     }
     else{cout<<"The number is odd"<<endl;}
    }
    catch (...)
    {
        cout<<"Negative value is not acceptable, Try again !"<<endl;
    }

    }

}
