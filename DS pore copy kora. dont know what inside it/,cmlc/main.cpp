#include <iostream>
using namespace std;

struct Player
{
    string name;
    string phoneNo;
    float battingScore;
};
void takeInputFromKeyboard(Player *pl, int n)
{
    for (int i=0;i<n;i++)
    {
    cout<<"Enter name: ";
    getline(cin, pl[i].name);
    cout << "Enter phone no: ";
    getline(cin, pl[i].phoneNo);
    cout <<"Enter batting score: ";
    cin >> pl[i].battingScore;
    cout<<endl;
    }

}
float average (Player *pl, int n)
{
    float sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=pl[i].battingScore;
    }
    cout<<"Average :"<<endl;
	return (sum/n);
}

void findAboveAvgBatsmen(Player *pl,int n)
{
        float sum=0,avg;
    for(int i=0;i<n;i++)
    {
        sum+=pl[i].battingScore;
    }
    avg=sum/n;
    cout<<"Average Score:"<<avg<<endl;
    cout<<"Player above average"<<endl;
    cout<<"Player Name-Player Phone No-Batting Score"<<endl;
    for(int i=0;i<n;i++)
    {
       if (pl[i].battingScore>avg)
       {
       cout<<pl[i].name<<" "<<pl[i].phoneNo<<" "<<pl[i].battingScore<<endl;
       }
       cout<<endl;
    }
}


int main()
{
    char option;
    while (option!='q')
 {
 cout<<"======= BCB Cricketer's Batting Statistics Menu System ========="<<endl;
 cout<<" Enter 'a', to take batsman information into 'Player' structure array of size N."<<endl;
 cout<<" Enter 'b', to find the average of all the batting scores."<<endl;
 cout<<" Enter 'c', to count and display the # of batsmen who scored above average runs."<<endl;
 cout<<" Enter 'q' quit/exit the menu system."<<endl;

    int n;
    struct Player *pl;
    //Player *countAverage;
    //Player *aboveAverage;

 cout<<"Enter your choice : ";
 cin>>option;
 cout<<endl;
   switch(option)
   {
  case 'a':
    cout<<"How many batsman? : "<<endl;
    cin>>n;
    cout<<"Please enter the details of the batsman(s):"<<endl;
    takeInputFromKeyboard (pl,n);
    break;
  case 'b':
    cout<<"Average Score = "<<average(pl,n)<<endl;
    break;
  case 'c':
    findAboveAvgBatsmen (pl,n);
    break;
  case 'q':
    cout<<">>>>>>>> Program closed <<<<<<<"<<endl;
    break;
  default:
    cout<<"Invalid input"<<endl;
    cout<<endl;
    break;
  }
 }
 return 0;
}
