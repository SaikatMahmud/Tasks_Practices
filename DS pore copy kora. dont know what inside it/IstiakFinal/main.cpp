#include <iostream>
using namespace std;

struct Player
{
    string name;
    string phoneNo;
    float battingScore;
};
void takeInputFromKeyboard(Player pl[], int n)
{
    for (int i=0;i<n;i++)
    {
    cout<<"Enter name: ";
    getline(cin, pl->name[i]);
    cout << "Enter phone no: ";
    getline(cin, pl->phoneNo[i]);
    cout <<"Enter batting score: ";
    cin >> pl->battingScore[i];
    cout<<endl;
    }

}
void average (Player countAverage[], int n)
{
    float sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=countAverage[i].battingScore;
    }
    cout<<"Average Score = "<<(sum/n)<<endl;
}

void findAboveAvgBatsmen(Player pl[],Player countAverage[],Player aboveAverage[],int n)
{
        float sum=0,avg;
    for(int i=0;i<n;i++)
    {
        sum+=countAverage[i].battingScore;
    }
    avg=sum/n;
    cout<<"Average Score:"<<avg<<endl;
    cout<<"Player above average"<<endl;
    cout<<"Player Name-Player Phone No-Batting Score"<<endl;
    for(int i=0;i<n;i++)
    {
       if (aboveAverage[i].battingScore>avg)
       {
       cout<<pl[i].name<<" "<<pl[i].phoneNo<<" "<<pl[i].battingScore<<endl;
       }
       cout<<endl;
    }
}


int main()
{

        int n;
    struct Player *pl;
    Player *countAverage;
    Player *aboveAverage;
    cin>>n;
    takeInputFromKeyboard(pl,n);


   /* char option;
    while (option!='q')
 {
 cout<<"======= BCB Cricketer's Batting Statistics Menu System ========="<<endl;
 cout<<" Enter 'a', to take batsman information into 'Player' structure array of size N."<<endl;
 cout<<" Enter 'b', to find the average of all the batting scores."<<endl;
 cout<<" Enter 'c', to count and display the # of batsmen who scored above average runs."<<endl;
 cout<<" Enter 'q' quit/exit the menu system."<<endl;

    int n;
    struct Player *pl;
    Player *countAverage;
    Player *aboveAverage;

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
    average (countAverage,n);
    break;
  case 'c':
    findAboveAvgBatsmen (pl,countAverage,aboveAverage,n);
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
 return 0; */
}
