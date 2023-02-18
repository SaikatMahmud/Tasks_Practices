#include <iostream>
using namespace std;

struct student
{
    int id;
    int cr;
    float cgpa;
}
student[10];

int main()
{
    cout<<"Enter students information: " <<endl;
    for(int i=0;i<10;i++)
    {
        cout<<"Student ID: ";
        cin>>student[i].id;

        cout<<"Enter completed credit: ";
        cin>>student[i].cr;

        cout<<"Enter CGPA: ";
        cin>>student[i].cgpa;
        cout<<endl;
    }

    cout<<"__________Displaying Information__________"<<endl;
    for(int i=0;i<10;i++)
    {
        if(student[i].cgpa>=3.75)
        {
        cout<<"Student's ID whose CGPA is more than 3.75= "<<student[i].id<<endl;
        cout<<"********"<<endl;
        }
        if(student[i].cr>=50)
        {
        cout<<"Student's ID who has completed more than 50 credits= "<<student[i].id<<endl;
       cout<<"********"<<endl;
       }
    }

    return 0;
}
