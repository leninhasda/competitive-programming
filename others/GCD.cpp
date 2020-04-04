#include<iostream>
using namespace std;

int gcd(int a,int b) 
{
	if (a%b==0) 
		return b; 
	else 
		return gcd(b,a%b);
}

int main()
{
	cout<<(12*16)/gcd(12,16)<<endl;
	return 0;
}