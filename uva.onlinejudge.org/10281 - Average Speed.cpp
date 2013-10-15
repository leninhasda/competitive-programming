#include<iostream>
using namespace std;

int main()
{
	char all[50];
	double sh, eh, sm, em, ss, es, T, sp, sps, dist;

	sh = sm = ss = eh = em = es = T = sp = sps = dist = 0;

	while(gets(all))
	{
		if(all[8] == ' ')
		{
			sscanf(all,"%lf:%lf:%lf %lf",&eh,&em,&es,&sp);
			
			T = ((eh*60*60) + (em*60) + (es)) - ((sh*60*60) + (sm*60) + (ss));
			dist += T*sps;
			sps = sp / (60*60); //speed per sec.
			sh = eh; sm = em; ss = es;
		}
		else
		{
			sscanf(all,"%lf:%lf:%lf",&eh,&em,&es);
			sps = sp / (60*60); //speed per sec.
			T = ((eh*60*60) + (em*60) + (es)) - ((sh*60*60) + (sm*60) + (ss));
			dist += T*sps;
			sh = eh; sm = em; ss = es;

			printf("%s %.2lf km\n",all,dist);
		}
	}

	return 0;
}