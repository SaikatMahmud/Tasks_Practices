#include <iostream>

using namespace std;

int main()
{
int i,N;
cout<<"Enter students number of B4 section"<<endl;
cin>>N;
float quiz1[N],quiz2[N],avg;
cout<<"Numbers of Quiz 1"<<endl;
for (i=0;i<N;i++)
{

    cin>>quiz1[i];
}
    for (int i=0;i<N;i++)
    {
        cout <<"Quiz1="<<quiz1[i]<<endl;
    }
    cout<<"Numbers of Quiz 2"<<endl;
for (i=0;i<N;i++)
{

    cin>>quiz2[i];
}
    for (int i=0;i<N;i++)
    {
        cout <<"Quiz 2="<<quiz2[i]<<endl;
    }
for (i=0;i<N;i++)
    {
        cout <<"***Avg ="<<(quiz1[i]+quiz2[i])/2<<endl;
    }
    return 0;

}
