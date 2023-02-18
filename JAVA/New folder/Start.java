public class Start
{
public static void main(String arg[])
{
	FixedAccount f=new FixedAccount();
	SavingsAccount s=new SavingsAccount();
   f.setAccountNumber("12345");
   f.setAccountHolderName("Saikat");
   f.setBalance(545454);
   f.depositMoney(1000);
   f.withdrawMoney(500);
   f.setTenureYear(5);
   f.setInterestRate(15);
   System.out.pritn("Number :"+f.getAccountNumber());
  System.out.pritnln("Name :"+f.getAccountHolderName());
  System.out.pritnln("Balance :"+f.getBalance());
  System.out.pritnln("Year :"+f.getTenureYear());
  System.out.pritnln("Interest % :"+f.getInterestRate());

   s.setAccountNumber("54321");
   s.setAccountHolderName("Mahmud");
  s.setBalance(363636);
  s.depositMoney(1000);
  s.withdrawMoney(500);
  s.setTenureYear(7);
  s.setInterestRate(10);
  System.out.pritnln("Number :"+s.getAccountNumber());
  System.out.pritnln("Name :"+s.getAccountHolderName());
  System.out.pritnln("Balance :"+s.getBalance());
  System.out.pritnln("Year :"+s.getTenureYear());
  System.out.pritnln("Interest % :"+s.getInterestRate());

  }
}
