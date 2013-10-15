#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

typedef long long Int;


int main()
{
	vector<Int> v;
	Int n,ans;
	int siz, mid;
	v.clear();
	while(scanf("%lld",&n)!=EOF)
	{
		v.push_back(n);
		sort(v.begin(),v.end());

		siz = v.size();

		if(siz%2==0)
		{
			mid = siz/2;
			ans = (v[mid-1]+v[mid])/2 ;
		}
		else
		{
			mid = siz/2;
			ans = v[mid];
		}

		printf("%lld\n",ans);
	}

	return 0;
}