#include <iostream>
#include<cstring>
using namespace std;
class MyPhBook
{
private:
    string name;
    string area;
    string phNum;

public:
    void setName(string n)
    {
name=n;
        }
        void setArea(string a)
        {
        a=area;
    }
    void setNum(string ph)
    {
    phNum=ph;
    }
    void displayBook()
    {
        cout<<"Name="<<name<<endl;
        cout<<"Area="<<area<<endl;
        cout<<"Number="<<phNum<<endl;
        cout<<"*****************"<<endl;

    }


};
int main()
{
   MyPhBook c1,c2,c3,c4,c5;
    c1.setName("saikat");
    c1.setArea("banani");
    c1.setNum("0175454544");
    c1.displayBook();
     c2.setName("saqib");
    c2.setArea("dhaka");
    c2.setNum("014545");
    c2.displayBook();
     c3.setName("sadman");
    c3.setArea("gulshan");
    c3.setNum("01454545");
    c3.displayBook();
     c4.setName("mahmud");
    c4.setArea("lalmatia");
    c4.setNum("019654545");
    c4.displayBook();
     c5.setName("himu");
    c5.setArea("kuril");
    c5.setNum("0195545454");
    c5.displayBook();

}
