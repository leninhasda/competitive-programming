// Intro: Eddy's mistakes
// http://acm.hdu.edu.cn/showproblem.php?pid=1161

#include<iostream>
#include<string>
using namespace std;

int main(){
	char line[1005];

	while(gets(line)) {
		int len = strlen(line);
		int i;
		for(i=0;i<len;i++)
		{
			if(line[i] < 91 && line[i] > 64)
				line[i] = line[i]+32;
			printf("%c",line[i]);
		}
		printf("\n");
	}

	return 0;
}