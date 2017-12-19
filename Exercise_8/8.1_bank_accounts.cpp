#include <iostream>

using namespace std;

/*
    QUESTION
*/

class Account
{
    public :
    string name ;
    string acc_type ;
    int acc_no ;
    int bal ;
}

class curr_acc : Account
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
            cout <<"Penalty will be charged of rs.100  because of insufficient balance !" ;
            bal -= 100;
    }
}

class sav_acc : Account
{
        int interest;

}

int main()
{
    Account obj ;
    sav_acc sav;
    int depo , no;

    cout <<"Enter your name :" << endl;
    cin >> obj.name;
    cout <<"Enter account no :" ;
    cin >> obj.acc_no;
    cout <<"\n Enter account type :" ;
    cin >> obj.acc_type;
    cout<<"\n Enter balance :";
    cin >> obj.bal;

    cout <<"Which task do you want to perform ?" <<endl ;
    cout<<"\n1.Deposit the balance \n2. Display the current balnce \n3. Compute and deposit interest"
    "\n4.Withdrawl and update balance \n5.exit"
    switch(no)
    {
        case 1 :
             cout<<"\n Enter deposit :" ;
            cin >> depo;
            bal += depo;

    case 2:
            cout << "Your current balance is :" << bal;

    case 3:
            cout<< "Computed interest is :" <<sav.interest;

    case 4:
                cout <<"Balance updated !" << "\t"<<bal;
    }


    return 0;
}
