#ifdef _WIN32
#include<iostream.h>
#include<cmath.h>
#endif

#ifdef linux
#include<iostream>
#include<cmath>
#endif

#include<math.h>
#include<stdlib.h>

using namespace std;

class user
{
    string name;
    int unit;
    float c;
public:
    void get(void);
    void put(void);
    void charge(void);
    void total_charge(void);
};

//method to take user information and store it into object of user class
void user::get()
{
    cout<<"\nEnter the name of user : ";
    cin>>name;
    cout<<"\nEnter the unit of electricity : ";
    cin>>unit;
}

//method to find additional charge
void user::charge()
{
    if(unit >= 0 && unit <= 100)
    {
        c = unit*60;
        c = c/100;
        return;
    }
    if(unit > 100 && unit <= 300)
    {
        c = 100*60+(unit-100)*80;
        c = c/100;
        return;
    }
    if(unit > 300)
    {
        c = 100*60+200*80+(unit-300)*90;
        c = c/100;
        return;
    }
    //if user enter negative unit or any unappropriate data
    cout<<"\nNo of unit of electircity are not correct.Try again.";
    return;
}

//method to find total charge
void user::total_charge()
{
    if(c < 50)
    {
        c = 50;
        return;
    }
    else if(c > 300)
    {
        c = (c*15)/100 + c;
        return;
    }
    return;
}

//method to show all information of user object
void user::put()
{
    charge();
    total_charge();
    cout<<"\nName of user : "<<name;
    cout<<"\nUnit of Electricity consumed by user : "<<unit;
    cout<<"\nTotal charges : "<<c<<endl;
}

int main()
{
    //create object of user class
    user u;
    //call method of class using object
    u.get();
    u.put();
    return 0;
}