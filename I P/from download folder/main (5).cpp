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
            cin>>myCircle[i];
        }
        for (int i=0;i<N;i++)
        {
        cout<<myCircle[i]<<endl;
        }
        {
        float red,ac;
        cin>>red;
        ac=3.14*red*red;
        cout<<"The area of the circle is ="<<ac<<endl;
        }


}
