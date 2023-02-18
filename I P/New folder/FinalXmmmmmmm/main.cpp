#include <iostream>
using namespace std;
class A
{
protected:
    int a; int b;
public:
    A()
    {
        cout<<"empty"<<endl;
    }
    A (int x, int y)
    {
        a=x; b=y;
        cout<<"value from constructor ="<<a*b<<endl;
    }
    ~A ()
    {
        for(int i=3;i>0;i--)
    cout<<i+1<<" "<<"object deleted"<<endl;
    }
    void displayA()
    {
        cout<<"hello from class A"<<endl;
    }
};
class B
{
public:
    void displayB()
    {
    cout<<"hello from class B"<<endl;
    }
};
class C: public A, public B
{
 public:
     C(): A(){}
     C(int x,int y):A (x,y){}
};
class D: public C
{
public:
    D ():C(){}
    D(int x,int y): C (x,y){}
};
class E:public D
{
public:
    E():D(){}
   E(int x,int y):D(x,y){}
};
int main()
{
E *obj; A obj1;B *obj2;
    obj=new E(7,8);
   delete(obj);
    obj1= A();
    obj=new E(15,15);
    //obj2=new B();
    obj2=new C();
    obj->displayA();
    obj->displayB();
    delete(obj);
}
