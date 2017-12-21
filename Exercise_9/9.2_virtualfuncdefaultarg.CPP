/*9.2-Extend 9.1 to display area of circles. For a circle,only
  one value is needed i.e. radius but in get_data() function
  2 values are passed.*/
#include<conio.h>
#include<iostream.h>
class shape
{
	public:
	double x,y;
	void get_data(double a,double b=0)
	{
		x=a;
		y=b;
	}
	virtual void display_area()
	{}
};
class triangle:public shape
{
	double area;
	void display_area();

};
class rectangle:public shape
{
	double area;
	void display_area();

};
class circle:public shape
{
	double area;
	void display_area();
};
void triangle::display_area()
{
	cout<<"\nEnter values of x and y.";
	cin>>x>>y;
	get_data(x,y);
	area=(x*y)/2;
	cout<<"\nArea="<<area;
}
void rectangle::display_area()
{
	cout<<"\nEnter values of x and y.";
	cin>>x>>y;
	get_data(x,y);
	area=x*y;
	cout<<"\nArea="<<area;
}
void circle::display_area()
{
	cout<<"\nEnter the value of radius.";
	cin>>x;
	get_data(x);
	area=3.14*x*x;
	cout<<"\nArea="<<area;
}
void main()
{
	shape *s1,*s2,*s3;
	triangle t;
	rectangle r;
	circle c;
	int ch;
	clrscr();
	cout<<"\nEnter 1 for triangle, 2 for rectangle and 3 for circle.";
	cin>>ch;
	s1=&t;
	s2=&r;
	s3=&c;
	if(ch==1)
	s1->display_area();
	else if(ch==2)
	s2->display_area();
	else
	s3->display_area();
	getch();
}


