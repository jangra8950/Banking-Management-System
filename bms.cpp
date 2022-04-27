#include<iostream>
#include<conio.h>
using namespace std;
class Bank
{
private:
    char name[50];
    char address[100];
    char y;
    int balance;
public:
    void open_account();
    void deposit_money();
    void withdraw_money();
    void display_account();
};
void Bank::open_account()
{
    cout<<" Enter your full name\n ";
    cin.ignore();
    cin.getline(name,50);
    cout<<" Enter your address\n ";
    cin.ignore();
    cin.getline(address,100);
    cout<<" Enter which type of account you want to open (s) for saving and (c) for current\n ";
    cin>>y;
    cout<<" Enter initial amount you want to deposit\n ";
    cin>>balance;
    cout<< " Your account is successfully created ";
}
void Bank::display_account()
{
    cout<< "Your full name  "<<name<<endl;
    cout<< " Your address  "<<address<<endl;
    cout<< " Type of account you opened "<<y<<endl;
    cout<< " Amount in your account deposited "<<balance<<endl;
}
void Bank::deposit_money()
{
    //char q;
    int a;
    cout<< " Enter how much you want to deposit "<<endl;
    cin>>a;
    balance+=a;
    cout<<" Total amount deposited "<<balance<<endl;
}
void Bank::withdraw_money()
{
    float amount;
    cout<< " Withdraw money "<<endl;
    cout<< " Enter amount you want to withdraw "<<endl;
    cin>>amount;
    balance-=amount;
    cout<< " Total amount left which is "<<balance<<endl;
}
int main()
{
    int choice;
    Bank obj;
    cout<<"***Banking System***"<<endl;
 do
  {
        cout<<"\nSelect one option below ";
        cout<<"\n1 Open an Account";
        cout<<"\n2 Deposit";
        cout<<"\n3 Withdrawal";
        cout<<"\n4 Display Accounts";
        cout<<"\n5 Quit";
        cout<<"\nEnter your choice: ";
        cin>>choice;
   switch(choice)
    {
    case 1:
        cout<<" To open your account "<<endl;
        obj.open_account();
        break;
    case 2:
        cout<<" To deposit in your account "<<endl;
        obj.deposit_money();
        break;
    case 3:
        cout<<" To withdraw money from your account "<<endl;
        obj.withdraw_money();
        break;
    case 4:
        cout<<" Your account details "<<endl;
        obj.display_account();
    break;
    case 5:
        break;
    default:
        cout<<"\nEnter correct choice";
          exit(0);
    }
  }while(choice!=5);
 getch();
 return 0;
}

