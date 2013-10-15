// 394 Mapmaker

#pragma warning(disable:4786)
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<iostream>
#include<algorithm>
#include<map>
#include<list>
#include<set>
#include<queue>
#include<stack>
#include<vector>
#include<string>
using namespace std;

typedef int mytype;

typedef struct
{
	mytype lower, upper, num;
}Limit;

typedef struct
{
	char name[15];
	mytype bas,dmn, byt;
	vector<Limit> limit;
}type;

int main()
{
	mytype n, r, i, j, k, idx;
	type tmp;
	Limit lm;
	vector<type> all;
	char tmnam[15];
	mytype *in, out,tin;
	while(scanf("%d %d",&n,&r)==2)
	{
		all.clear();
		for(i=0;i<n;i++)
		{
			scanf("%s %d %d %d",&tmp.name,&tmp.bas,&tmp.byt,&tmp.dmn);
			for(j=0;j<tmp.dmn;j++)
			{
				scanf("%d %d",&lm.lower,&lm.upper);
				lm.num = lm.upper - lm.lower + 1;
				tmp.limit.push_back(lm);
			}
			all.push_back(tmp);
			tmp.limit.clear();
		}
/*		for(i=0;i<n;i++)
		{
			cout<<"name = "<<all[i].name<<endl;
			cout<<"base = "<<all[i].bas<<endl;
			cout<<"byte = "<<all[i].byt<<endl;
			cout<<"dimension = "<<all[i].dmn<<endl;
			for(j=0;j<all[i].dmn;j++)
			{	
				cout<<"dimension #"<<j+1<<endl;
				cout<<"    lower = "<<all[i].limit[j].lower<<endl;
				cout<<"    upper = "<<all[i].limit[j].upper<<endl;
				cout<<"    num = "<<all[i].limit[j].num<<endl;
			}
			cout<<endl<<endl;
		}*/
		int flag = 0;
		for(i=0;i<r;i++)
		{
/*			if(flag)
				printf("\n");*/
			flag = 1;
			scanf("%s",&tmnam);
			for(j=0;j<n;j++)
			{
				if(strcmp(all[j].name,tmnam) == 0)
					break;
			}
			if(j==n) continue;
			idx = j;
			out = 0;
			tin = 0;
			in = new mytype[all[idx].dmn+1];

			for(j=0;j<all[idx].dmn;j++)
			{
				scanf("%d",&in[j]);
				tin = in[j] - all[idx].limit[j].lower;

			//	cout<<"ftin = "<<tin<<"  all[idx].limit[j].lower"<< all[idx].limit[j].lower<<endl;//

				for(k=j+1;k<all[idx].dmn;k++)
					tin = tin * all[idx].limit[k].num;
			//	cout<<"tin = "<<tin<<" ";//
				out += tin;
			//	cout<<"out = "<<tin<<" ";//
			}
		//	cout<<"out = "<<out;//
			out *= all[idx].byt;
		//	cout<<" byte = "<<all[idx].byt<<" | out = "<<out<<endl;//
			out += all[idx].bas;

			printf("%s[",tmnam);

			for(j=0;j<all[idx].dmn;j++)
			{
				if(j!=0)
					printf(", ");
				printf("%d",in[j]);
			}
			printf("] = %d\n",out);
			delete[] in;
		}//*/

	}	
	return 0;
}