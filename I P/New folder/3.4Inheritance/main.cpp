#include <iostream>
#include <cstring>

using namespace std;
class Player
{
protected:
    int mAge;
    string mName;
    string mCountry;
public:
    string setPlayerInfo( string str,int age, string country)
    {
str=mName; age=mAge; country=mCountry;
    }
    void showPlayerInfo()
    {
cout<<"Name:"<<mName<<" "<<"Age:"<<mAge<<" "<<"Country:"<<mCountry<<endl;
    }
};
class Footballer: public Player
{
protected:
    int goalScore;
    double scoringAvg;
    double totalNumMatches;
public:

void setFootballerInfo(int numOfGoal, double avgGoal,double tMatch)
   {
    numOfGoal=goalScore;  avgGoal=scoringAvg; tMatch=totalNumMatches;
     }
void showFootballerInfo()
{


}
};
class Cricketer: public Player
{
protected:
 string playerType;
 string totalNumMatches;
public:
void setCricketerInfo(string pType, string tMatch)
{
pType= playerType; tMatch=totalNumMatches;
}
void showCricketerInfo()
{
cout<<"Player type:"<<playerType<<" "<<"Total Match played:"<<totalNumMatches<<endl;
}
};
class Batsman:public Cricketer
{
protected:
double runScored;
double battingAvg;
public:
 double setBatsmanInfo(double rc, double ba)
 {
rc=runScored;
ba=battingAvg;
 }
void showBatsmanInfo()
{
cout<<"Batsman's run ="<<runScored<<"\t"<<"batsman's avg ="<<battingAvg<<endl;
}
};
class Bowler:public Cricketer
{
 protected:
     double wicketTaken;
     double wicketAvg;
 public:
    double setBowlerInfo(double wc, double wAvg)
    {
wc=wicketTaken; wAvg= wicketAvg;
    }
void showBowlerInfo()
{
cout<<"bowler's total wicket:"<<wicketTaken<<"\t"<<"Bowler's wicket Avg:"<<wicketAvg<<endl;
}
};
class wicketKeeper:public Cricketer
{
protected:
  double noOfStumping;
  double noOfRunout;
  double stumpingAvg;
  double runoutAvg;
public:
double setWicketKeeperInfo(double st, double rOut,double sAvg,double rOutAvg)
{
st=noOfStumping; rOut=noOfRunout; sAvg=stumpingAvg; rOutAvg=runoutAvg;
}
void showWicketKeeperInfo()
{
cout<<"stumped ="<<noOfStumping<<"\t"<<"stumpng avg ="<<stumpingAvg<<"\t"<<"run out="<<noOfRunout<<"\t"<<"run out avg ="<<runoutAvg<<endl;
}
};
int main()
{
 Footballer p1;
 p1.setPlayerInfo("Ronaldo", 32,"Portugal");
 p1.setFootballerInfo(120,14.5,200);
 p1.showFootballerInfo();
 Batsman p2;
 p2.setPlayerInfo("Sakib-Al-Hasan",33,"Bangladesh");
 p2.setCricketerInfo("Batsman","330");
 p2.setBatsmanInfo(7665,46.75);
 p2.showBatsmanInfo();
 Bowler p3;
 p3.setPlayerInfo("Mustafizur Rahman",23,"Bangladesh");
 p3.setCricketerInfo("Bowler","45");
 p3.setBowlerInfo(110,4.75);
 p3.showBowlerInfo();
 wicketKeeper p4;
 p4.setPlayerInfo("Mushfiqur Rahim",29,"Bangladesh");
 p4.setCricketerInfo("Wicket Keeper","145");
 p4.setWicketKeeperInfo(45,56,4.7,3.8);
 p4.showWicketKeeperInfo();
}
