public class MainClass
{
	public static void main (String[] args)
	{
		Triangle a=new Triangle();
		a.setBase(3);
		a.setHeight(4);
		a.getBase();
		a.getWidth();
		a.calculateArea();
		
		a=new RightAngleTriangle(3,4);
		a.calculateArea();
		
		a=new EquilateralTriangle(5,5);
		a.calculateArea();
	}
}