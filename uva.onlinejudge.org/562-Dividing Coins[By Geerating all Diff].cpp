/*
#include<iostream>
using namespace std;

int v[4]={0,5,3,2};
int c[5][10];

void kp()
{
	int i,w;
	for(i=0;i<10;i++)
		c[0][i]=0;

	for(i=1;i<4;i++)
	{
		for(w=0;w<10;w++)
		{
			if((v[i]<=w) && (v[i]+c[i-1][w-v[i]] > c[i-1][w]))
				c[i][w] = v[i]+c[i-1][w-v[i]];
			else
				c[i][w] = c[i-1][w];
		}
	}
}

int main()
{
	kp();

	int i,j;
	for(i=0;i<4;i++)
	{
		for(j=0;j<10;j++)
		{
			printf("%2d ",c[i][j]);
		}
		putchar('\n');
	}
	return 0;
}*/

#include <iostream>
#include <cmath>
using namespace std;  

#define MAXCOINS 100 
#define MAXCENTS 500 
#define MAXSUM MAXCOINS * MAXCENTS 
#define ABS(A) ((A) < 0 ? -((A)) : (A)) 

int possible[MAXSUM + 1]; 
int ncoins, value, sum; 

int main() 
{ 
	int problems, i, j, min; 
	
	scanf("%d", &problems); 
	while (problems) 
	{ 
		memset(possible, 0, sizeof(possible)); 
		possible[0] = 1; 
		
		sum = 0; 
		
		scanf("%d", &ncoins); 
		for (i = 0; i < ncoins; i++) 
		{ 
			scanf("%d", &value); 
			sum += value; 
			
			for (j = MAXSUM - value; j >= 0; j--) 
				if (possible[j]) 
					possible[j + value] = 1; 
		} 
		
		min = MAXSUM; 
		
		for (i = 0; i <= sum; i++) 
			if (possible[i] && abs(2 * i - sum) < min) 
				min = abs(2 * i - sum); 
			
			printf("%d\n", min); 
			
			problems--; 
	} 
	
	return 0; 
} 