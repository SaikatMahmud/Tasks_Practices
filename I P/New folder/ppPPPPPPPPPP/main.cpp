#include <iostream>
using namespace std;
class ShapeAreaCalc
{
private:
    int length, width, rad;
public:
ShapeAreaCalc()
{
 cout<<"select the shape from the option below"<<endl;
}

    ShapeAreaCalc(int l, int w,float r)
    {

        length=l;
        width=w;
        rad=r;
    }
    void getparameter()
    {
        int option;
        cout<<"enter option"<<endl;
        cin>>option;
        if (option=1)
            {
            int RectArea()

        cout<<"enter length & width"<<endl;
    cin>>length;
cin>>width;

            }
            if (option=2)
    {
        float CircArea(){
        cout<<"enter radius"<<endl;
        cin>>rad;
cout<<"area of circle ="<<3.1416*rad*rad<<endl;
        }
    }

    }

    DisplayRectArea()
    {
    cout<<"area of the rect ="<<RectArea()<<endl;
    }
    DisplayCircArea()
    {
        cout<<"area of circle ="<<CircArea()<<endl;
    }


};
int main()
{
ShapeAreaCalc obj1,obj2;
obj1.getparameter();obj2.getparameter();
obj1. RectArea();
obj1. DisplayRectArea();
obj2.CircArea();
obj2.DisplayCircArea();
}

