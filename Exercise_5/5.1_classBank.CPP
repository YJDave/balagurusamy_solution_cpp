/*Create a class bank with functions:
1.to initialize
2.to deposit
3.to withdraw
by using data types name, acc_type,acc_no,balance
*/
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
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
void main()
{
	bank_acc b1;
	char c;
	clrscr();
	b1.init();
	b1.display();
	while(1)
	{
	cout<<"Do you want to withdraw or deposit?"<<endl;
	cout<<"To deposit enter <d> and to withdraw enter <w>"<<endl;
	cin>>c;
	if(c=='d')
	b1.deposit();
	else if(c=='w')
	b1.withdraw();
	else
	exit(1);
	}

}

