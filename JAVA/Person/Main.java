import  myPackage.Person;
import java.util.Scanner;

public class Main
{
	public static void main (String args[])
	{
		Scanner p=new Scanner (System.in);
		System.out.println("Enter name");
		String name=p.nextLine();
		System.out.println("Enter age :");
		int age=p.nextInt();
	   System.out.println("Enter BG :");
	   String bloodGroup=p.nextLine();
	   System.out.println("Enter email");
	   String email=p.nextLine();
	   System.out.println("Enter Phone :");
	   String phoneNum=p.nextLine();
	   
		Person x=new Person ();
		x.display();
		
       Employee y=new Employee();
	  
	  
	  y.display();
	}
}