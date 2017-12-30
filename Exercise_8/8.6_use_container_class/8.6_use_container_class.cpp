/*using container class re-writing exercise 8.3*/
#include <iostream>
#include<cstring>

using namespace std;

class Staff
{
    int code ;
    string name ;

    public:
    void get_staff_info()
    {
        cout <<"\nEnter your code and name :" <<endl;
        cin >> code >> name;
        cout << "Code :" << code << "\tName :" << name<<endl;
    }
};

class Teacher
{
    string subject ;
    string publication ;
    Staff stf1;

    public:

    void teacher_info()
    {
        cout<<"\n***In teacher class ***"<<endl;
        stf1.get_staff_info();
        cout <<"\nEnter your subject and publication :"<<endl;
        cin >> subject >> publication ;
        cout <<"Subject :" << subject << "\tPublication :" << publication <<endl;
    }
};

class Typist
{
    int speed ;
    Staff stf2;

    public:

    void get_speed()
    {
            cout<<"\n***In typist class ***"<<endl;
            stf2.get_staff_info();
            cout <<"\nEnter your speed :";
            cin>>speed;
            cout <<"Your speed is :" <<speed<<endl;
    }
};

class Officer
{
    public:
    char grade;
    //take grade from user in main
    Staff stf3;

    void get_off_info()
    {

            cout<<"\n***In officer class ***"<<endl;
            stf3.get_staff_info();
            cout<<"\nEnter which type of officer you are :"<<endl;
            cin >>grade;
            cout<<"\nYou are " << grade << " grade officer" <<endl;
    }
};

class Regular : public Typist
{
  //  string type;
    public:
    Regular()
   {
        cout <<"\nYou are regular typist." <<endl;
    }
};

class Casual : public Typist
{
    int daily_wages ;
    //take daily_wages from user in main
    public:
    void casual_typist_info()
    {
        cout<<"Enter your daily wages :"<<endl;
        cin>>daily_wages;
        cout <<"\nYou are casual typist and your daily wages are :" << daily_wages<<endl;
    }
};
int main()
{
    Officer off;
    Teacher tch;
    Typist typ;
    Casual cas;

    cout<<"Enter details as required :" << endl;

    tch.teacher_info();

    off.get_off_info();

    typ.get_speed();
    cout<<"\nEnter which type of typist you are ?"<<endl;
    char ch;
    cout<<"\nr. Regular Typist \nc. Casual Typist"<<endl;
    cin>>ch;
   if(ch == 'r' || 'R')
        Regular reg;
    else if(ch == 'c' || 'C')
        cas.casual_typist_info();


    //cout<<"\nEnter which type of officer you are :"<<endl;
   // cin >>off.grade;


    /*cout<<"\nEnter which type of typist you are ?"<<endl;
    char ch;
    cout<<"\n r. Regular Typist \n c. Casual Typist"<<endl;
    cin>>ch;
   if(ch == 'r')
        Regular reg;
    else if(ch == 'c')
        cas.casual_typist_info();
*/
    return 0;
}
