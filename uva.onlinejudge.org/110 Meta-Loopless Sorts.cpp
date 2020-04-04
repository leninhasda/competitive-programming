// http://uva.onlinejudge.org/external/1/110.html
// 110 Meta-Loopless Sorts

#include<iostream>
#include<stdio.h>
using namespace std;

program sort(input,output);
var
a,b,c : integer;
begin
  readln(a,b,c);
  if a < b then
    if b < c then
      writeln(a,b,c)
    else if a < c then
      writeln(a,c,b)
    else
      writeln(c,a,b)
  else
    if a < c then
      writeln(b,a,c)
    else if b < c then
      writeln(b,c,a)
    else
      writeln(c,b,a)
end.

void v1()
{
	cout<<"program sort(input,output);"<<endl;
	cout<<"var"<<endl;
	cout<<"a : integer;"<<endl;
	cout<<"begin"<<endl;
	cout<<"  readln(a);"<<endl;
	cout<<"  writeln(a)"<<endl;
	cout<<"end."<<endl;
}

int main()
{
	return 0;
}