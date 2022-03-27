#include <iostream>
using namespace std;
int count=101;
class bank{
	char cust_name[50];
	char type[50];
	char acc_type[50];
	int acc_no;
	float balance;
public:
	void addaccount();
	void withdraw();
	void deposit();
	void balancecheck();
	void statement();
};
void bank::addaccount(){
	acc_no=count;
	cout <<"Enter the account holder name : ";
	cin >>cust_name;
	cout <<"Enter the type of account needed : ";
	cin>>acc_type;
	cout <<"Enter the total deposited amount above 500 : ";
	cin>>balance;
	while(balance<=500){
		cout <<"Enter the total deposited amount again above 500 : ";
		cin>>balance;
	}
	cout<<">>> YOUR ACCOUNT NUMBER : "<<acc_no;
}

void bank ::withdraw(){
	int b;
	cout<<"===========WITHDRAW==========="<<endl;
	cout<<"Your balance = "<<balance<<endl;
	cout<<"Enter the amount to withdraw : ";
	cin>>b;
	if(balance>= (b+500)){
		balance=balance-b;
		cout<<b<<"Rs withdrawed new balance is "<<balance<<"Rs"<<endl;
	}else{
		cout<<"Insufficient balance";
	}
}
void bank :: deposit()
{
	float b;
	cout<<"=========DEPOSIT========="<<endl;
	cout<<"Enter the amount to deposit : ";
	cin >>b;
	balance=balance+b;
	cout<<b<<"Rs deposited and new balance is "<<balance<<"Rs";

}

void bank::balancecheck(){
	cout<<"=========BALANCE========="<<endl;
	cout<<"Balance : "<<balance<<"Rs";
}
void bank::statement(){
	cout<<"====================================="<<endl;
	cout<<"Name     : "<<cust_name;
	cout<<"\nAC No   : "<<acc_no;
	cout<<"\nAC Type : "<<acc_type;
	cout<<"\nBalance : "<<balance;
	cout<<"\n====================================="<<endl;
}
int main(){
	bank cust[count];
	int n=0, no;
	while(n<=5){
		cout<<"\n============Welcome to SBI============"<<"\n===SELECT THE TRANSACTION YOU NEED===";
		cout<<"\n   1	: Add an account ";
		cout<<"\n   2	: Withdraw amount";
		cout<<"\n   3	: Deposit amount ";
		cout<<"\n   4	: Balance check";
		cout<<"\n   5	: Bank Statement ";
		cout<<"\nAny other key : EXIT";
		cout<<endl<<"Give your input : ";
		cin>>n;
		if(n==1){
			cust[count].addaccount();
			count++;
		}
		else if(1<n and n<7){
			cout<<"Enter the Account number : ";
			cin>>no;
			if(no>(count-1)){
				cout<<"Incorrect Account number ";
			}else{
				if(n==2){
					cust[no].withdraw();
				}

				else if(n==3){
					cust[no].deposit();
				}

				else if(n==4){
					cust[no].balancecheck();
				}

				else if(n==5){
					cust[no].statement();
				}
			}
		}else{
			cout<<"Thank You for using SBI";
		}
	}
		return 0;
}