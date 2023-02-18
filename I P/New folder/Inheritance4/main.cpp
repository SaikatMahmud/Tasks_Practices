#include <iostream>

using namespace std;
class CustomerDetails
{
protected:
    string cusName="name";
    string cusTelNum="0000000";
    string cusNationalId="00000000000";
public:
        void setCusName(string name)
        {
        name=cusName;
        }
        void setCusTelNum (string num)
        {
            cusTelNum=num;
        }
        void setCusID(string id)
        {
            cusNationalId=id;
        }
        void displayCusDetails()
        {
            cout<<"Customer's name:"<<cusName<<endl;
            cout<<"Customer's Phone:"<<cusTelNum<<endl;
            cout<<"Customer's ID no:"<<cusNationalId<<endl;
        }

};
class JourneyDetails: public CustomerDetails
{
protected:
    string travelDate="00/00/1900";
    string travelTo="Bangladesh";
    string travelFrom="Bangladesh";
    int distance=0;
public:
        string setTravelData(string date)
        {
            travelDate=date;
        }
        string setTravelTo (string trTo)
        {
            travelTo=trTo;

        }
        string setTravelFrom(string tfFr)
        {
            travelFrom=tfFr;
        }
        int setDistance (int d)
        {
            distance=d;
        }
        void showJourneyDetails()
        {
            cout<<"Journey date:"<<travelDate<<endl;
            cout<<"Journey to:"<<travelTo<<endl;
            cout<<"Journey from:"<<travelFrom<<endl;
            cout<<"Journey Distance:"<<distance<<endl;
        }
};
class TicketIssue:public JourneyDetails; public CustomerDetailpus
{
protected:
    float ticketPrice=0.00;
    float chrg=0.00;
public:
    void printTicket()
    {
        if(distance<=100)
        {
        cout<<"After 20% charge "<<ticketPrice+(ticketPrice*0.2)<<"taka"<<endl;
        }
       else if(101<=distance<=199)
        {
            cout<<"After 10% charge "<<ticketPrice+(ticketPrice*.1)<<"taka"<<endl;
        }
       else if(distance>=200)
        {
            cout<<"After 0% charge "<<ticketPrice<<"taka"<<endl;
        }

}
        void displayTicket()
        {
        cout<<"Per kilometer price= 5 taka"<<endl;
        cout<<"price before charge applied"<<distance*5<<" taka"<<endl;
        cout<<printTicket()<<endl;
        cout<<"******End of Ticket*******"<<endl;
        }

};
int main()
{
TicketIssue cus1,cus2,cus2;
cus1.setCusName("Saikat");
cus1.setCusTelNum("017545454");
cus1.setCusID("454545121254");
cus1.setTravelDate("45/41/2010");
cus1.setTravelTo("Dhaka");
cus1.setTravelFrom("khulna");
cus1.setDistance(110);
cus1.displayCusDetails();
cus1.showJourneyDetails();
cus1.displayTicket();
}
