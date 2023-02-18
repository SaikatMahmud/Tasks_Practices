#include <iostream>

using namespace std;
class myClass
{
private:
    int a;
    int b;
public:
    myClass (int a, int b)
    {
    cout<<"This is an empty"<<endl;
    }
    ~myClass()
    {
        cout<<"destroy"<<endl;
    }
};
int main()
{
    myClass myobj;
    myobj=myClass();
    myobj=myClass(5,4);
}
