#include<cstdio>
#include<iostream>

using namespace std;

#define sz  101

int main(){

	freopen("A-large-practice.in", "r",stdin);
	freopen("A-large-practice.out", "w",stdout);


	char ar[sz][sz];
	double p[sz][5];
	int t,tc;
	int n;
	int i;
	int j;

	cin>>t;

	for(tc=1; tc<=t;tc++)
	{
		cin>>n;
		
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				cin>>ar[i][j];
			}
		}

		// initial
		for(i=0;i<n;i++)
		{
			for(j=0;j<4;j++)
			{
				p[i][j] = 0;
			}
		}

		// wp
		double tmp;
		int w; // win
		int t; // total game;
		for(i=0;i<n;i++)
		{
			w = t = 0;
			for(j=0;j<n;j++)
			{
				if(ar[i][j] == '1')
					w++;
				if(ar[i][j] != '.')
					t++;
			}
			
			tmp = double(w)/double(t);

		//	cout<<w<<" "<<t<<" "<<tmp<<endl;
			p[i][0] = tmp;
		}

	/*	for(i=0;i<n;i++)
			cout<<p[i][0]<<" ";*/

		// owp

		int k;
		int o;
		double ttmp, tt;

		for(i=0;i<n;i++)
		{
			tt = o= 0;
			for(j=0;j<n;j++)
			{
				if(ar[i][j] != '.')
				{
					//if(k!=i && ar[i][j] != '.')
						o++;
						w = t = 0;
					for(k=0;k<n;k++)
					{
						if(k!=i && ar[j][k] == '1')
							w++;
						if(k!=i && ar[j][k] != '.')
							t++;
					}
					ttmp = double(w)/double(t);
					tt += ttmp;
				}
			}
			tmp = tt/double(o);
			p[i][1] = tmp;
		}

		// oowp
		for(i=0;i<n;i++)
		{
			o = 0;
			tmp = 0;
			for(j=0;j<n;j++)
			{
				if(ar[i][j] != '.')
				{
					o++;
				/*else
				{*/
					tmp += p[j][1];
				}
			}
			p[i][2] = tmp / double(o);
		}

		for(i=0;i<n;i++)
		{
			p[i][3] = 0.25 * p[i][0] + 0.50 * p[i][1] + 0.25 * p[i][2];
		}

		cout<<"Case #"<<tc<<":"<<endl;
		for(i=0;i<n;i++)
			printf("%.12lf\n",p[i][3]);

	}

	return 0;
}