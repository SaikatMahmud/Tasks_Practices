#include <iostream>

using namespace std;

int main()
{
int myIntArray[5]={10,20,30,40,50};
float myFloatArray[5]= {2.2,4.6,5.3,6.8,1.5};
char myCharArray[5]={'s','d','a','2','t'};
for (int i=0;i<5;i++)
{
    cout<<"myIntArray["<<i<<"]="<<myIntArray[i]<<endl;
}
for (int i=0;i<5;i++)
{
    cout<<"myFloatArray["<<i<<"]="<<myFloatArray[i]<<endl;
}
for (int i=0;i<5;i++)
{
    cout<<"myCharArray["<<i<<"]="<<myCharArray[i]<<endl;
}
return 0;
}
