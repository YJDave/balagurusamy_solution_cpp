# define M 20
# define N 20
#include<iostream>
#include<stdio.h>

class Mat
{
public:
	int a[M][N],m,n;
	void get(void);
	void transpose(void);
	void display(void);
	Mat operator+(Mat);
	Mat operator-(Mat);
	Mat operator*(Mat);
};

void Mat::get(void)
{
	int i,j;

	std::cout<<"Enter no. of rows:";
	std::cin>>m;
	std::cout<<"Enter no. of columns:";
	std::cin>>n;

	for(i = 0; i<m; i++)
	{
		for(j=0;j<n;j++)
		{
			std::cout<<"Enter a["<<i<<"]["<<j<<"]";
			std::cin>>a[i][j];
		}
	}
}

void Mat:: transpose(void)
{
	int i,j;
	Mat t;
	t.m = n;//Swaping required when m and n are different.Eg.3x2 matrix after transpose becomes 2x3.
	t.n = m;
	for(i = 0; i<m; i++)
	{
		for(j=0;j<n;j++)
		{
			t.a[j][i] = a[i][j];	
		}
	}
	t.display();
}

void Mat::display(void)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			std::cout<<a[i][j]<<"  ";
		}
		std::cout<<"\n";
	}
}

Mat Mat::operator+(Mat m1)
{
	Mat temp;
	temp.m = m;
	temp.n = n;
	int i,j;
	if(m == m1.m && n ==m1.n)
	{
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				temp.a[i][j] = a[i][j] + m1.a[i][j];
			}
		}
		temp.display();
	}
	else
	{
		std::cout<<"Addition not possible...";
	}
	return temp;
}

Mat Mat::operator-(Mat m2)
{
	Mat temp;
	temp.m = m;
	temp.n = n;
	int i,j;
	if(m == m2.m && n ==m2.n)
	{
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				temp.a[i][j] = a[i][j] - m2.a[i][j];
			}
		}
		temp.display();
	}
	else
	{
		std::cout<<"Subtraction not possible...";
	}
	return temp;
}

Mat Mat::operator*(Mat m3)
{
	Mat temp;
	temp.m = n;
	temp.n = m3.m;
	int i,j,k;
	if(n!=m3.m)
	{
		std::cout<<"Multiplication not possible..."<<"\n";
	}
	else
	{
		for (i = 0; i < m; i++)

        {

            for (j = 0; j < n; j++)

            {

                temp.a[i][j] = 0;

                for (k = 0; k < m; k++)

                {

                    temp.a[i][j] = temp.a[i][j] + a[i][k] * m3.a[k][j];

                }

            }

        }
        temp.display();
	}
	return temp;
}

int main()
{
	Mat m1,m2,m3;
	m1.get();
	m1.display();
	m2.get();
	m2.display();
	bool value = true;
	while(value)
	{
		int ch;
		std::cout<<"1.Transpose\n2.Add\n3.Subtract\n4.Multiply\n5.Exit\n";
		std::cout<<"Enter your choice..";
		std::cin>>ch;
		switch(ch)
		{
			case 1:
			m1.transpose();
			//std::cout<<m1.m<<m1.n<<"\n";
			m2.transpose();
			//std::cout<<m2.m<<m2.n<<"\n";
			break;

			case 2:
			m3 = m1+m2;
			break;

			case 3:
			m3 = m1-m2;
			break;

			case 4:
			m3 = m1*m2;
			break;

			case 5:
			value = false;
			break;
		}
	}
	return(0);
}