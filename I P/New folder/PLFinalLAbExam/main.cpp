#include <iostream>
using namespace std;

class Pet
{
protected:
    string name;
    string color;
public:
    Pet (string n, string c)
    {
        name=n;
        color=c;
    }
    virtual void makeSound()
    {
        cout<<name<<" "<<color<<" "<<"Pet says"<<endl;
    }
};
class Dog: public Pet
{
public:
    void makeSound()
    {
        cout<<name<<" "<<color<<" "<<"Pet says Vaw Vaw !"<<endl;
    }
};
int main()
{
    Pet *x;
    Dog *d;
    x= new Pet("Puppy","White");
    static_cast<Pet *>(d)->makeSound();
}
