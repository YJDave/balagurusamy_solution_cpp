#include<iostream.h>
#include<iomanip.h>
#include<conio.h>

template <class T>
class vector
{
	float *p;
	int size;
	public:
		void creat_vector(T a);
		void set_element(int i,T value);
		void modify(void);
		void multiply(T b);
		void display(void);
};

template <class T>
void vector<T>::creat_vector(T a)
{
	size=a;
	p=new float[size];
}

template <class T>
void vector<T>::set_element(int i,T value)
{
	p[i]=value;
}

template <class T>
void vector<T> :: multiply(T b)
{
	for(int i=0;i<size;i++)
	p[i]=b*p[i];
}

template <class T>
void vector<T>:: display(void)
{
	cout<<"p["<<size<<"] = ( ";
	for(int i=0;i<size;i++)
	{
		if(i==size-1)
			cout<<p[i];
		else
			cout<<p[i]<<" , ";
	}
	cout<<")"<<endl;
}

template <class T>
void vector<T>::modify(void)
{
	int i;
	cout<<" to edit a given element enter position of the element : ";
	cin>>i;
	i--;
	cout<<" Now enter new value of "<<i+1<<"th element : ";
	T v;
	cin>>v;
	p[i]=v;
	cout<<" Now new contents : "<<endl;
	display();
	cout<<" to delete an element enter position of the element :";
	cin>>i;
	i--;
	for(int j=i;j<size;j++)
	{
		p[j]=p[j+1];
	}
	size--;
	cout<<" New contents : "<<endl;
	display();
}

int main()
{
	vector<float> obj;
	int s;
	clrscr();
	cout<<" enter size of vector : ";
	cin>>s;
	obj.creat_vector(s);
	cout<<" enter "<<s<<" elements one by one :"<<endl;
	for(int i=0;i<s;i++)
	{
		float v;
		cin>>v;
		obj.set_element(i,v);
	}
	cout<<" Now contents :"<<endl;
	obj.display();
	cout<<" to multiply this vector by a scalar quantity enter this scalar quantity : ";
	float m;
	cin>>m;
	obj.multiply(m);
	cout<<" Now contents : "<<endl;
	obj.display();
	obj.modify();
	getch();
}