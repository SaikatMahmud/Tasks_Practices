public class RightAngleTriangle extends Triangle
{
	RightAngleTriangle(){}
	RightAngleTriangle(float base, float height)
	{super(base,height);}
	
	void calculateArea()
	{
	System.out.println("Right angle triangle area= "+.5*base*height);
	}
	
	
}