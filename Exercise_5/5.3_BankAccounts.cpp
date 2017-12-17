// Modify the class and the program of Exercise 5.1 for handling 10 customers

/* Methods to test the functionality of program are

    * Deposit --> Deposit(add) given amount to total balance of selected account
    * Withdraw --> Withdraw(subtract) given amount from total balance of selected account
    * Display --> Display all detail of selected account
/*

/* How program works?

    * First, user will add accounts as many as he/she want with details like name,
    password, balance etc.

    * When user have done adding account, then user will given list of process like deposite,
    display etc.
    user will choose one of the processes

    * Then user will be asked to add account name and password, to get the account details on
    which user want to perform selected process

    * If user will enter correct password and account name then process will be complete and user
    will be notified by update information of account.

*/

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 50
using std::cout;
using std::cin;

class Account
{

    // Data members

    // Dynamic character array to store string variable like name, password, type of account etc.
    char *name;
    int no_acc;
    char *type_acc;
    float balance;
    char *password;

    // static "no" variable is used to track no of total accounts
    static int no;
public:

    // Methods

    // To get account details and store
    void getAccount(char *, float, char *, char *);
    // To deposit money in account
    void deposit(void);
    // To withdraw money from account
    void withdraw(void);
    // To display all information of account
    void display(void);

    // This method check whether string entered by user(which is passed as argument)
    // is equal to account password or not
    int check(char *);

    // This method finds the account which has the same account no entered by user
    // If account exists then returns the position of that account in array
    // of all account If not then returns -1
    friend int check_acc(int, Account *, int);
};

int Account::no;

int check_acc(int a, Account * p, int i)
{
    for(int k = 0;k <= i;p++,k++)
    {
        if(p->no_acc == a)
            return k;
    }
    return -1;
}

void Account::getAccount(char *a, float c, char * d, char * e) {
    name = new char[strlen(a)];
    type_acc = new char [strlen(d)];
    password = new char [strlen(e)];
    name = a;
    no_acc = no;
    no++;
    balance = c;
    type_acc = d;
    password = e;
}

int Account::check(char *a)
{
    if(strcmp(a,password) == 0)
        return 1;
    return 0;
}

void Account::deposit()
{
    display();
    float a;
    cout<<"\nEnter the amount of money that you want to deposit in your account  :";
    cin>>a;
    balance = balance + a;
    display();
}

void Account::withdraw()
{
    display();
    float a;
    cout<<"\nEnter the amount of money that you want to withdraw from your account  :";
    cin>>a;
    if(a>balance)
    cout<<"\nYou have only "<<balance<<" in your account ";
    else
    balance = balance - a;
    display();
}

void Account::display()
{
    cout<<"\nAccount no : "<<no_acc
        <<"\nName of Accountant : "<<name
        <<"\nType of Account : "<<type_acc
        <<"\nCurrent Balance : "<<balance;
}

int main()
{
    int i = -1, a, j;
    char acName[MAX], acPasswprd[MAX];
    float acBalance;
    char acType[MAX], passsword[MAX];
    int n = 5;
    Account bn[n];
    do
    {
        i++;
        cout<<"\nEnter the name of Accountant : ";
        cin>>acName;
        cout<<"Enter the type of Account : ";
        cin>>acType;
        cout<<"Enter the current balance of Account : ";
        cin>>acBalance;
        cout<<"Enter the password of Account :";
        cin>>acPasswprd;
        bn[i].getAccount(acName, acBalance, acType, acPasswprd);
        bn[i].display();
        cout<<"\nEnter 1 to add more account : ";
        cin>>a;

    }while(a == 1);

    a = 0;
    do
    {
        cout<<"\n1.Deposit"
            <<"\n2.Withdraw"
            <<"\n3.Display"
            <<"\n4.Exit\n";
        cin>>a;
        if(a!=1 && a!=3 && a!=2)
            return 0;

        cout<<"\nEnter the Account no : ";
        cin>>j;
        j = check_acc(j, bn, i);

        if(j != -1)
        {
            cout<<"\nEnter the password : ";
            cin>>passsword;
            if(bn[j].check(passsword))
            {
                switch(a)
                {
                    case 1: bn[j].deposit();
                    break;
                    case 2: bn[j].withdraw();
                    break;
                    case 3: bn[j].display();
                    break;
                    default: cout<<"\nChoose right option ";
                    break;
                }
            }
            else
            {
                cout<<"\nEntered password do not match. Wrong password! Try again!\n";
            }
        }
        else
        {
            cout<<"\nEntered Account No does not exist \n";
        }
    }while(a != 4);
    return 0;
}
