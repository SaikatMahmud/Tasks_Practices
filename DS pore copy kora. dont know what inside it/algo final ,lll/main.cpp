#include <iostream>
using namespace std;


int getMax(int x, int y)
{
  if(x>y)
  {
   return x;
  }
 else
  return y;
}

// Returns the maximum value that
// can be put in a knapsack of capacity W
void knapSack(int val[], int wt[], int n, int W )
{
	int i, w;
	int K[n + 1][W + 1];

	// Build table K[][] in bottom up manner
	for (i = 0; i <= n; i++)
	{
		for (w = 0; w <= W; w++)
		{
			if (i == 0 || w == 0)
				K[i][w] = 0;
			else if (wt[i - 1] <= w)
				K[i][w] = getMax(val[i - 1]+ K[i - 1][w - wt[i - 1]], K[i - 1][w]);
			else
				K[i][w] = K[i - 1][w];
		}
	}

	cout<< K[n][W]<<endl;;
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
knapSack(p,wt,n,c);

    return 0;
}
