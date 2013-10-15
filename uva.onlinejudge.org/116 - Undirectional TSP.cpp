// 116 - Unidirectional TSP
#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

#define INF 999999999

typedef struct
{
    int val, row;
}valRow;

bool cmp(valRow a, valRow b)
{
	if(a.val == b.val && a.row < b.row) return true;
    else if(a.val < b.val) return true;
    return false;
}

int main()
{
	int m, n, A[11][101];
	int row, col;
	valRow arr[3], M[11][101], min;

	while(scanf("%d %d", &m, &n) ==2 )
    {
        for(row=0; row<m; row++)
        {
            for(col=0; col<n; col++)
            {
                scanf("%d", &A[row][col]);
            }
        }

		min.val = INF; min.row = -1;

        for(row=0; row<m; row++)
        {
            M[row][n-1].val = A[row][n-1];
			M[row][n-1].row = row;
			if((A[row][n-1] == min.val && row < min.row) || (A[row][n-1] < min.val)) 
			{
				min.val = A[row][n-1];
				min.row = row;
			}
        }

        
		//debug
		//int k;

        for(col=n-2; col>=0; col--)
        {
			min.val = INF; min.row = -1;
            for(row=0; row<m; row++)
            {
                arr[0].row = (row+m-1)%m ;  arr[0].val = M[(row+m-1)%m][col+1].val;
                arr[1].row = row;           arr[1].val = M[row][col+1].val;
                arr[2].row = (row+1)%m;     arr[2].val = M[(row+1)%m][col+1].val;
                sort(arr, arr+3, cmp);

				// debug
				/*for(k=0;k<3;k++)
				{
					cout<<arr[k].row<<":"<<arr[k].val<<" ";
				}
				cout<<endl;*/

                M[row][col].val = A[row][col] + arr[0].val;
				M[row][col].row = arr[0].row;
                if(M[row][col].val < min.val) 
				{
					min.val = M[row][col].val;
					min.row = row;
				}
            }
        }

	/*	for(row=0;row<m;row++)
		{
			for(col=0;col<n;col++)
			{
				cout<<M[row][col].row<<":"<<M[row][col].val<<" ";
			}
			cout<<endl;
		}* /
		for(row=0;row<3;row++)
			cout<<ans[row]<<" ";
		cout<<endl;*/

		// min er moddhe ache
		row = min.row;
		printf("%d", (row+1));
        for(col=0; col<n-1; col++)
		{
			row = M[row][col].row;
            printf(" %d", (row+1));
		}
        printf("\n%d\n", min.val);

    }

	return 0;
}
