#include<iostream.h>
#include<conio.h>
double fact(int n)
{
	if(n==1)
		return 1.0;
	else
		return n*fact(n-1);
}
void main()
{
	double e=1.0;
	int n,i;
	clrscr();
	cout<<"Enter Limit of Series..."<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		e=e+(1.0/fact(i));
	}
	cout.precision(4);//For Accuracy acc=0.0001
	cout<<"e = "<<e;
	getch();
}