#include <iostream>

using namespace std;

int main()
{
    int x,d;
  cout<<"enter value for X"<<endl;
  cin>>x;
  cout<<"enter total digit"<<endl;
  cin>>d;
  for (int i=1;i<=d;i=i+1)
  {
      int num=x*i;
      cout <<x<<"x"<<i<<"="<<num<<endl;

  }
  return 0;
}

