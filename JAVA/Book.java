public class Book
{
	private String bookName;
	private String bookAuthor;
	private String bookID;
	private String bookType;
	private int bookCopy;
	private static int bookCounter=0;
	
	public Book(String bookName, String bookAuthor, String bookID,String bookType, int bookCopy)
	{
	   bookCounter++;
		this.bookName=bookName;
		this.bookAuthor=bookAuthor;
		this.bookID=bookID;
		this.bookType=bookType;
		this.bookCopy=bookCopy;
	}
	
void setBookName(String s)
{bookName=s;}

String getBookName()
{return bookName;}

void setBookAuthor (String s)
{bookAuthor=s;}

String getBookAuthor()
{return bookAuthor;}

void setBookID(String s)
{bookID=s;}

String getBookID()
{return bookID;}

void setBookType(String s)
{bookType=s;}

String getBookType()
{return bookType;}

void setBookCopy(int a)
{bookCopy=a;}

int getBookCopy()
{return bookCopy;}

void showINFO()
	{
	System.out.println("Name :"+bookName);
	System.out.println("Author :"+bookAuthor);
	System.out.println("Book ID :"+bookID);
	System.out.println("Type :"+bookType);
	System.out.println("Book copy:"+bookCopy);
	}
}
