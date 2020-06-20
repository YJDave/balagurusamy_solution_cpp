/*

write a program to dispaly the following output using a single cout statement

					Maths = 90
				  Physics = 77
				Chemistry = 69

*/
#ifdef _WIN32
#include<iostream.h>
#endif

#ifdef linux
#include<iostream>
#endif

using namespace std;

int main()
{

    int maths = 90;
    int physics = 77;
    int chemistry = 69;

    cout<<"\tMaths = "<<maths
        <<"\n\tPhysics = "<<physics
        <<"\n\tChemistry = "<<chemistry;

    return 0;
}
