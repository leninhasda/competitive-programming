#include<iostream>
#include<cctype>
#include<algorithm>
using namespace std;

struct AB
{
	char chr;
	int cnt;
}ltr[27];

bool operator<(struct AB a, struct AB b)
{
	if(a.cnt==b.cnt && a.chr<b.chr)
		return true;
	else if(a.cnt>b.cnt)
		return true;
	else
		return false;
}

int main()
{
	int ary[91],n,i,j;
	char ch[2],lines[1000][1000];
	while(cin>>n)
	{
		gets(ch);
		for(i=0;i<91;i++)
			ary[i]=0;
		for(i=0;i<n;i++)
		{
			gets(lines[i]);
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<strlen(lines[i]);j++)
			{
				if(islower(lines[i][j]))
				{
					ary[lines[i][j]-32]++;
				}
				else
				{
					ary[lines[i][j]]++;
				}
			}
		}
		int idx=0;
		for(i=0;i<91;i++)
		{
			if(ary[i]!= 0 && isalpha(char(i)))
			{
				ltr[idx].chr = char(i);
				ltr[idx].cnt = ary[i];
				idx++;
			}
		}
		sort(ltr,ltr+idx);
		for(i=0;i<idx;i++)
			cout<<ltr[i].chr<<" "<<ltr[i].cnt<<endl;
	}
	return 0;
}