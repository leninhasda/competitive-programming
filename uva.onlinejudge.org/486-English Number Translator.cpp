#include<iostream>
using namespace std;

int main()
{
	char words[][30]={{"zero"},{"one"},{"two"},{"three"},{"four"},{"five"},
						{"six"},{"seven"},{"eight"},{"nine"},{"ten"},{"eleven"},
						{"twelve"},{"thirteen"},{"fourteen"},{"fifteen"},{"sixteen"},{"seventeen"},
						{"eighteen"},{"nineteen"},{"twenty"},{"thirty"},{"forty"},{"fifty"},
						{"sixty"},{"seventy"},{"eighty"},{"ninety"}};
	int value[]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,30,40,50,60,70,80,90};
	char word[150][100];
	char line[500];

	while(cin.getline(line,500))
	{
		int len=strlen(line),i,j,row=0,col=0;
		int tmpV[100]={0},tmpVl;
		int m=0,flag=0,ans=0;

		for(i=0;i<len;i++)
		{
			if(line[i]==' ')
			{
				word[row][col]='\0';
				row++;
				col=0;
			}
			else
			{
				word[row][col++]=line[i];
			}
		}
		word[row][col]='\0';
		for(i=0;i<=row;i++)
		{
			if(strcmp(word[i],"negative")==0)
				cout<<"-";
			else
			{
				if(strcmp(word[i],"million")==0 || strcmp(word[i],"thousand")==0 || strcmp(word[i],"hundred")==0)
				{
					if(strcmp(word[i],"million")==0)
					{
						tmpVl=1000000;
						flag=1;
					}
					else if(strcmp(word[i],"thousand")==0)
					{
						tmpVl=1000;
						flag=1;
					}
					else if(strcmp(word[i],"hundred")==0)
						tmpVl=100;
					
					tmpV[m]*=tmpVl;
					
					if(flag==1)
					{
						m++;
						flag=0;
					}
				}
				else
				{
					for(j=0;j<28;j++)
					{
						if(strcmp(word[i],words[j])==0)
						{
							tmpV[m]+=value[j];
						}
					}
				}
			}
		}
		for(i=0;i<=m;i++)
		{
			ans += tmpV[i];
		}
		cout<<ans<<endl;

	}

	return 0;
}
