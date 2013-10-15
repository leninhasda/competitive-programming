#pragma warning(disable:4786)
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<iostream>
#include<algorithm>
#include<map>
#include<list>
#include<set>
#include<queue>
#include<stack>
#include<vector>
#include<string>
using namespace std;

int main()
{

	int n, i, k, X, O;
	char a[4][4];
	bool xW, oW;

	while(scanf("%d",&n)==1)
	{
		while(n--)
		{
			X = O = 0;
			xW = oW = false;

			for(i = 0; i < 3; i++)
			{
				scanf("%3s",&a[i]);
				for(k = 0; k < 3; k++)
				{
				//	scanf("%c",&a[i][k]);
					if(a[i][k] == 'X')
						X++;
					if(a[i][k] == 'O')
						O++;
				}
			}

			if(X == O || X == (O+1))
			{
				if((a[0][0] == 'X' && a[0][1] == 'X' && a[0][2] == 'X') ||
				   (a[1][0] == 'X' && a[1][1] == 'X' && a[1][2] == 'X') ||
				   (a[2][0] == 'X' && a[2][1] == 'X' && a[2][2] == 'X') ||
				   (a[0][0] == 'X' && a[1][0] == 'X' && a[2][0] == 'X') ||
				   (a[0][1] == 'X' && a[1][1] == 'X' && a[2][1] == 'X') ||
				   (a[0][2] == 'X' && a[1][2] == 'X' && a[2][2] == 'X') ||
				   (a[0][0] == 'X' && a[1][1] == 'X' && a[2][2] == 'X') ||
				   (a[0][2] == 'X' && a[1][1] == 'X' && a[2][0] == 'X'))
				{
					xW = true;
				}
				if((a[0][0] == 'O' && a[0][1] == 'O' && a[0][2] == 'O') ||
				   (a[1][0] == 'O' && a[1][1] == 'O' && a[1][2] == 'O') ||
				   (a[2][0] == 'O' && a[2][1] == 'O' && a[2][2] == 'O') ||
				   (a[0][0] == 'O' && a[1][0] == 'O' && a[2][0] == 'O') ||
				   (a[0][1] == 'O' && a[1][1] == 'O' && a[2][1] == 'O') ||
				   (a[0][2] == 'O' && a[1][2] == 'O' && a[2][2] == 'O') ||
				   (a[0][0] == 'O' && a[1][1] == 'O' && a[2][2] == 'O') ||
				   (a[0][2] == 'O' && a[1][1] == 'O' && a[2][0] == 'O'))
				{
					oW = true;
				}
				
				
				if((xW && (X == (O+1)) && !oW) || (oW && (X==O) && !xW) || (!xW && !oW))
				{
					printf("yes\n");
				}
				else
				{
					printf("no\n");
				}
					
			}
			else
			{
				printf("no\n");
			}
		}
	}

	return 0;
}