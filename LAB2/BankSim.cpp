#include<iostream>
using namespace std;
class Account
{
	long int accountNum;
	char accountName[30], accountType[30];
	float balance;
	public:
		void setData()
		{
			cout<<"Enter your Account Number: ";
			cin>>accountNum;
			cout<<"Enter your Account Name: ";
			cin>>accountName;
			cout<<"Enter Account Type: ";
			cin>>accountType;
		}
		void deposit()
		{
			float amount;
			cout<<"Enter amount to be deposited: ";
			cin>>amount;
			balance += amount;
			cout<<"You have deposited "<<amount<<" to your account"<<endl;
		}
		void withdraw()
		{
			float amount;
			cout<<"Enter amount to be withdrawn: ";
			cin>>amount;
			if((amount <= balance))
			{
				balance -= amount;
				cout<<"You have deposited "<<amount<<" to your account"<<endl;
			}
			else
			{
				cout<<"You don't have sufficient balance in your Account";
			}
		}
		void displayBalance()
		{
			cout<<"Your current balance is: "<< balance<<endl;
		}
		
};
int main()
{
	Account ac;
	ac.setData();
	ac.deposit();
	ac.displayBalance();
	ac.withdraw();
	ac.displayBalance();
}
