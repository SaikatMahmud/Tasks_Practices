package myPackage;
public class Person
{
	public String name;
	public int age;
	public String bloodGroup;
	
    Person(String name,int age,String bloodGroup)
	{
		this.name=name;
		this.age=age;
		this.bloodGroup=bloodGroup;
	}
	void setName(String name)
	{this.name=name;}
	 String getName()
	{return name;}
	void setAge(int age)
	{this.age=age;}
	int getAge()
	{return age;}
	void setBG(String bloodGroup)
	{this.bloodGroup=bloodGroup;}
	String getBG()
	{return bloodGroup;}
 
	 void display()
	 {
		 System.out.println("Name :"+name);
		System.out.println("Age :"+age);
               System.out.println("Blood Group :"+bloodGroup);		
	 }
}