#include <iostream>
using namespace std;

class Area
{
 protected:
       double x,y;
  public:
       virtual void getData()
       {};
       virtual void displayArea()
       {};
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
class Circle : public Area
{
   public:
    void getData()
    {
       cout<<"Enter the value of radius: "<<endl;
       cin>>x;
    }
    void displayArea()
    {
       double areaC;
       areaC = 3.14*x*x;
       cout<<"Area of Circle is ="<<areaC<<endl;
    }
};
class Square : public Area
{
   public:
    void getData()
    {
       cout<<"Enter the length: "<<endl;
       cin>>x;
    }
    void displayArea()
    {
       double areaS;
       areaS = x*x;
       cout<<"Area of Square is ="<<areaS<<endl;
    }
};


int main()
{
Area *calc[1];
Triangle tri;
Rectangle rect;
Circle cir;
Square squa;
calc[0]=&tri;
calc[1]=&rect;
calc[2]=&cir;
calc[3]=&squa;

int option;
while(1)
{

  cout<<"___________Area Calculation___________"<<endl;
  cout<<"(1) Area of Triangle"<<endl;
  cout<<"(2) Area of Rectangle"<<endl;
  cout<<"(3) Area of Circle"<<endl;
  cout<<"(4) Area of Square"<<endl;
  cout<<"Enter your option: "<<endl;
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

     default: cout<<"Invalid choice, Try again"<<endl;

  }
}

}
