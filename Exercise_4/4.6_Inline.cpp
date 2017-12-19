#include<iostream>
#include<stdio.h>

inline int max(int a, int b, int c)
{
	return(a>b?(a>c?a:c):(b>c?b:c));
}

int main()
{
	int x,y,z;
	std::cout<<"Enter three numbers: ";
	std::cin>>x>>y>>z;
	std::cout<<"\n";
	std::cout<<"Maximum number is: "<<max(x,y,z);
	std::cout<<"\n";
	return(0);
}