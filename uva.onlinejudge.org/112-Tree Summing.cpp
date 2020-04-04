#include<iostream>
#include<stack>
#include<cctype>
using namespace std;

int main()
{
	int in,flag = 0;
	stack<char> s;
	char ch;
	while(cin>>in)
	{
		flag=1;
		while(1)
		{
			cin>>ch;
			if(ch=='(')
				s.push(ch);
			else
				s.pop();
			if(s.empty())
				break;
		}
		cout<<"done"<<endl;
	}
	return 0;
}