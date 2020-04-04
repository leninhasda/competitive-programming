#include<iostream>
using namespace std;

struct
{
	char	code[15];
	char	local[50];
	char	lname[30];
	double	cost;
}list[100];

struct
{
	int num;
	int min;
}call[100];

void separate(int in)
{
	int i,j=0;
	char tmp;
	for(i=0;i<strlen(list[in].local);i++)
	{
		if(list[in].local[i]=='$')
		{
			list[in].lname[j++] = '\0';
			break;
		}
		list[in].lname[j++]=list[in].local[i];
	}
	j=0;
	for(i;i<strlen(list[i].local);i++)
	{
		if(list[in].local[i]!='$')
			tmp[j++] = list[in].local[i];
	}
	tmp[j++] = '\0';
	sscanf(tmp,"%lf",list[in].cost);
	list[in].cost = list[in].cost/100;
}

int main()
{
	int inList=0, inCall=0;
	char tmp[50],tmpNum[60];
	
	while(cin>>list[inList].code)
	{
		if(strcmp(list[inList].code,"000000")==0)
			break;
		cin>>list[inList].local;
		separate(inList);
		inList++;
	}

	while(cin>>tmp)
	{
		if(strcmp(tmp,"#")==0)
			break;
		sscanf(tmp,"%d",call[inCall].num);
		cin>>call[inCall].min;
		inCall++;
	}

	

	return 0;
}