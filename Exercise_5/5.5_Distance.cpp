/*  Create two classes DM and DB which store the values of distance.
    DM stores distance in meters and centimeters.
    DB stores distances in feet and inches.
    Write a program that can read values for the class object and add one
    object of DM with another object of DB.
    Use a friend function to carry out the addition operation and this
    function will display answer in meter and centimeters
*/

#ifdef _WIN32
#include<iostream.h>
#endif

#ifdef linux
#include<iostream>
#endif

#include<stdlib.h>

using namespace std;

class DB;
class DM
{
	float meter;
	float cm;

public:
    void getData(float a = 0, float b = 0)
    {
        meter = a;
        cm = b;
    }
    void display(void)
    {
        cout<<"\nDistance is meter = "<<meter
            <<" centimeter = "<<cm<<endl;
    }
    friend DM operator +(const DM &, const DB &);
};

class DB
{
	float feet;
	float inch;

public:
    void getData(float a = 0, float b = 0)
    {
        feet = a;
        inch = b;

    }
    void display(void)
    {
        cout<<"\nDistance is feet = "<<feet
            <<" inch = "<<inch<<endl;
    }
    friend DM operator +(const DM &, const DB &);

};

DM operator +(const DM &d1, const DB &d2)
{
    DM d3;
    d3.meter = d1.meter + d2.feet/3.28;
    d3.cm = d1.cm + d2.inch/2.54;
    return d3;
}

int main()
{
    DM d1;
    d1.getData(89,9);
    DB d2;
    d2.getData(70,89);
    d1.display();
    d2.display();
    DM d3;
    cout<<"\nBy adding these two object of distance ";
    d3 = d1 + d2;
    d3.display();
    return 0;

}
