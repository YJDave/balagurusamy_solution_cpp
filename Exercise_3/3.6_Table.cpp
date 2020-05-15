#include<iostream.h>
#include<conio.h>

//Added
#include<iomanip>

int main()
{
	int i,players
	
	//Modified
	int *runs, *inn, *notout
	float *average;
	
	char name[20][5];
	clrscr();
	cout<<"Enter number of players(can be more then 5): ";
	cin>>players;
	
	//Modified 
	run = new int[players];
	inn = new int[players];
	notout = new int[players];
	average = new int[players];
	
	for(i=1;i<=players;i++)
	{
		cout<<"Input details of player no. "<< i << endl;
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
	
	//Modified
	cout << endl;
	cout<<"Name" << setw(14) << "Runs" << setw(12) << "Innings" << setw(18)  << "Times not out" << setw(12) << "Average"<<endl;
	
	for(i=1;i<=players;i++)
	{
		//Modified
		cout<<name[i]<<setw(14)<<runs[i]<<setw(12)<<inn[i]<<setw(12)<<notout[i]<<setw(15)<<average[i]<<endl;
	}
	getch();
	return 0;
}
