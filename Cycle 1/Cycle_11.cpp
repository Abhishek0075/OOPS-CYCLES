#include <iostream>
using namespace std;

class class2;
class class1{
	int value1;
public:
	void entry(){
		int a;
		cout<<"Enter a number : "<<endl;
		cin>>a;
		value1=a;
	}
	void display(){
		cout<<"The number of the 1st class : "<< value1 <<endl;
	}
	friend void exchange(class1 &,class2 &);
};
class class2{
	int value2;
public:
	void entry(){
		int a;
		cout<<"Enter a number : "<<endl;
		cin>>a;
		value2=a;

	}
	void display(){
		cout<<"The number of the 2nd class : "<< value2 <<endl;
	}
	friend void exchange(class1 &,class2 &);
};
void exchange(class1 &a,class2 &b){
	int temp;
	temp=a.value1;
	a.value1=b.value2;
	b.value2=temp;
}
int main(){
	class1 A;
	class2 B;
	A.entry();
	B.entry();
	cout<<"Value before exchange : "<<endl;
	A.display();
	B.display();
	exchange(A,B);
	cout<<"Value after exchange : "<<endl;
	A.display();
	B.display();
	return 0;
}
