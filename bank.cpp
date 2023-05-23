#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
using namespace std;
class bank
{
public:
    char name[100],add[100];
    int balance, amount;
    long long phone;
    void open_account ();
    void deposit_money();
    void withdraw_money ();
    void display_account();
};
void bank::open_account()
{
    cout<<"Enter your full name     :";
    cin>>name;
    cout<<"Enter your Address       :";
    cin>>add;
    cout<<"Enter your Contact Number:";
    cin>>phone;
    cout<<"Enter amount to deposit  :";
    cin>>balance;
    balance += amount;
    cout<<"Congratulations '"<<name<<"' your account have been created and your balance is "<<balance<<". "<<endl;

}
void bank::deposit_money()
{
    // int a ;
    cout<<"Enter the amount to deposit: ";
    cin>>amount;
    balance+=amount;
    cout<<"Your current balance : "<<balance<<endl;
}
void bank::display_account()
{
    cout<<"Your Name            : "<<name<<endl;
    cout<<"Your Address         : "<<add<<endl;
    cout<<"Your Conatct No      : "<<phone<<endl;
    cout<<"Your Current Balance : "<<balance<<endl;

}
void bank::withdraw_money()
{
    cout<<"Enter the amount to withdraw ";
    cin>>amount;
    balance-=amount;
    cout<<"Amount Withdrawing...";
    cout<<"Your Current Balance : "<<balance;
}

int main()
{
    int ch,x,n;
    bank obj;
    do
    {
    cout<<"1)Open account "<<endl;
    cout<<"2)Deposit money "<<endl;
    cout<<"3)WithDraw money "<<endl;
    cout<<"4)Display account "<<endl;
    cout<<"5)Exit"<<endl;
    cout<<"Select an option from above: ";
    cin>>ch;
    switch(ch)
    {
        case 1:"1) Open account \n";
        obj.open_account ();
        break;
        case 2:"2)Deposit money \n";
        obj.deposit_money();
        break;
        case 3:"3)WithDraw money \n";
        obj.withdraw_money ();
        break;
        case 4:"4)Display account\n";
        obj.display_account();
        break;
        case 5:
            if(ch==5)
            {
               cout<< "exit";
            }
        default:
            cout<<"Choose from given options only ";
    }
    cout<<"\n If you want to continue then please press 'Y'\n";
    cout<<"If you want to exit then please press:: N "<<endl;
    x=getch();
    if(x=='n' || x=='N')
        cout<<"exit";
    }
    while (x=='y' || x=='Y');
getch();
 return 0;

}