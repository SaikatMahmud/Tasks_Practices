public class EquilateralTriangle extends Triangle
{
EquilateralTriangle(){}
   EquilateralTriangle(float base, float height)
   {super(base,height);}
   
   void calculateArea()
   {
	System.out.println("Equilateral triangle area= "+0.433*base*height);
	//  (sq root 3)/4= 0.433
   }
}