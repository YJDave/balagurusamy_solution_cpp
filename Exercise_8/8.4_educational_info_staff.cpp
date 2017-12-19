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

class Teacher :  public Staff
{
    string subject ;
    string publication ;

    public:
    void teacher_info()
    {
        cout <<"\nEnter your subject and publication :"<<endl;
        cin >> subject >> publication ;
        cout <<"Subject :" << subject << "\tPublication :" << publication <<endl;
    }
};

class Typist : public Staff
{
    int speed ;

    public:
    void get_speed()
    {
            cout <<"\nEnter your speed :";
            cin>>speed;
            cout <<"Your speed is :" <<speed<<endl;
    }
};

class Officer : public Staff
{
    public:
    string grade;
    //take grade from user in main

    void get_off_info()
    {
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

class Education :Teacher ,  Officer
{
    string gen_edu;
    string prof_edu;
    char chr;

    public:
    void get_info_edu()
    {
        cout<<"\nEnter your designation :" <<endl;
        cout<<"\n g. General Education \np. Proffessional Education"<<endl;
        cin>>chr;

        if(chr == 'g')
            cout << "You have general education.";
        else if(chr == 'p')
            cout<<"You have proffesional education.";
    }
};
int main()
{
    Staff stf;
    Teacher tch;
    Typist typ;
    Casual cas;
    Education edu;

    cout<<"Enter details as required :" << endl;

    stf.get_staff_info();

    tch.teacher_info();

    typ.get_speed();

    cout<<"\nEnter which type of officer you are :"<<endl;
    Officer off;
    cin >>off.grade;
    off.get_off_info();

    cout<<"\nEnter which type of typist you are ?"<<endl;
    char ch;
    cout<<"\n r. Regular Typist \n c. Casual Typist"<<endl;
    cin>>ch;
   if(ch == 'r')
        Regular reg;
    else if(ch == 'c')
        cas.casual_typist_info();

    edu.get_info_edu();

    return 0;
}
