public class Start 
{
	public static void main(String arg[])
	{
		Confidential data=new Confidential(544755454,4874,77777);
		Vehicle v=new Vehicle("Audi","Blue",data);
		v.display();
	}
}