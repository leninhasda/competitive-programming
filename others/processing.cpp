#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x, int y)//Move cursor to (x,y) point
{
        HANDLE hConsole( GetStdHandle(STD_OUTPUT_HANDLE) );
        COORD pos;
        pos.X = x;
        pos.Y = y;
        SetConsoleCursorPosition( hConsole, pos );
}

void textcolor(int cl)//Cange text color
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),cl);
}

void delay()
{
	//sec *= 1000000000;
	for(__int64 i=0;i<5000000;i++){}
}

void animation1()
{
	gotoxy(10,5);
	cout<<"Procesing"<<endl;
	int cl=1;
	while(1)
	{
		textcolor(cl);
	delay();
	gotoxy(20,5);cout<<"*";//1
	delay();
	gotoxy(21,4);cout<<"*";//2
	delay();
	gotoxy(23,3);cout<<"*";//3
	delay();
	gotoxy(24,3);cout<<"*";//4
	delay();
	gotoxy(26,4);cout<<"*";//5
	delay();
	gotoxy(27,5);cout<<"*";//6	
	delay();
	gotoxy(26,6);cout<<"*";//7
	delay();
	gotoxy(24,7);cout<<"*";//8
	delay();
	gotoxy(23,7);cout<<"*";//9
	delay();
	gotoxy(21,6);cout<<"*";//0
	if(cl<15)
		cl++;
	else
		cl = 1;
	}
}

void animation2()
{
	int i,m;
	gotoxy(23,3); cout<<"Procesing";
    
	for(i=0,m=22;i<17;i++)
	{
		gotoxy(m++,4);
		cout<<"*";
	}
	gotoxy(22,5); cout<<"*"; gotoxy(38,5); cout<<"*";
	for(i=0,m=22;i<17;i++)
	{
		gotoxy(m++,6);
		cout<<"*";
	}
	int time=3;int cl=1;
	while(1)
	{
	for(i=0,m=23;i<15;i++)
	{
		gotoxy(m++,5);
		textcolor(cl);
		cout<<char(219);
		if(i>=3)
		{
			gotoxy((m-4),5); cout<<" ";
		}
		delay();
	}
	for(i=15,m=37;i>0;i--)
	{
		gotoxy(m--,5);
		textcolor(cl);
		cout<<char(219);
		if(i<13)
		{
			gotoxy((m+4),5); cout<<" ";
		}
		delay();
	}
	time--;
	if(cl<15)
		cl++;
	else
		cl=1;
	}
}

void animation3()
{
	int i,m;
	gotoxy(23,3); cout<<"Closing";
    
	for(i=0,m=22;i<17;i++)
	{
		gotoxy(m++,4);
		cout<<"*";
	}
	gotoxy(22,5); cout<<"*"; gotoxy(38,5); cout<<"*";
	for(i=0,m=22;i<17;i++)
	{
		gotoxy(m++,6);
		cout<<"*";
	}
	int time=3;int cl=1;
	while(1)
	{
	for(i=0,m=23;i<15;i++)
	{
		gotoxy(m++,5);
		textcolor(cl);
		cout<<char(219);
		if(i>=3)
		{
			gotoxy((m-4),5); cout<<" ";
		}
		delay();
	}
	for(i=15,m=37;i>0;i--)
	{
		gotoxy(m--,5);
		textcolor(cl);
		cout<<char(219);
		if(i<13)
		{
			gotoxy((m+4),5); cout<<" ";
		}
		delay();
	}
	time--;
	if(cl<15)
		cl++;
	else
		cl=1;
	}
}

void main()
{         
	animation3();
	cout<<endl<<endl;;

}