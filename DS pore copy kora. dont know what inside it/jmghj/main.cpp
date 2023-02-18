#include <iostream>
using namespace std;
void knapsack(int p[], int wt[], int n, int capacity)
{
int K[n+1][capacity+1];
int i,j;
for (i=0;i<=n;i++)
{
for (j=0;j<=capacity;j++)
{
if (i==0 || j==0)
{K[i][j]=0;}
else if (wt[i]<=j)
{K[i][j]= max(K[i-1][j],K[i-1][j
-wt[i]]+p[i]);}
else
{K[i][j]=K[i-1][j];}
}
}
for (i=0;i<=n;i++)
{
for (j=0;j<capacity;j++)
{
cout<<K[i][j]<<" ";
}
cout<<K[i][j]<<" ";
cout<<endl;
}
cout<<"\nMaximum profit= "<<K[n][capacity]<<endl;
cout<<endl;
while (n>0 && capacity>=0){
if (K[n][capacity]==K[n-1][capacity])
{
cout<<n<<"th item not included"<<endl;
n--;
}
else
{
cout<<n<<"th item included"<<endl;
capacity=capacity-wt[n];
n--;
}
}
}
int main()
{
int n,i,c;
cout<<"Enter number of items: ";
cin>>n;
int wt[n],p[n];
for(i=1;i<=n;i++)
{
cout<<"Enter weight for item "<<i<<": ";
cin>>wt[i];
cout<<"Enter profit for item "<<i<<": ";
cin>>p[i];
}
cout<<"Enter Knapsack Capacity: ";
cin>>c;
cout<<"\nItem wise profits: ";
for(i=1;i<=n;i++)
{
cout<<p[i]<<" ";
}
cout<<"\nItem wise weights: ";
for(i=1;i<=n;i++)
{
cout<<wt[i]<<" ";
}
cout<<"\n"<<endl;cout<<"Knapsack table-"<<endl;
knapsack(p,wt,n,c);
return 0;
}
