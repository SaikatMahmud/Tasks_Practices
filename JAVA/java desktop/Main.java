public class Main
{
	public static void main(String arg[])
	{
		Person p;
		p=new Student();
		p.setName("Saikat");
		p.setAge(20);
		p.getName();
		p.getAge();
		p.setPhoneNo("0175555");
		p.getPhoneNo();
		p.setEmail("@gmail.com");
		p.getEmail();
		p.setID("19-41556-3");
		p.setCGPA(4.00);
		p.getID();
		p.getCGPA();
		p.hasOccupation(true);
		p.display();
	}
	
}