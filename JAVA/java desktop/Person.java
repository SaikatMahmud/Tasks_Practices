public abstract class Person
{
protected String name;
protected int age;
protected String phoneNo;
protected String email;
protected boolean occupation;

public Person(){}

public void setName(String name)
{this.name=name;}

public void setAge(int age)
{this.age=age;}

public String getName()
{return name;}

public int getAge()
{return age;}

public void setPhoneNo(String PhoneNo)
{this.phoneNo=phoneNo;}

public String getPhoneNo()
{return phoneNo;}

public void setEmail(String email)
{this.email=email;}

public String getEmail()
{return email;}

abstract boolean hasOccupation();
abstract public void display();


}