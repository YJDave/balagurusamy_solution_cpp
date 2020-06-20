#ifdef _WIN32
#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#endif

#ifdef linux
#include<iostream>
#include<curses.h>
#include<iomanip>
#endif

#include<string.h>

using namespace std;
class item
{
	char name[40];
	int code;
	float cost;
	public:
		void get_data(char *n,int c,float co)
		{
			strcpy(name,n);
			code=c;
			cost=co;
		}
		void display();
};

void item:: display()
{
	cout.precision(2);
	cout.fill('-');
	cout.setf(ios::fixed,ios::floatfield);
	cout.setf(ios::showpoint);
	cout.setf(ios::left,ios::adjustfield);
	cout<<setw(40)<<name<<code;
	cout.setf(ios::right,ios::adjustfield);
	cout<<setw(15)<<cost<<endl;
}

int main() //changed
{
	item a[4];
	//clrscr(); //changed
	a[0].get_data("Tarbo C++",1001,250.95);
	a[1].get_data("C primer",9035,95.7);
	a[2].get_data("Intro Of GitHub",2654,9.459);
	a[3].get_data("solution of balagurusamy",8879,145.00);
	cout<<setw(10)<<"name"<<setw(34)<<"code"<<setw(15)<<"cost"<<endl;
	for(int i=0;i<60;i++)
		cout<<"-";
	cout<<endl;
	for(int i=0;i<4;i++) //changed
		a[i].display();
	//getch();
}
