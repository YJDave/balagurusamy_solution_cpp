#include<iostream.h>
#include<iomanip.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
void main()
{
	char line[1000];
	char ch;
	int c;
	int word,lines,chr;
	word=0;
	lines=0;
	chr=0;
	int end=0;
	clrscr();
	cout<<" Enter text : \n";
	while(end==0)
	{
		c=0;
		int i=0;
		while((ch=getchar())!='\n')
		{
			line[i]=ch;
			i++;
		}
		line[i]='\0';
	       //ch=getchar();
	      // cout<<ch<<endl;
	      // line[0]=ch;

		if(line[0]=='\0')
			break;
		else
		{
			word++;
			for(int i=0;line[i]!='\0';i++)
				if(line[i]==' ' || line[i]=='\t' || line[i]=='\n')
					word++;
		}
		lines++;
		chr+=strlen(line);
	}

	cout.setf(ios::left,ios::adjustfield);
	cout<<setw(25)<<"Number of lines"<<setw(25)<<"Number of words "<<"Number of characters "<<endl;
	cout.setf(ios::right,ios::adjustfield);
	cout<<setw(10)<<lines<<setw(24)<<word<<setw(25)<<chr<<endl<<endl;
	getch();
}
