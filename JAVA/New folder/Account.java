public class Account
{
 protected String accountNumber;
 protected String accountHolderName;
 protected double balance;
 
 Account(){}
 void setAccountNumber (String accountNumber)
 {this.accountNumber=accountNumber;}
 
 void setAccountHolderName (String accountHolderName)
 {this.accountHolderName=accountHolderName;}
 
 void setBalance (double balance)
 {this.balance=balance;}
 
 String getAccountNumber()
 {return accountNumber;}
 
 String getAccountHolderName()
 {return accountHolderName;}
 
 double getBalance()
 {return balance;}
 
 void depositMoney(double amount)
 {
	 this.balance=balance+amount;
 }
 void withdrawMoney(double amount)
 {
	 this.balance=balance-amount;
 }
}
