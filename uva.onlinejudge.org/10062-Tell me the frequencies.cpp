#include<iostream>
#include<algorithm>
using namespace std;

struct AB
{
	int val,key;
}ltr[255];

bool operator<(struct AB a,struct AB b)
{
	if(a.val==b.val && a.key>b.key)
		return true;
	else if(a.val<b.val)
		return true;
	else
		return false;
}

int main()
{
	char lines[1005];
	int i,check=0;

	while(gets(lines))
	{
		int ary[255]={0};
		if(check)
			cout<<"\n";
		for(i=0;i<strlen(lines);i++)
		{
			ary[lines[i]]++;
		}
		int idx=0;
		for(i=0;i<255;i++)
		{
			if(ary[i]!= 0)
			{
				ltr[idx].key = i;
				ltr[idx].val = ary[i];
				idx++;
			}
		}
		sort(ltr,ltr+idx);
		for(i=0;i<idx;i++)
		{
			cout<<ltr[i].key<<" "<<ltr[i].val<<"\n";
		}	
		check=1;
	}

	return 0;
}