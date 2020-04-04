/*
	KnapsackAlgorithm(v[], we[], n, W)
	{
		//v[] ---> array contains values of item
		//we[] --> array contains weights of item
		//n -----> total item
		//W -----> fixed weight
		//B[][] -> table of answer

		for w = 0 to W
			B[0,w] = 0
		for i = 1 to n
			B[i,0] = 0
		for i = 1 to n
			for w = 0 to W
				if we[i] <= w // item i can be part of the solution
					if v[i] + B[i-1,w-we[i]] > B[i-1,w]
						B[i,w] = v[i] + B[i-1,w- we[i]]
					else
						B[i,w] = B[i-1,w]
				else 
					B[i,w] = B[i-1,w] // wi > w
		return B[n,W]
	}
*/

/*
	ACM 2602-Bone Collector AC code of knapsack
*/

// starts

#include<iostream>
using namespace std;

const int MAX=1001;
int v[MAX],we[MAX],b[MAX][MAX],n,W;

void kp()
{
	int i,w;
	for(w=0;w<=W;w++)
		b[0][w]=0;
	for(w=1;w<=n;w++)
		b[w][0]=0;

	for(i=1;i<=n;i++)
	{
		for(w=0;w<=W;w++)
		{
			if(we[i] <= w)
			{
				if(v[i]+b[i-1][w-we[i]] > b[i-1][w])
					b[i][w] = v[i]+b[i-1][w-we[i]];
				else
					b[i][w] = b[i-1][w];
			}
			else
				b[i][w] = b[i-1][w];
		}
	}
}

int main()
{
	int t,i;	

	while(cin>>t)
	{
		while(t--)
		{
			cin>>n>>W;
			for(i=1;i<=n;i++)
				cin>>v[i];
			for(i=1;i<=n;i++)
				cin>>we[i];
			kp();
			cout<<b[n][W]<<endl;
		}		
	}
	return 0;
}

// end

/*
	function knapsack(w[1..n],v[1..n],W):array [1..n]
	{initialization}
	for i = 1 to n do x[i] . 0
	weight . 0
	{Greedy Loop}
	while weight < W do
		i . the best remaining object
		if weight+w[i]<=W then
			x[i] . 1
			weight . weight + w[i]
		else x[i] . (W – weight)/w[i]
			weight .W
	return x
*/

