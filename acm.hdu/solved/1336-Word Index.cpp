#pragma warning(disable:4786)
#include<iostream>
#include<map>
#include<string>
using namespace std;

map<string,int> m;

void meke()
{
	int cnt=1,l=97,l2=98,l3=99,l4=100,l5=101;
	char ltr[6],ch,ch2,ch3,ch4,ch5;
	string str;
	
	for(ch='a';ch<='z';ch++)
	{
		ltr[0]=ch;
		ltr[1]='\0';
		str.assign(ltr);
		m[str]=cnt++;
	}
	for(ch='a';ch<='z';ch++)
	{
		for(ch2=(ch+1);ch2<='z';ch2++)
		{
			ltr[0]=ch;
			ltr[1]=ch2;
			ltr[2]='\0';
			str.assign(ltr);
			m[str]=cnt++;
		}
	}
	for(ch='a';ch<='x';ch++)
	{
		for(ch2=(ch+1);ch2<='y';ch2++)
		{
			for(ch3=(ch2+1);ch3<='z';ch3++)
			{
				ltr[0]=ch;
				ltr[1]=ch2;
				ltr[2]=ch3;
				ltr[3]='\0';
				str.assign(ltr);
				m[str]=cnt++;
			}			
		}
	}
	for(ch='a';ch<='z';ch++)
	{
		for(ch2=(ch+1);ch2<='z';ch2++)
		{
			for(ch3=(ch2+1);ch3<='z';ch3++)
			{
				for(ch4=(ch3+1);ch4<='z';ch4++)
				{
					ltr[0]=ch;
					ltr[1]=ch2;
					ltr[2]=ch3;
					ltr[3]=ch4;
					ltr[4]='\0';
					str.assign(ltr);
					m[str]=cnt++;
				}
			}
		}
	}
	for(ch='a';ch<='z';ch++)
	{
		for(ch2=(ch+1);ch2<='z';ch2++)
		{
			for(ch3=(ch2+1);ch3<='z';ch3++)
			{
				for(ch4=(ch3+1);ch4<='z';ch4++)
				{
					for(ch5=(ch4+1);ch5<='z';ch5++)
					{
						ltr[0]=ch;
						ltr[1]=ch2;
						ltr[2]=ch3;
						ltr[3]=ch4;
						ltr[4]=ch5;
						ltr[5]='\0';
						str.assign(ltr);
						m[str]=cnt++;
					}
				}
			}
		}
	}	
}

int main()
{
	meke();
	string st;
	while(cin>>st)
	{
		cout<<m[st]<<endl;
	}
	return 0;
}