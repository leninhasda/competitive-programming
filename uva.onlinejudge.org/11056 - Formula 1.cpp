#include<iostream>
#include<cctype>
#include<algorithm>
using namespace std;

struct A
{
	char name[25];
	int min, sec, ms;
	int t;
}arr[105];

bool check(char a[], char b[])
{
	int i;
	for(i=0;i<strlen(a);i++)
		a[i] = tolower(a[i]);
	for(i=0;i<strlen(b);i++)
		b[i] = tolower(b[i]);
	if(strcmp(a,b) < 0)
		return true;

	return false;
}

bool cmp(struct A a, struct A b)
{
	if(a.t < b.t)
		return true;
	else if(a.t == b.t && check(a.name, b.name))
		return true;

	return false;
}

int main()
{
	int n,i;//, flag=0;

	while(scanf("%d",&n)==1)
	{
	//	if(flag)
	//		printf("\n");
		for(i=0;i<n;i++)
		{
			scanf("%s : %d min %d sec %d ms",&arr[i].name,&arr[i].min,&arr[i].sec,&arr[i].ms);
			arr[i].t = (arr[i].min*60*1000) + (arr[i].sec*1000) + arr[i].ms;
		}

		sort(arr,arr+n,cmp);

		int row=1;
		for(i=0;i<n;i++)
		{
			if(i%2 == 0)
				printf("Row %d\n",row++);
			printf("%s\n",arr[i].name);
		}
	//	flag = 1;
		printf("\n");
	}
	return 0;
}