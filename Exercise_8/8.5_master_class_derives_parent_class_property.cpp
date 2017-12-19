/* Exercise_8_8.5*/
#include <iostream>
#include<cstring>

using namespace std;

class Person
{
    public:     //as data memebers are protected , it can be used by their subclasses
    int per_c ;
    string per_n;
};

class Account : Person
{
    protected:      //as data memebers are protected , it can be used by their subclasses
    int pay;
};

class Admin : Person
{
    protected :     //as data memebers are protected , it can be used by their subclasses
    int exp;
};

class Master : Account , Admin
{
    public:

    void disp_person_info()     //displays person's information
    {
        cout <<"Enter name and code :"<<endl;
        cin >> personCode>> personName;
        cout<<"Code:"<<personCode<<"\tName:"<<perName<<endl;
    }

    void get_amount()    //it will take amount and display it
    {
        cout <<"How much amount is paid to you ?"<<endl;
        cin >>pay;
        cout<<"Your paid amount is :" << pay<<endl;
    }

    void disp_exp()     //displays experience
    {
        cout<<"How many years of experience do you have ?" <<endl;
        cin>> exp;
        cout<<"You have " << exp << "year expereince" << endl;
    }
};
int main()
{
    Master mas;

   mas.disp_person_info();
   mas.disp_exp();
   mas.get_amount();

    return 0;
}
