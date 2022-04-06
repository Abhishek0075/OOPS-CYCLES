#include <iostream>
using namespace std;
class set{
	int rollNo,Mark1,Mark2,Mark3;
	float avg;
	string name;
public:
	void input(void);
	void display(void);
	void calcGrade(void);
	void average(){
		avg=(Mark1 + Mark2+Mark3)/3;
	}
};
void set::calcGrade(void){
	if(avg>=90){
		cout<<"A+";
	}else if(avg<90 && avg>=80){
		cout<<"A";
	}else if(avg<80 && avg>=70){
		cout<<"B+";
	}else if(avg<70 && avg>=60){
		cout<<"B";
	}else if(avg<60 && avg>=50){
		cout<<"C+";
	}else if(avg<50 && avg>=40){
		cout<<"C";
	}else if(avg<40 && avg>=30){
		cout<<"D+";
	}else{
		cout<<"Failed";
	}
}
void set::input(void){
	cout<<"========INPUT DETAILS========"<<endl;
	cout<<"Input Name "<<endl;
	cin>>name;
	cout<<"Input Roll No"<<endl;
	cin>>rollNo;
	cout<<"Input Marks of 3 subjects"<<endl;
	cout<<"Enter marks of Science : ";
	cin>>Mark1;
	while(Mark1>100){
		cout<<"!! Mark is greater than 100 Enter right marks !!"<<endl;
		cin>>Mark1;
		if(Mark1<=100){
			break;
		}
	}
	cout<<"Enter marks of Malayalam : ";
	cin>>Mark2;
	while(Mark2>100){
		cout<<"!! Mark is greater than 100 Enter right marks !!"<<endl;
		cin>>Mark2;
		if(Mark2<=100){
			break;
		}
	}
	cout<<"Enter marks of Maths : ";
	cin>>Mark3;
	while(Mark3>100){
		cout<<"!! Mark is greater than 100 Enter right marks !!"<<endl;
		cin>>Mark3;
		if(Mark3<=100){
			break;
		}
	}
}
void set::display(void){
	cout<<" ";
	cout<<"----------REPORT----------"<<endl;
	cout<<"  Name : "<<name<<endl;
	cout<<"  Roll No : "<<rollNo<<endl;
	cout<<"  -------Marks-------"<<endl;
	cout<<"  >> Science : "<<Mark1<<endl;
	cout<<"  >> Malayalam : "<<Mark2<<endl;
	cout<<"  >> Maths : "<<Mark3<<endl;
	cout<<"  -------------------"<<endl;
	cout<<"  Average marks : "<<avg<<endl;
	cout<<"  Grade : ";
}
int main() {
	int x,i,j;
	i=0;
	cout<<">> Enter the number of students"<<endl;
	cin>>x;
	set A[x];
	while(i<x){
		A[i].input();
		i=i+1;
	}
	
	for(j=0;j<i;j++){
		A[j].average();
		A[j].display();
		A[j].calcGrade();
		cout<<endl<<endl;
	}
	return 0;
}
