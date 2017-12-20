#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<ctype.h>

int main()
{
	clrscr();
	char ch;
	int f=0;
	ifstream inf;
	ofstream outf;
	inf.open("file.txt");
	outf.open("file2.txt");
	if(!inf)
	{
		cout<<"error in opening file !!!"<<endl;
		getch();
		return -1
	}
	while(inf)
	{
		inf.get(ch);
		if(isspace(ch))
		{
			f++;
		}
		else
		{
			f=0;
		}
		if(f>=2)
		{
			continue;
		}
		outf.put(ch);
	}
	inf.close();
	outf.close();
	getch();
	return 0;
}