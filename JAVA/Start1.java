public class Start1
{
	public static void main(String arg[])
	{
		Mobile.displayWelcomeMessage();
		Mobile m=new Mobile();
		Mobile x=new Mobile("Saikat","0178855544",25,"Andoird",false);
		x.recharge(20);
		x.callSomeone(2);
		//x.checkingOperator();
		x.showInfo();
	}
}