#ifdef _WIN32
#include<iostream.h>
#endif

#ifdef linux
#include<iostream>
#endif

#include<stdio.h>
#include<string.h>

class Str
{
	char a[20];
	
public:
	int operator==(Str);
	void get(void);
};

void Str::get(void)
{
	std::cout<<"Enter your string..";
	std::cin>>a;
	std::cout<<a<<"\n";
}

int Str::operator==(Str s)
{
	int i=0,flag=0;
	while((a[i]!='\0')||(s.a[i]!='\0'))
	{
		if(a[i]!=s.a[i])
		{
			flag++;
			break;
		}
		i++;
	}
	if(flag==0)
		return(1);
	else
		return(0);
}

int main()
{
	Str s1,s2;
	s1.get();
	s2.get();
	if(s1==s2)
		std::cout<<"Strings match!!\n";
	else
		std::cout<<"oops!! Strings don't match..\n";
}