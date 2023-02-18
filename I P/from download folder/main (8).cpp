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
        float ac;
        cout<<"enter radius of circle"<<endl;
        cin>>rad;
        ae=h*b;
        cout<<"The area of the Rectangle is ="<<ac<<endl;
        }
        }
          return (3.1416*rad*rad);


}
float areaRectangle(float a, float b)
{
            int i,N;
        cout<<"How many Rectangle? "<<endl;
        cin>>N;
        int myRec[N];
        for (i=0;i<N;i++)
        {
        cout<<"enter h & b"<<endl;
        cin>>h,b;
        ae=h*b;
        cout<<"The area of the Rectangle is ="<<ac<<endl;
        }
}
float areaTriangle(float h, float b)
{
    cout<<"enter height and base "<<endl;
    cin>>h>>b;
    return (0.5*h*b);
}
float areaSquare (float a)
{
    cout<<"enter the length"<<endl;
    cin>>a;
    return (a*a);
}

int main()
{
    float rad,a,b,h;
    int option;
    cout << "enter the option" << endl;
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
