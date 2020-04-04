#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;

void clrscr()
{
    system("CLS");
}

int main()
{
    clrscr();
    char name[20], pass[20], ch;
    int i = 0;

    cout<<"User Name : ";
    cin>>name;
    cout<<"Password  : ";
    ch = getch();
    while (ch != '\r')
    {
        if(ch == '\b')
        {
            cout<<'\b'<<' '<<'\b';
            i--;
        }
        else
        {
            cout << '*';
            pass[i++] = ch;
        }
        ch = getch();
    }
    pass[i] = '\0';

    cout<<"\nUser name & password\n";
    cout<<"User Name : "<<name<<"\n";
    cout<<"Password  : "<<pass<<"\n";
    getch();

    return 0;
}
