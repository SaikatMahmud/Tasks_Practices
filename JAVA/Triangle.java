public class Triangle
{
  protected float base;
  protected float height;

  Triangle(){}
  Triangle(float base, float height)
  {
	  this.base=base;
	  this.height=height;
  }
  void setBase(float base)
  {this.base=base;}
  
void setHeight(float height)
{this.height=height;}

float getBase()
{return base;}

float getWidth()
{return height;}

void calculateArea()
{
	System.out.println("Base= "+base);
	System.out.println("Height= "+height);
}
}