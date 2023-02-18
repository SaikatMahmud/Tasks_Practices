#include <iostream>
using namespace std;

class Student{

private:
    int id;
    string name;
    double cgpa;

public:
    void setId()
    {
    id=id;
    cout<<"Enter id: ";
    cin>>id;

    }
    void setName()
    {
    name=name;
    cout<<"Enter name: ";
    cin>>name;

    }
    void setCgpa()
    {
    cgpa=cgpa;
    cout<<"Enter CGPA: ";
    cin>>cgpa;
    }
    int getId()
    {return id;}
    string getName()
    {return name;}
    double getCgpa()
    {return cgpa;}
    void show()
    {
cout<<"ID: "<<getId()<<endl;
cout<<"Name: "<<getName()<<endl;
cout<<"CGPA: "<<getCgpa()<<endl;
    }
};

int main()
{
    Student s;
s.setId();
s.setName();
s.setCgpa();
s.show();


return 0;
}
