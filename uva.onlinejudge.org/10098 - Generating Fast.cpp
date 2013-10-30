// 10098 - Generating Fast

// 941 - Permutations

#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() 
{
	int n;
	string str, tmp;
	while(scanf("%d", &n) == 1)
	{
		while(n--)
		{
			cin>>str; 
			//int len = strlen(ln);
			//sort(ln, ln+len);
			sort(str.begin(), str.end());
			tmp = str;
			while(true){
				cout<<str<<endl;
				next_permutation(str.begin(), str.end());
				if(str == tmp)break;
			}
			printf("\n");
		}
	}
	return 0;
}