#include <iostream>
using namespace std;

void calculateAvg(int runs[], int n)
{
    float sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+runs[i];
    }
    cout<<"Average Score:"<<(sum/n)<<endl;
    cout<<endl;
}
void playersCount(int runs[], int n)
{
    int sum=0;
    float avg;
    for(int i=0;i<n;i++)
    {
        sum=sum+runs[i];
    }
    avg=sum/n;
    cout<<"Average Score:"<<avg<<endl;
    int count=0;
    cout<<"Score(s) above average: "<<endl;;
    for (int i = 0; i < n; i++)
    {
       if (runs[i]>avg)
       {
       count++;
       cout<<runs[i]<<" ";
       }
       cout<<endl;
    }
cout<<"Number of Batsman above average score is "<<count<<endl;
cout<<endl;
}

int main()
{
    char option;
    while (option!='q')
 {
 cout<<"======= BCB Cricketer's Batting Statistics Menu System ========="<<endl;
 cout<<" Enter 'a', to take batting scores into 'runs' array of size N."<<endl;
 cout<<" Enter 'b', to find the average of all the batting scores."<<endl;
 cout<<" Enter 'c', to count and display the # of batsmen who scored above average runs."<<endl;
 cout<<" Enter 'q' quit/exit the menu system."<<endl;

 int n;
 int *runs;
 cout<<"Option : ";
 cin>>option;
 cout<<endl;
   switch(option)
  {
  case 'a':
      cout<<"How many batsman? : "<<endl;
    cin>>n;
        cout<<"Please enter the scores of the batsman:"<<endl;
    for (int i=0;i<n;i++)
    {
     cin>>runs[i];
    }
    break;
  case 'b':
    calculateAvg(runs,n);
    break;
  case 'c':
    playersCount(runs,n);
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
