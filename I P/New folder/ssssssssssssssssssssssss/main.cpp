#include <iostream>
using namespace std;

class Area
{
 protected:
       double x,y;
  public:
       virtual void getData()
       {}
       virtual void displayArea()
       {}

};


class Triangle : public Area
{
   public:
    void getData()
    {
       cout<<"Enter base and height of Triangle: "<<endl;
       cin>>x>>y;

    }
    void displayArea()
    {
 try{
        if(x<=0 || y<=0)
            {
                throw 44;
            }
        double areaT;
       areaT = 0.5*x*y;
       cout<<"Area of Triangle = "<<areaT<<endl;
        }
            catch (...)
            {
                cout<<"Invalid value"<<endl;
            }
        }

};

class Rectangle : public Area
{
   public:
    void getData()
    {
       cout<<"Enter length of two sides of Rectangle: "<<endl;
       cin>>x>>y;
    }
    void displayArea()
    {
       double areaR;
       areaR = x*y;
       cout<<"Area of Rectangle is ="<<areaR<<endl;
    }
};



int main()
{
Area *calc[1];
Triangle tri;
Rectangle rect;
calc[0]=&tri;
calc[1]=&rect;

int option;
while(1)
{

  cout<<"___________Area Calculation___________\n   Choose your option"<<endl;
  cout<<"(1) Area of Triangle"<<endl;
  cout<<"(2) Area of Rectangle"<<endl;
  cout<<"Select option: "<<endl;
  cin>>option;
  switch(option)
  {
     case 1 : calc[0]->getData();
          calc[0]->displayArea();
          break;
     case 2 : calc[1]->getData();
          calc[1]->displayArea();
          break;
     default: cout<<"Invalid choice, Try again"<<endl;

  }
}

}
