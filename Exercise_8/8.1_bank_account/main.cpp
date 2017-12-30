#include <iostream>
#include<cmath>
#include<STDLIB.H>
using namespace std;

/*
    QUESTION
*/

class Account
{
    string name ;
    string acc_type ;
    int acc_no ;

    public:
    int bal ;

    void get_cust_info()
    {
            cout <<"Enter your name :" << endl;
            cin >>name;
            cout <<"Enter account no :" ;
            cin >>acc_no;
            cout <<"\n Enter account type :" ;
            cin >>acc_type;
            cout<<"\n Enter balance :";
            cin >>bal;
            }
};

class curr_acc : public Account
{
    int amount;
    int min_bal ;

    void initialize_min_bal()
    {
        min_bal = 500;
    }
    void get()
    {
         cout << "";
        cout <<"Enter amount that you want to pass in cheque" << endl;
        cin >> amount;

        if(bal <= min_bal)
        {
            cout <<"Penalty will be charged of rs.100  because of insufficient balance !" <<endl;
            cout<<"Your minimum balance should be rs.500" <<endl;
            bal -= 100;
        }
    }

     void disp_bal()
    {
            bal+=amount;
            cout<<"Your updated balance is :" <<endl;
    }


};

class sav_acc : public Account
{
        int prin_amount;
        int int_rate;
        int time;
        int n;
        int interest;

        public:
        void get_data()
        {
                cout<<"\nEnter  the principal investment amount  :"<<endl;
                cin>>prin_amount;
                cout <<"\nEnter the annual interest rate (decimal)"<<endl;
                cin>>int_rate;
                cout <<"\nEnter the number of years the money is invested or borrowed for :" <<endl;
                cin>>time;
                 cout <<"\nEnter the number of times that interest is compounded per year :" <<endl;
                 cin>>n;
        }

        void calculate_interest()
        {
            interest = pow((1 +(int_rate/n)) , (n*time));
            cout<<"\n Interest is :" << interest;
            cout<<"The total balance is :" << interest+bal;
        }

};

int main()
{
    Account acc ;
    sav_acc sav;
    curr_acc cur;
    int depo , no;

    cout<<"Enter details :"<<endl;

    cout <<"\nWhich task do you want to perform ?" <<endl ;
    cout<<"\n1.Deposit the balance \n2. Display the current balnce \n3. Compute and deposit interest";
    cout<<" \n4.exit"<<endl;

    switch(no)
    {
        case 1 :
             cout<<"\n Enter deposit :" ;
            cin >> depo;
            acc.bal += depo;

    case 2:
            cout<< "Your current balance is :" << acc.bal;

    case 3:
            //cout<< "Computed interest is :" << sav.calculate_interest();
            cout<< "Computed interest is :"<<sav.calculate_interest();

    case 4:
            exit(0);

    defualt :
            cout<<"Enter valid choice :" << endl;
    };

    return 0;
}
