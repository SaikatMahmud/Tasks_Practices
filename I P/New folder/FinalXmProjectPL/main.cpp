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
class Circle: public Area
{
public:
    void getData()
    {
        cout<<"Enter radius of the Circle: "<<endl;
        cin>>x;
    }
    void displayArea()
    {
        double areaC;
        areaC = 3.1416*x*x;
        cout<<"Area of Circle = "<<areaC<<endl;
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
       double areaT;
       areaT = 0.5*x*y;
       cout<<"Area of Triangle = "<<areaT<<endl;
    }
};
class Square: public Area
{
public:
    void getData()
    {
        cout<<"Enter length of the Square:"<<endl;
        cin>>x;
    }
    void displayArea()
    {
        double areaS;
        areaS= x*x;
        cout<<"Area of Square = "<<areaS<<endl;
    }
};



int main()
{
Area *calc[3];
Circle cir;
Triangle tri;
Rectangle rect;
Square squ;
calc[0]=&cir;
calc[1]=&tri;
calc[2]=&rect;
calc[3]=&squ;

int option;
while(1)
{

cout<<"___________Area Calculation___________\n    Choose your option"<<endl;
  cout<<"(1) Area of Circle"<<endl;
  cout<<"(2) Area of Triangle"<<endl;
  cout<<"(3) Area of Rectangle"<<endl;
  cout<<"(4) Area of Square"<<endl;
  cout<<" Press '0' for exit"<<endl;
  cout<<"\n"<<endl;
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
        case 3 : calc[2]->getData();
          calc[2]->displayArea();
          break;
        case 4 : calc[3]->getData();
          calc[3]->displayArea();
          break;
        case 0: goto end;
     default: cout<<"Invalid choice, Try again"<<endl;

  }
}
end:
            return 0;
}
