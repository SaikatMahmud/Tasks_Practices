public class a
{
	public static void main (String arg[])
	{
		int []x=new int [6];
		int sum=1;
		for (int i=0;i<=5;i++)
		{
			x[i]=sum;
		sum=sum+3;
		System.out.println(sum);
		}
		for (int i=0;i<sum;i++)
			sum+=sum[i];
		{
			System.out.println(sum);
        //System.out.println("sum["+i+"]:"+sum);
		}
	}
}