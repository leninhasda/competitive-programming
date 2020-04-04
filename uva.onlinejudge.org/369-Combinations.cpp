#include<iostream>
using namespace std;

class BigInto
{
private:
	char *n, *m, *tmpAns, *tmpOthr[100];
	int cnt, idx, i, j;
public:
	BigInto(char *tmpN, char *tmpM)
	{
		n = new char[strlen(tmpN)+1];
		m = new char[strlen(tmpM)+1];

		strcpy(tmpN,n);
		strcpy(tmpM,m);

		cnt = 0;
	}
	void multiply()
	{
		
	}

};

int main()
{

	while(1)
	{
	}

	return 0;
}