public class Vehicle
{
private String name;
private String color;
private static final double speedLimit ;
private final int modelNo;
private Confidential data;

{modelNo=47;}
static
   {speedLimit=220;}
   public Vehicle()
   {}
   public Vehicle(String name, String color,Confidential data)
   {
	   this.name=name;
	   this.color=color;
	   this.data=data;
   }
   

   public void display()
   {
	   System.out.println("Name :"+name);
	   System.out.println("Color :"+color);
	   System.out.println("Speed limit :"+speedLimit);
	   System.out.println("Model No :"+modelNo);
	   System.out.println("Confidential Data : Reg No#"+data.registrationNo+", eng No# "+data.engineNo+", plate No#"+data.plateNo);
   }
}