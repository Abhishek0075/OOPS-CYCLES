//============================================================================
// Name        : Cycle.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class set{
	int rollNo,Mark1,Mark2,Mark3,total;
	string name;
public:
	void input();
	void display(void);
	void calcGrade();
	void sum(){
		total=(Mark1 + Mark2+Mark3);
	}
};
void set::calcGrade(){
	if(total>=270){
		cout<<"A+";
	}else if(total<270 && total>=240){
		cout<<"A";
	}else if(total<240 && total>=210){
		cout<<"B+";
	}else if(total<210 && total>=180){
		cout<<"B";
	}else if(total<180 && total>=150){
		cout<<"C+";
	}else if(total<150 && total>=120){
		cout<<"C";
	}else if(total<120 && total>=90){
		cout<<"D+";
	}else if(total<90){
		cout<<"Failed";
	}

}
void set::input(void){
	cout<<"Input Name "<<endl;
	cin>>name;
	cout<<"Input Roll No"<<endl;
	cin>>rollNo;
	cout<<"Input Marks of 3 subjects"<<endl;
	cin>>Mark1;
	cin>>Mark2;
	cin>>Mark3;

}
void set::display(void){
	cout<<"-------REPORT-------"<<endl;
	cout<<"  Name : "<<name<<endl;
	cout<<"  Roll No : "<<rollNo<<endl;
	cout<<"  Total marks : "<<total<<endl;
	cout<<"  Grade : ";
}
int main() {
	set A,B;
	A.input();
	A.sum();
	A.display();
	A.calcGrade();
	cout<<endl<<endl;
	B.input();
	B.sum();
	B.display();
	B.calcGrade();
	return 0;
}

