#include <iostream>
using namespace std;
class complex{
	float real,imag;
public:
	void asknum(){
		cout<<"Enter real and imaginary part : "<<endl;
		cin>>real;
		cin>>imag;
	}
	friend complex sum(complex,complex);
	void display(){
		cout<<">> The complex number is "<<real;
		if(imag<0){
			cout<<imag<<"j"<<endl;
		}else{
			cout<<" + "<<imag<<"j"<<endl;
		}
	}
};
complex sum(complex c1,complex c2){
	complex c3;
	c3.real=c1.real+c2.real;
	c3.imag=c1.imag+c2.imag;
	return c3;
}
int main(){
	complex A,B,C;
	int x=1;
	while(x==1){
		A.asknum();
		A.display();
		B.asknum();
		B.display();
		C=sum(A,B);
		cout<<"--------SUM--------"<<endl;
		C.display();
		cout<<"----------------------"<<endl;
		cout<<"*******Press 1 to continue or other key to exit*******"<<endl;
		cin>>x;
		if(x!=1){
			break;
		}
	}
	cout<<"**********Thank you for using**********"<<endl;
	
	return 0;
}


