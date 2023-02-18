#include <iostream>

using namespace std;
float areaCircle(float rad)
{
    cout<<"Enter the value of radius"<<endl;
    cin>>rad;
    return (3.1416*rad*rad);

}
float areaRectangle(float a, float b)
{
    cout<<"Enter lengths"<<endl;
    cin>>a>>b;

    return (a*b);
}
float areaTriangle(float h, float b)
{
    cout<<"Enter height and base : "<<endl;
    cout<<"Enter height"<<endl;
    cin>>h;
    cout<<"Enter base"<<endl;
    cin>>b;
    return (0.5*h*b);
}
float areaSquare(float a)
{
    cout<<"Enter the length"<<endl;
    cin>>a;
    return (a*a);
}

int main()
{
    cout<<"_________Choose your option_________"<<endl;
    cout<<" 1) Area of Circle"<<endl;
    cout<<" 2) Area of Rectangle"<<endl;
    cout<<" 3) Area of Triangle"<<endl;
    cout<<" 4) Area of Square"<<endl;
    float rad,a,b,h;
    int option,i,N;
    cout<<"select ";
     cin>>option;
     if (option==1)
     {
        cout<<"How many Circle ? "<<endl;
        cin>>N;
        int myCir[N];
        for (i=0;i<N;i++)
         cout <<"Area of Circle ("<<i<<") ="<<areaCircle(rad) << endl;
     }
      else  if (option==2)
      {
        cout<<"How many Rectangle ? "<<endl;
        cin>>N;
        int myRec[N];
        int i=0;
        while (i<N)
        {
            cout<<"Area of Rectangle ("<<i<<") ="<<areaRectangle(a,b)<<endl;
            i++;
        }

      }
      else if (option==3)
      {
        cout<<"How many Triangle ? "<<endl;
        cin>>N;
        int myTri[N];
        int i=0;
        do
        {
            cout<<"Area of Triangle ("<<i<<") ="<<areaTriangle(h,b)<<endl;
            i++;
        }
        while (i<N);

      }
      else if (option==4)
      {
        cout<<"How many Square ? "<<endl;
        cin>>N;
        int mySqu[N];
        for (i=0;i<N;i++)
          cout<<"Area of Square ("<<i<<") ="<<areaSquare(a)<<endl;
      }
      else
        cout<<"please press 1 or 2 or 3 or 4 !"<<endl;

    return 0;
}

