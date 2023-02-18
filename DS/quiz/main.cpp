#include <iostream>

using namespace std;

/*void exam1()
{
    int var=211;
    int *ptr;
    ptr =&var;
    cout<<ptr<<","<<*(&var)<<","<<*ptr;
}
int main()
{
exam1();
}
int main()
{
    float A[5]={100.2,34.5,6.4,6.6,78.6};
    float *p;
    p=A;
    cout<<*p<<", ";
    cout<<*(p+3)<<",";
    cout<<*p+2;
}*/

int main()
{
    int a[10],i,*p;
    a[0]=1;
    a[1]=2;
    p=a;
  (*p)++;
cout<<a[1];
}
