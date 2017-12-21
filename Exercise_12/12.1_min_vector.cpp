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
 void show();
 minimum(vector<T> &m);
};
template <class T>
vector<T>::vector(T *b)
{
 for(int i=0;i<size;i++)
 v[i]=b[i];
}
template<class T>
T vector<T>::minimum(vector<T> &m){
 int j=0;
 for(int k=1;k<size;k++)
 {
 if(m.v[j]>m.v[k])
 j=k;
 }
 return m.v[j];
}
template<class T>
void vector<T>::show()
{
 cout<<"("<<v[0];
 for(int i=1;i<size;i++)
 cout<<","<<v[i];
 cout<<")";
 cout<<"\n";
}
int main()
{
 int x[size]={5,7,3,9,8};
 vector<int> v1;
 clrscr();
 v1=x;
 cout<<" minimum value = "<<v1.minimum(v1)<<" of array";
 v1.show();
 getch();
}
