#include<iostream>
#include<algorithm>
using namespace std;

struct A
{
	char a[12];
}ar[1005];

bool cmp(struct A a, struct A b)
{
	if(strcmp(a.a,b.a) < 0)
		return true;
	return false;
}

int main()
{
	int t, n, i;

	while(scanf("%d",&t)==1)
	{
		while(t--)
		{
			scanf("%d",&n);

			for(i = 0; i < n; i++)
				scanf("%s",&ar[i].a);

			sort(ar,ar+n,cmp);

		/*	for(i=0;i<n;i++)
				cout<<ar[i].a<<endl;*/

			int flag = 0,k,len1,len2;
			for(i=1;i<n;i++)
			{
				len1 = strlen(ar[i].a);
				len2 = strlen(ar[i-1].a);
				
				if(len1 <= len2)
				{
					for(k=0;k<len1;k++)
					{
						if(ar[i].a[k] != ar[i-1].a[k])
							break;
					}
					if(k == len1)
					{						
						flag = 1;
						break;
					}
				}
				else
				{
					for(k=0;k<len2;k++)
					{
						if(ar[i].a[k] != ar[i-1].a[k])
							break;
					}
					if(k == len2)
					{						
						flag = 1;
						break;
					}
				}
			}

			if(flag == 1)
				printf("NO\n");
			else
				printf("YES\n");
		}
	}
	return 0;
}

/*****************************************/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	int t,n,i,j;	

	while(cin>>t)
	{
		while(t--)
		{
			string str[10005];

			cin>>n;
			for(i=0;i<n;i++)
			{
				cin>>str[i];				
			}
			sort(str,str+n);
			bool con=true;
			for(i=1;i<n;i++)
			{
				bool same=false;
				if(str[i-1].length() > str[i].length())continue;
				for(j=0;j<str[i-1].length();j++)
				{
					if(str[i-1][j] == str[i][j])
						same=true;
					else
					{
						same =false; break;
					}
				}
				if(same)
					con=false;
			}
			if(con)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
	}

	return 0;
}