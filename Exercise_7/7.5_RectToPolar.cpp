#ifdef _WIN32
#include<iostream.h>
#endif

#ifdef linux
#include<iostream>
#endif

#include<stdio.h>
#include<math.h>

class polar
{
public:
	double ang,rad;//angle and radius of the point.
	void getP(void);
	void toRect(void);
	void displayP(void);
};

class recta
{
public:
	double x,y;
	void getR(void);
	void toPol(void);
	void displayR(void);
};

void polar::getP(void)
{
	std::cout<<"Enter the radius: ";
	std::cin>>rad;
	std::cout<<"Enter the angle: ";
	std::cin>>ang;
}

void recta::getR(void)
{
	std::cout<<"Enter length on x-axis: ";
	std::cin>>x;
	std::cout<<"Enter length on y-axis: ";
	std::cin>>y;
}

void polar::toRect(void)
{
	recta r1;
	r1.x = rad*cos(ang*3.14159/180);
	r1.y = rad*sin(ang*3.14159/180);
	r1.displayR();
}

void recta::toPol(void)
{
	polar p1;
	p1.ang = atan(y/x)*180/3.14159;
	p1.rad = sqrt(x*x+y*y);
	p1.displayP();
}

void polar::displayP(void)
{
	std::cout<<"Angle = "<<ang<<" Radius = "<<rad<<"\n";
}

void recta::displayR(void)
{
	std::cout<<"X = "<<x<<" Y = "<<y<<"\n";
}

int main()
{
	bool b = true;
	polar p;
	recta r;
	while(b)
	{
		int ch;
		std::cout<<"1.Polar to Rectangle form\n2.Rectangle to Polar form.\n3.Exit\n";
		std::cout<<"Enter your choice..\n";
		std::cin>>ch;
		switch(ch)
		{
			case 1:
			p.getP();
			p.toRect();
			break;

			case 2:
			r.getR();
			r.toPol();
			break;

			case 3:
			b = false;
		}
	}
	return(0);
}