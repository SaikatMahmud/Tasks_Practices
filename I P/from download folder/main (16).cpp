#include <iostream>

using namespace std;
float areaCircle(float rad)
{
            int i,N;
        cout<<"How many circle? "<<endl;
        cin>>N;
        int myCircle[N];
        for (i=0;i<N;i++)
        {
        float rad,ac;
        cout<<"enter radius of circle"<<endl;
        cin>>rad;
        ac=3.1416*rad*rad;
        cout<<"The area of the circle is ="<<ac<<endl;
        }


}
float areaRectangle(float a, float b)
{
    int i,N;
        cout<<"How many Rectangle? "<<endl;
        cin>>N;
        int myRectangle[N];
        for (i=0;i<N;i++)
        {
        float a,b,ar;
        cout<<"enter length and base"<<endl;
        cin>>a>>b;
        ar=a*b;
        cout<<"The area of the Rectangle is ="<<ar<<endl;
        }
}
float areaTriangle(float h, float b)
{
    int i,N;
        cout<<"How many Triangle? "<<endl;
        cin>>N;
        int myTriangle[N];
        for (i=0;i<N;i++)
        {
        float a,b,atr;
        cout<<"enter height and base"<<endl;
        cin>>h>>b;
        atr=0.5*h*b;
        cout<<"The area of the Triangle is ="<<atr<<endl;
        }
}
float areaSquare (float a)
{
    int i,N;
        cout<<"How many Square? "<<endl;
        cin>>N;
        int mySquare[N];
        for (i=0;i<N;i++)
        {
        float a,as;
        cout<<"enter length of Square"<<endl;
        cin>>a;
        as=a*a;
        cout<<"The area of the square is ="<<as<<endl;
        }
}

int main()
{
    float rad,a,b,h;
    int option;
    cout << "Enter the option" << endl;
     cin>>option;
     if (option==1)
     {
         cout <<"area of circle ="<<areaCircle(rad) << endl;
     }
      else  if (option==2)
      {
          cout<<"area of rectangle ="<<areaRectangle(a,b)<<endl;
      }
      else if (option==3)
      {
          cout<<"area of triangle ="<<areaTriangle(h,b)<<endl;
      }
      else if (option==4)
      {
          cout<<"area of square ="<<areaSquare(a)<<endl;
      }
      else
        cout<<"please press 1,2,3 or 4"<<endl;

    return 0;
}
