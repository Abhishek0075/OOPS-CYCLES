#include <iostream>
#include <string>
using namespace std;

int count=101;

class bank
{
	char cust_name[50], acc_type[50];
	float acc_no;
	float balance;
public:
	void addaccount();
	void withdraw();
	void deposit();
	void balancecheck();
	void statement();
};


void bank::addaccount()
{
	acc_no=count;
	cout <<"Enter the account holder name : ";
	cin >>cust_name;
	cout <<"Enter 'savings' for Savings account and 'current' for a current account : ";
	cin>>acc_type;
	cout <<"Enter the total deposited amount(minimum 500) : ";
	cin>>balance;
	cout<<"AC No : "<<acc_no;
}

void bank ::withdraw(){
	int b;
	cout<<"Enter the amount to withdraw : ";
	cin>>b;
	if(balance>= (b+500)){
		balance=balance-b;
		cout<<b<<"Rs withdrawed new balance is "<<balance<<endl;
	}else{
		cout<<"Insufficient balance";
	}
}
void bank :: deposit()
{
	float b;
	cout<<"Enter the amount to deposit : ";
	cin >>b;
	balance=balance+b;
	cout<<b<<"Rs deposoted and new balance : "<<balance;

}

void bank::balancecheck(){
	cout<<"Balance : "<<balance;
}
void bank::statement(){
	cout<<"Name : "<<cust_name;
	cout<<"\nAC No : "<<acc_no;
	cout<<"\nAC Type : "<<acc_type;
	cout<<"\nBalance : "<<balance;
}

int main(){
	bank cust[count];
	int n=0, ac_no;
	while(n<=5){
		cout<<"\n============Welcome to SBI============"<<"\n===SELECT THE TRANSACTION YOU NEED===";
		cout<<"\n1 : Add an account ";
		cout<<"\n2 : Withdraw amount";
		cout<<"\n3 : Deposit amount ";
		cout<<"\n4 : Balance check";
		cout<<"\n5 : Bank Statement ";
		cout<<"\nAny other key : EXIT";
		cout<<endl<<"Enter your input : ";
		cin>>n;
		if(n==1){
			cust[count].addaccount();
			count++;
		}
		else if(1<n and n<7)
		{
			cout<<"Enter the AC No : ";
			cin>>ac_no;
			if(ac_no>(count-1))
			{
				cout<<"AC No not match.";
			}else{
				if(n==2)
					cust[ac_no].withdraw();
				else if(n==3)
					cust[ac_no].deposit();
				else if(n==4)
					cust[ac_no].balancecheck();
				else if(n==5)
					cust[ac_no].statement();
			}
		}else{
			cout<<"Thank You for using SBI";
		}
	}
		return 0;
}
