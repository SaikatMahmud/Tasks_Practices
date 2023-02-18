#include <iostream>
using namespace std;
class Directory
{
protected:
   string personName;
   string dateOfBirth;
public:
    void setPersonInfo(string pn, string db)
    {
        personName=pn;
        dateOfBirth=db;
    }
    virtual void displayInfo()
    {
        cout<<"Name = "<<personName<<endl;
        cout<<"DOB = "<<dateOfBirth<<endl;
    }
};
class NationalDirectory: public Directory
{
protected:
 int personAge;
 string personCity;
public:
  void setPersonAge(int age)
  {
      personAge=age;
  }
  void setPersonCity(string city)
  {
      personCity=city;
  }
  void displayInfo()
  {
      cout<<"Age = "<<personAge<<endl;
      cout<<"City = "<<personCity<<endl;
  }
};
class LocalDirectory: public Directory
{
protected:
 string personAddress;
 string personTelNo;
 string personLocalArea;
 double zipCode;
public:
  void setPersonAddress(string address)
  {
      personAddress=address;
  }
  void setPersonTelNo(string telNo)
{
    personTelNo=telNo;
}
void setPersonLocalArea(string Larea)
{
    personLocalArea=Larea;
}
void setPersonZipcode(double zc)
{
    zipCode=zc;
}
void displayInfo()
{
    cout<<"Address = "<<personAddress<<endl;
    cout<<"Tel = "<<personTelNo<<endl;
    cout<<"Local Area = "<<personLocalArea<<endl;
    cout<<"Zip Code = "<<zipCode<<endl;
}
};
class Profession: public Directory
{
protected:
 string personProfession;
 string personInstitution;
 string personGrade;
 double personSalary;
public:
   void setPersonProfession(string prof)
   {
       personProfession=prof;
   }
   void setPersonInstitution(string inst)
{
    personInstitution=inst;
}
void setPersonGrade(string Pgrade)
{
    personGrade=Pgrade;
}
void setPersonSalary(double s)
{
    personSalary=s;
}
void DisplayInfo()
{
    cout<<"Profession = "<<personProfession<<endl;
    cout<<"Institute = "<<personInstitution<<endl;
    cout<<"Grade = "<<personGrade<<endl;
    cout<<"Salary = "<<personSalary<<endl;
}
};
int main()
{
    Directory *person;
    Directory p;
    person=&p;
    p.setPersonInfo("Saikat","27/11/2001");
    p.displayInfo();
    NationalDirectory n;
    LocalDirectory l;
    Profession pr;
    person=&n;
    n.setPersonAge(19);
    n.setPersonCity("Dhaka");
    n.displayInfo();
    person=&l;
    l.setPersonAddress("Block A,Road 2");
    l.setPersonTelNo("017xxxxxxxx");
    l.setPersonLocalArea("Bashundhara R/A");
    l.setPersonZipcode(1229);
    l.displayInfo();
    person=&pr;
    pr.setPersonProfession("Student");
    pr.setPersonInstitution("AIUB");
    pr.setPersonGrade("Band-6");
    pr.setPersonSalary(0);
    pr.DisplayInfo();
}
