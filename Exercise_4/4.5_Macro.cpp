#ifdef _WIN32
#include<iostream.h>
#endif

#ifdef linux
#include<iostream>
#endif

#include<stdio.h>
#define MAX(a, b, c) ((a)>(b)?((a)>(c)?(1):(0)):((b)>(c)?(-1):(0)))//:(a==b)?(0):(-1))

int main()
{
	int x,y,z,s;
	std::cout<<"Enter three numbers: ";
	std::cin>>x>>y>>z;
	std::cout<<"\n";
	s = MAX(x,y,z);
	if(s==1)
	std::cout<<"The Maximum of the numbers is: "<<x;
	else if(s==0)
	std::cout<<"The Maximum of the numbers is: "<<z;
	else
	std::cout<<"The Maximum of the numbers is: "<<y;
	std::cout<<"\n";
	return(0);
}