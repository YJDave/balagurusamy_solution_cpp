#ifdef _WIN32
#include<iostream.h>
#endif

#ifdef linux
#include<iostream>
#endif

#include<stdio.h>

class addition
{
public:

	//function with 2 argument
	int sum(int a,int b)
	{
	return(a+b);
	}


	//function with 3 argument
	int sum(int a,int b,int c)
	{
	return(a+b+c);
	}

	//function with 4 argument
	int sum(int a,int b,int c,int d)
	{
	return(a+b+c+d);
	}

	//function with n argument
	int sum(int a[],int n)
	{
	int sum=0;
	for(int i=0;i < n;i++)
	{
	sum=sum+a[i];
	}
	return(sum);
	}
};


int main()
{
	addition a1;
	
	int a,b,c,d,result;

	std::cout<<"for 2 argument\n";
	std::cout<<"Enter 2 Integers\n";
	std::cin>>a>>b;
	result=a1.sum(a,b);
	std::cout<<"Addition =" << result;


	std::cout << "\n\nfor 3 argument\n";
	std::cout<<"Enter 3 Integers\n";
	std::cin>> a >> b >> c;
	result=a1.sum(a,b,c);
	std::cout<<"Addition ="<< result;



	std::cout<< "\n\nfor 4 argument\n";
	std::cout<<"Enter 4 Integers\n";
	std::cin>>a >> b >> c >> d;
	result=a1.sum(a,b,c,d);
	std::cout<<"Addition =" << result;


	std::cout<<"\n\nHow many Argument You want to enter:-";
	int no;
	std::cin>>no;
	int num[50];
	std::cout<<"Enter "<< no <<" Integers\n";
	for(int i=0;i < no ;i++)
	std::cin>>num[i];
	result=a1.sum(num,no);
	std::cout<<"Addition =" << result;

	return(0);
}
