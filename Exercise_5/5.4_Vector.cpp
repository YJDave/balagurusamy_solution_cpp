// Modify the class and program of Exercise 5.2 such that program would be able to
// add two vectors and display the resultant vector.

#include<iostream>

using std::cout;
using std::cin;

class vector
{
	float *v;
	int dimension;

public:
	void create_vector(void);
	friend bool check_dimension(const vector &,const vector &);
	friend vector & addition(const vector &,const vector &);
	friend vector & multiply(const vector &,const vector &);
	void multiply(float value);
	int find_value(float value);
	void update_value(int i,float value);
	bool check_null(void);
	void display_vec(void);
};

void vector::display_vec()
{
	cout<<"\n( ";
	for(int i=0;i<dimension;i++)
		cout<<v[i]<<" ,";
	cout<<" )";
}

void vector::update_value(int i,float value)
{
	v[i]=value;
	return ;
}

int vector::find_value(float value)
{
    if(!check_null())
    {


	for(int i=0;i<dimension;i++)
	{
		if(v[i]==value)
			return i;
	}
	cout<<"Entered value do not exist in vector";
	return -1;
    }
    cout<<"\nGiven vector is null";
    return -1;
}

void vector::multiply(float value)
{
    if(!check_null())
    {


	for(int i=0;i<dimension;i++)
	{
		v[i]=v[i]*value;
	}
    }
    cout<<"\nGiven vector is null";
}

bool check_dimension(const vector &v1,const vector &v2)
{
	if(v1.dimension==v2.dimension)
		return 1;
	cout<<"\nDimension of given vectors are not equal";
	return 0;
}

vector & multiply(const vector &v1,const vector &v2)
{
	vector v3;
	v3.dimension=v1.dimension;
	v3.v= new float [v3.dimension];
	for(int i=0;i<v1.dimension;i++)
	{
		v3.v[i]=v1.v[i]*v2.v[i];
	}
	return v3;
}

vector & addition(const vector &v1,const vector &v2)
{
	vector v3;
	v3.dimension=v1.dimension;
	v3.v= new float [v3.dimension];
	for(int i=0;i<v1.dimension;i++)
	{
		v3.v[i]=v1.v[i]+v2.v[i];
	}
	return v3;
}

bool vector::check_null()
{
	if(dimension==NULL)
		return 1;
	return 0;
}

void vector::create_vector()
{
	cout<<"\nEnter the total element of vector : ";
	cin>>dimension;
	v= new float [dimension];
	cout<<"\nEnter all elements of vector : \n";
	for(int i=0;i<dimension;i++)
	{
		cout<<"Enter "<<(i+1)<<" element : ";
		cin>>v[i];
	}
}
int main()
{
	float value;
	int i;
	int choice;
	vector vector1;
	vector vector2;
	vector1.create_vector();
	while(true)
	{
		cout<<"\n\nEnter your option :\n"
			<<"1.Display Vector\n2.Find Value in Vector"
			<<"\n3.Update Vector\n4.Multiply Vector with constant value"
			<<"\n5.Addition of two Vector\n6.Multiplication of two Vector"
			<<"\n7.Exit\n";
		cin>>choice;
		switch(choice)
		{
			case 1:
					vector1.display_vec();
					break;
			case 2:
					vector1.display_vec();
					cout<<"\nEnter the value to find in this vector :";
					cin>>value;
					i=vector1.find_value(value);
					if(i!=-1)
						cout<<"\nValut found in vector at "<<(i+1)<<" position ";
					break;
			case 3:
					vector1.display_vec();
					cout<<"\nEnter the value you want to update in this vector :";
					cin>>value;
					i=vector1.find_value(value);
					if(i!=-1)
					{
						cout<<"Enter new update value: ";
						cin>>value;
						vector1.update_value(i,value);
						cout<<"Vector after update ..\n";
						vector1.display_vec();
					}
					break;
			case 4: 
					vector1.display_vec();
                    cout<<"\nEnter the value of constant : ";
					cin>>value;
					cout<<"\nMultiplying vector by "<<value;
					vector1.multiply(value);
					vector1.display_vec();
					break;
			case 6: 
					cout<<"Enter first vector :";
					vector1.create_vector();
					cout<<"\nEnter second vector";
					vector2.create_vector();
					if(check_dimension(vector1,vector2))
					{
						cout<<"\nMultiplication of vecotrs is : ";
						vector vector4;
						vector4=multiply(vector1,vector2);
						cout<<"\nVector 4 ..\n";
						vector4.display_vec();
					}
					break;
			case 5: 
					cout<<"Enter first vector :";
					vector1.create_vector();
					cout<<"\nEnter second vector";
					vector2.create_vector();
					if(check_dimension(vector1,vector2))
					{
						cout<<"\nAddition of vectors is : ";
						vector vector3;
						vector3=addition(vector1,vector2);
						cout<<"\nVector 3 ..\n";
						vector3.display_vec();
					}
					break;
			default: 
					return 0;
		}
	}

}