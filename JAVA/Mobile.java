public class Mobile
{
 public String mobileOwnerName;
 public String mobileNumber;
 public float mobileBalance;
 public String mobileOSName;
 //public boolean lock=true;
 public boolean lock;
 
 public static void displayWelcomeMessage()
 {System.out.println("Welcome! the progeam is running...");}
 
 public Mobile()
 {System.out.println("default");}
 public Mobile(String n,String no,float b,String os,boolean l)
 {
  mobileOwnerName=n;
  mobileNumber=no;
  mobileBalance=b;
  mobileOSName=os;
  lock=l;
 }
//if(Mobile==false)
 //{
	 void recharge(int amount)
	 {mobileBalance=mobileBalance+amount;}
	 
	 void callSomeone(int timeDuration)
	 {mobileBalance=mobileBalance-(timeDuration*1);}
	 
	 
	 
 //}
 //else {System.out.println("Phone is locked");}
  void showInfo()
	 {
	 System.out.println("Name :"+mobileOwnerName);
	 System.out.println("Number :"+mobileNumber);
	 System.out.println("Balance :"+mobileBalance);
	 System.out.println("OS :"+mobileOSName);
	 }
}