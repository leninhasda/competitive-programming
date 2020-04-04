#include<iostream>
using namespace std;

/*
char h[][8] = {{"pop"}, {"no"}, {"zip"}, {"zotz"}, {"tzec"}, {"xul"}, {"yoxkin"}, {"mol"}, {"chen"},
				{"yax"}, {"zac"}, {"ceh"}, {"mac"}, {"kankin"}, {"muan"}, {"pax"}, {"koyab"}, {"cumhu"}};

char t[][10] = {{"imix"}, {"ik"}, {"akbal"}, {"kan"}, {"chicchan"}, {"cimi"}, {"manik"}, {"lamat"}, {"muluk"}, {"ok"}, 
				{"chuen"}, {"eb"}, {"ben"}, {"ix"}, {"mem"}, {"cib"}, {"caban"}, {"eznab"}, {"canac"}, {"ahau"}};
*/

int main()
{
	int cnt,t=1,m=0,y=0;

	for(cnt=0;cnt<728185;cnt++)
	{
		t++;
		if(t>13)
			t=1;
/*		if(cnt%20==0)
			m++;
		if(m==13)
		{
			y++;
			m=0;
		}*/
	}
	
	cout<<t<<endl;
/*	cout<<m<<endl;
	cout<<y<<endl;*/

	return 0;
}