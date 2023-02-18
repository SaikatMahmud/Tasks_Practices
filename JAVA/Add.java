public class Add
{
	public static void main (String arg [])
	{
		int [] v=new int [5];
		int sum =1;
		int value=4;
		for (int i=0; i<v.length ;i++)
		{
			v[i]=value;
			value=value;
		}
		for (int i=0; i<v.length ;i++)
		{
			sum=sum+v[i];
		}
		System.out.println(sum);
		}
}
