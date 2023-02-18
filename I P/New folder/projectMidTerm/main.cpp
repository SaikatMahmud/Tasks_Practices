#include <iostream>

using namespace std;

int main()
{
        int i,N;
        cout<<"How many circle? "<<endl;
        cin>>N;
        int myCircle[N];
        for (i=0;i<N;i++)
        {
        float red,ac;
        cout<<"enter radius of circle"<<endl;
        cin>>red;
        ac=3.14*red*red;
        cout<<"The area of the circle is ="<<ac<<endl;
        }


}
