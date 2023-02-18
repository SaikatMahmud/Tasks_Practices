#include <iostream>
using namespace std;
/*
int getMax(int x, int y)
{
  if(x>y)
  {
   return x;
  }
 else
  return y;
}
void knapsack(int v[], int wt[], int n, int M)
{
   int K[n+1][M+1];
   int i,w;
   for(w=0;w<=M;w++)
     {
       K[0][w]=0;
     }
   for(i=0;i<=n;i++)
    {
     K[i][0]=0;
    }
    for(i=1;i<=n;i++)
    {
for(w=1;w<=M;w++)
{
    if(wt[i]<=w)
   {
     K[i][w] = getMax(K[i-1][w], v[i] + K[i-1][w - wt[i]]);
}
else
K[i][w]= K[i-1][w];
}
}
cout<<"Maximum profit: "<<K[n][M]<<endl;
}
int main()
{
int n,i,M;
cout<<"Enter number of items: ";
cin>>n;
int wt[n], v[n];
for(i=0;i<n;i++)
{
cout<<"Enter weight for item "<<i+1<<": ";
cin>>wt[i];
cout<<"Enter value for item "<<i+1<<": ";
cin>>v[i];
}
cout<<"Enter Knapsack Capacity: ";
cin>>M;
knapsack(v,wt,n,M);
}
*/

int max(int x, int y)
{
  if(x>y)
  {
   return x;
  }
 else
  return y;
}

void knapsack(int p[], int wt[], int n, int capacity)
{
    int K[n+1][capacity+1];
    int i,j;

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <=capacity; j++)
        {
            if (i == 0 || j == 0)
                { K[i][j] = 0; }

            else if (wt[i - 1] <= j)
                { K[i][j] = max(K[i - 1][j], K[i-1][j-wt[i]]+ p[i]); }

            else
                { K[i][j] = K[i - 1][j]; }
        }
    }

 cout<<"Maximum profit: "<<K[n][capacity]<<endl;
}

int main()
{
    int n,i,c;
cout<<"Enter number of items: ";
cin>>n;
int wt[n], p[n];
for(i=0;i<n;i++)
{
cout<<"Enter weight for item "<<i+1<<": ";
cin>>wt[i];
cout<<"Enter profit for item "<<i+1<<": ";
cin>>p[i];
}
cout<<"Enter Knapsack Capacity: ";
cin>>c;
knapsack(p,wt,n,c);

    return 0;
}
