public class Employee
{

	public String email;
    public String phoneNum;
 Employee (String email,String phoneNum)
	{
	 this.email=email;
	this.phoneNum=phoneNum;
	}
	void setEmail(String email)
	{this.email=email;}
	void setPh(String phoneNum)
	{this.phoneNum=phoneNum;}
	void display()
	{
	System.out.println("Email :"+email);
	System.out.println("Phone :"+phoneNum);
	}
}