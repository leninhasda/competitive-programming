#include<iostream>
using namespace std;

/*  
	***BIGINT***

	author: Lenin

	description: --> construction still going on...
				 --> it can only add two big int
				 --> big int having max length must be inputed at first
				 --> size of big int is defined by the value of 'const int size'

	function: --> void add(first big int[having max length], second big int, array to hold ans of addition )
	          --> all the parameters are array of 'char'
*/

/*** big int class start ***/
const int size=100000;

char x[size],y[size];
char z[size];

class bigint
{
public:
	int lenA,lenB,lenC;
	int i,j,m;
	int mod,ans; 
	

public:
	void add(char a[], char b[], char c[])
	{
		lenA=strlen(a);
		lenB=strlen(b);

		m=0;
		mod=0;
		j=(lenB-1);

		for(i=(lenA-1);i>=0;i--)
		{
			if(j<0)
			{
				ans=ctoi(a[i])+mod;
				if(ans>9)
				{
					ans=ans%10;
					mod=ans/10;
				}
				else
					mod=0;
				c[m]=itoc(ans);
				ans=0;
				m++;
				j--;
				continue;
			}
			ans=ctoi(a[i])+ctoi(b[j])+mod;
			
			if(ans>=10)
			{
				mod=ans/10;
				ans=ans%10;				
			}
			else
				mod=0;

			c[m]=itoc(ans);
			ans=0;
			m++;
			j--;
			
		}
	}
	void display(char d[])
	{
		lenC=strlen(d);
		for(i=(lenC-1);i>=0;i--)
		{
			cout<<d[i];
		}
		cout<<endl;
	}
private:
	int ctoi(char ch)
	{
		return (int(ch)-48);
	}
	char itoc(int in)
	{
		return (in+'0');
	}
};
/*** big int class end ***/

int main()
{
	bigint I;
	cin>>x>>y;
	I.add(x,y,z);
	I.display(z);
	return 0;
}