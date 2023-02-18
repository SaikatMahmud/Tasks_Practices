public class Student extends Person
{
private String id;
private double cgpa;

public Student(){}

public void setID(String id)
{this.id=id;}

public void setCGPA(double cgpa)
{this.cgpa=cgpa;}

public String getID()
{return id;}

public double getCGPA()
{return cgpa;}

boolean hasOccupation(boolean  occupation)
{this.occupation=occupation;}
public void display()
{
System.out.println("Name :"+name);
System.out.println("Age :"+age);
System.out.println("Ph no :"+phoneNo);
System.out.println("Email :"+email);
System.out.println("Id :"+id);
System.out.println("CGPA :"+cgpa);
System.out.println("Has a Occupation= "+hasOccupation());
}

}