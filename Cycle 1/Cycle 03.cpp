//============================================================================
// Name        : t7.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
const int m=100;
class bank{
	string cust_name[m];
	int acc_no[m];
	float balance[m];
	string acc_type[m];
	int count;
public:
	void CNT(){
		count=0;
	}
	void addaccount(){
		string x;
		cout<<"=========ADD ACCOUNT========="<<endl;
		cout<<"Enter the name : ";
		cin>>cust_name[count];
		balance[count]=600;
		if (count==0){
			acc_no[count]=345358;
		}else{
			acc_no[count]=(acc_no[count-1])+1;
		}
		cout<<"Enter s for savings account and c for current account : ";
		cin>>x;
		if(x=="s"){
			acc_type[count]="s";
		}else if(x=="c"){
			acc_type[count]="c";
		}else{
			cout<<"Input is wrong";
		}
		cout<<"Your account number = "<<acc_no[count]<<endl;
		count++;
	}
	void withdraw(){
		int x,i;
		float y;
		cout<<"=========WITHDRAW========="<<endl;
		cout<<"Enter the account number : ";
		cin>>x;
		for(i=0;i<=count;i++){
			if(acc_no[i]==x){
				cout<<"Balance = "<<balance[i]<<endl;
				if(balance[i]>500){
					cout<<"Enter the amount to be withdrawed : ";
					cin>>y;
					balance[i]=balance[i]-y;
					cout<<"===="<<y<<"Rs withdrawed and the balance is "<<balance[i]<<"===="<<endl;
					break;
				}else{
					cout<<"INSUFFICENT BALANCE"<<endl;
					break;
				}
				if(i==count){
					cout<<"WRONG ACCOUNT NUMBER"<<endl;
				}
			}
		}
	}
	void deposit(){
		int x,i;
		float y;
		cout<<"=========DEPOSIT========="<<endl;
		cout<<"Enter the account number :";
		cin>>x;
		cout<<"Enter the amount to be deposited : ";
		cin>>y;
		for(i=0;i<=count;i++){
			if(acc_no[i]==x){
				balance[i]=balance[i]+y;
				cout<<"The balance = "<<balance[i]<<endl;
				break;
			}
		}
		if(i==count){
			cout<<"WRONG ACCOUNT NUMBER"<<endl;
		}
	}
	void statement(){
		int x,i;
		cout<<"Enter the account number of account of which you need statement : ";
		cin>>x;
		for(i=0;i<=count;i++){
			if(acc_no[i]==x){
				cout<<"========BANK STATEMENT========"<<endl;
				cout<<"Name : "<<cust_name[i]<<endl;
				cout<<"Account number : "<<acc_no[i]<<endl;
				if(acc_type[i]=="s"){
					cout<<"Account type : Savings"<<endl;
				}else{
					cout<<"Account type : Current"<<endl;
				}
				cout<<"Balance : "<<balance[i]<<endl;
				break;
			}
		}
		if(i==count){
			cout<<"WRONG ACCOUNT NUMBER"<<endl;
		}

	}
};
int main() {
	bank sbi;
	sbi.CNT();
	sbi.addaccount();
	sbi.addaccount();
	sbi.addaccount();
	sbi.deposit();
	sbi.withdraw();
	sbi.statement();
	return 0;
}


