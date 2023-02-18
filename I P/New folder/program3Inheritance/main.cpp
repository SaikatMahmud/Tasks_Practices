#include <iostream>
using namespace std;
class vehicle
{
protected:
    string vName; string vColor;
    int noOfWheels,engineSize;
public:
    void setVname(string n)
    {
        vName=n;
    }
    void setVcolor(string c)
    {
        vColor=c;
    }
    void setWheel (int w)
    {
        noOfWheels=w;
    }
    void setEngine(int e)
    {
        engineSize=e;
    }
};
class Bus:public vehicle
{
public:
    void displayBus()
    {
    cout<<"Name:"<<vName<<"\t"<<"color:"<<vColor<<"\t"<<"wheels:"<<noOfWheels<<"\t"<<"engine size:"<<engineSize<<"cc"<<endl;
    }
};
class Car:public vehicle
{
public:
    void displayCar()
    {
      cout<<"Name:"<<vName<<"\t"<<"color:"<<vColor<<"\t"<<"wheels:"<<noOfWheels<<"\t"<<"engine size:"<<engineSize<<"cc"<<endl;
    }
};
class Bike: public vehicle
{
public:
void displayBike()
{
    cout<<"Name:"<<vName<<"\t"<<"color:"<<vColor<<"\t"<<"wheels:"<<noOfWheels<<"\t"<<"engine size:"<<engineSize<<"cc"<<endl;
}
};
int main()
{
    Bus b1;Car c1; Bike h1;
    b1.setVname("Volvo");
    b1.setVcolor("Red");
    b1.setWheel(10);
    b1.setEngine(3000);
    c1.setVname("BMW");
    c1.setVcolor("Blue");
    c1.setWheel(4);
    c1.setEngine(1700);
    h1.setVname("Yamaha");
    h1.setVcolor("Black");
    h1.setWheel(2);
    h1.setEngine(150);
    b1.displayBus();
    c1.displayCar();
    h1.displayBike();
}
