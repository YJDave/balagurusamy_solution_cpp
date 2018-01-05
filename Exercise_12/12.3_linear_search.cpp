#include<iostream.h>
#include<conio.h>
const int size=5;
template <class T>

class vector
{
 	T v[size];
 	public:
 	vector(){}
 	vector(T *b);
 	lsearch(vector<T> &m,int key);
};

template <class T>
vector<T>::vector(T *b)
{
 	for(int i=0;i<size;i++)
 	v[i]=b[i];
}

template<class T>
T vector<T>::lsearch(vector<T> &m,int key)
{
 	for(int k=0;k<5;k++)
 	{
 	if(key==m.v[k])
		return k;
 	}
 	return -1;
}

int main()
{
 	int x[size]={5,7,3,9,8};
 	vector<int> v1;
 	int key,flag;
 	clrscr();
 	v1=x;
 	cout<<"Enter Key to Search";
 	cin>>key;
 	flag=v1.lsearch(v1,key);
 	if(flag==-1)
		cout<<"Element not Found.."<<endl;
 	else
		cout<<"Element is at "<<flag+1<<"th Position"<<endl;
 	getch();
}
