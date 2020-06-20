#ifdef _WIN32
#include<iostream.h>
#include <conio.h>
#endif

#ifdef linux
#include<iostream>
#include <curses.h>
#endif
 //conio.h //changed
using namespace std;
int main()
{
	int i,players,runs[5],inn[5],notout[5],average[5];
	char name[5][20];
	//clrscr(); //changed
	cout<<"Enter number of players(no more than 5): ";
	cin>>players;
	for(i=1;i<=players;i++)
	{
		cout<<"Input details of player no. "<<i<<endl;
		cout<<"Name: ";
		cin>>name[i];
		cout<<"No. of runs made: ";
		cin>>runs[i];
		cout<<"No. of innings played: ";
		cin>>inn[i];
		cout<<"Times not out: ";
		cin>>notout[i];
	}
	for(i=1;i<=players;i++)
	{
		average[i]=runs[i]/inn[i];
	}
	cout<<"\nName\tRuns\tInnings\tTimes not out\tAverage"<<endl;
	for(i=1;i<=players;i++)
	{
		cout<<name[i]<<"\t"<<runs[i]<<"\t"<<inn[i]<<"\t"<<notout[i]<<"\t\t"<<average[i]<<endl;
	}
	//getch();
	return 0;
}