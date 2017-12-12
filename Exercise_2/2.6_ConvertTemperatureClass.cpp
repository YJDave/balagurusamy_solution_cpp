/*

    Redo exercise 2.5 using a class called temp and member functions.

*/


#include<iostream>

using namespace std;

class temp
{
    float t;
    public:
        void get(float m)
        {
            t = m;
        }
        void put()
        {
            cout<<"\nTemperature in Celsius is  : "<<t<<endl;
        }
        void intoCelsius(void);
};

void temp::intoCelsius()
{
    t = (t-32)*5/9;

}

int main()
{
    temp t1;
    float t;
    cout<<"\nEnter the temperature in Fahrenheit : ";
    cin>>t;
    t1.get(t);
    t1.intoCelsius();
    t1.put();
    return 0;
}
