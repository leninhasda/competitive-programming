#include<iostream>
#include<string>
using namespace std;

char line[1005];
int visited[1005][1005];
int ANS[1005][1005];

int longpalin(int s,int e)
{
	int ans,x,y;
	if(visited[s][e]==1)
		return ANS[s][e];
	if(s==e) return 1;
	if(s>e) return 0;

	if(line[s]==line[e])
		ans = 2 + longpalin((s+1),(e-1));
	else
	{
		x = longpalin(s,e-1);
		y = longpalin(s+1,e);
		if(x>y) ans = x;
		else ans = y;
	}
	
	visited[s][e]=1;
	ANS[s][e] = ans;

	return ans;
}

int main()
{
	int t,ans,i,j,len;
	char ch[3];
	while(cin>>t)
	{
		gets(ch);
		while(t--)
		{
			gets(line);

			for(i=0;i<1005;i++)
			{
				for(j=0;j<1005;j++)
				{
					visited[i][j]=0;
					ANS[i][j]=0;
				}
			}

			len=strlen(line);
			ans = longpalin(0,len-1);
			cout<<ans<<endl;
		}
	}
	return 0;
}