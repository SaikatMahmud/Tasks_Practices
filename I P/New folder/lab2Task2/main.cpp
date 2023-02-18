#include<iostream>
using namespace std;
int main()
{
     int uoption;
     cout<<"Enter the option:";
     cin>>uoption;
     if(uoption==1)
     {
         float r,ac;
         cout<<"Enter the red:";
         cin>>r;
         ac=3.1416*r*r;
         cout<<"The red is="<<ac<<endl;
     }
     else if(uoption==2)
     {
         float sideA,sideB,aR;
         cout<<"Enter the sideA:";
         cin>>sideA;
         cout<<"Enter the sideB:";
         cin>>sideB;
         aR=sideA*sideB;
         cout<<"The area is="<<aR<<endl;

     }
     else if(uoption==3)
     {

         float h,b,aT;
         cout<<"Enter the h:";
         cin>>h;
         cout<<"Enter the b:";
         cin>>b;
         aT=0.5*b*h;
         cout<<"The aT is="<<aT<<endl;
     }
     else
        cout<<"Invalid Number."<<endl;
}
