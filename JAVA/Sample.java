public class Sample
{
	public int value1, value2, value3, value4;
	
	public Sample()
	{}
	public Sample(int value1, int value2,int value3,int value4)
	{
		this.value1=value1;
		this.value2=value2;
		this.value3=value3;
		this.value4=value4;
	}
	void display(int value1)
	{
	System.out.println(value1);
	}
	
	void display(int value1, int value2)
	{
		
	System.out.println(value1);
	System.out.println(value2);
	}
	
	void display(int value1, int value2, int value3, int value4)
	{
	   
	System.out.println(value1);
	System.out.println(value2);
	System.out.println(value3);
	System.out.println(value4);
	}
	
}



