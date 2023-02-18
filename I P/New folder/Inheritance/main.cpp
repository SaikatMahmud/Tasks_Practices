#include<iostream>
#include<string.h>
using namespace std;
class A
{
protected:
int a; string name;
public:
void setValue(int x, string n)
{
this->a=x; this->name=n;
}
void show()
{
cout<<"Value = "<<a<<endl;
cout<<"Name = "<<name<<endl;
}
};
class B
{
protected:
int val1, val2;
public:
void bMethod(int x, int y)
{
this->val1=x; this->val2=y;
cout<<val1-val2<<endl;
cout<<"This is sub class method"<<endl;
}
};
class C:public A, public B
{
private:
int val1, val2;
public:
void cMethod(int x, int y)
{
this->val1=x; this->val2=y;
cout<<val1*val2<<endl;
cout<<"This is sub class method"<<endl;
}
};
main()
{
C obj;
obj.setValue(40,"JONNY");
obj.show();
obj.bMethod(50,20);
obj.cMethod(10,10);
}
