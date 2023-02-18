#include <iostream>
using namespace std;
class ShapeAreaCalc
{
private:
    int length, width, rad;
public:
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
            RectArea();
            }
            if (option=2)
    {
    CircArea();
    }

    }
    int RectArea(){
    cin>>length;
cin>>width;
    return (length*width);
    }
    float CircArea()
    {
        cin>>rad;
return (3.1416*rad*rad);
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
getparameter ();
obj1. RectArea();
obj1. DisplayRectArea();
obj2.CircArea();
obj2.DisplayCircArea();
}

