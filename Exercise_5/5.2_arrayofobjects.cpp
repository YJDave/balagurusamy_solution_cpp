/*Create a class bank with functions:
1.to initialize
2.to deposit
3.to withdraw
by using data types name, acc_type,acc_no,balance for 10 students:
*/
#ifdef _WIN32
#include<iostream.h>
#include<conio.h>
#endif

#ifdef linux
#include<iostream>
#include<curses.h>
#endif

#include<stdlib.h>
using namespace std;
class bank_acc
{
	char name[30];
	char acc_type[30];
	int acc_no;
	float bal;
	public:
	void init()
	{
		cout<<"Name ";
		cin>>name;
		cout<<"Account type ";
		cin>>acc_type;
		cout<<"Account number ";
		cin>>acc_no;
		cout<<"Balance ";
		cin>>bal;
	}
	void deposit()
	{
		float amount;
		cout<<"Enter amount";
		cin>>amount;
		bal=bal+amount;
		cout<<"Current account balance="<<bal<<endl;
	}
	void withdraw()
	{
		float with_amount;
		cout<<"Enter amount to be withdrawn";
		cin>>with_amount;
		if(bal<with_amount)
		cout<<"Insufficient balance!"<<endl;
		else
		{
			bal=bal-with_amount;
			cout<<"You withdrew rupees "<<with_amount<<" and current balance="<<bal<<endl;
		}
	}
	void display()
	{
		cout<<"Name="<<name<<endl;
		cout<<"Balance="<<bal;
		cout<<endl;
	}
};
int main()
{
	bank_acc b[10];
	int n,i;
	char c;
	//clrscr();
	cout<<"\nEnter number of students.";
	cin>>n;
	cout<<"\nEnter their details";
	for(i=0;i<n;i++)
	{
		b[i].init();
		cout<<"To withdraw enter <w>, to deposit <d>";
		cin>>c;
		if(c=='w')
		b[i].withdraw();
		else if(c=='d')
		b[i].deposit();
		else
		continue;
	}
	cout<<"Displaying entire information:"<<endl;
	for(i=0;i<n;i++)
	b[i].display();
	//getch();
}
