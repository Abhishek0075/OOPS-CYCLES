//============================================================================
// Name        : Cycle.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class complex{
	float real,imag;
public:
	complex(){}
	complex(int x){
		real=imag=x;
	}
	complex(int x,int y){
		real=x;
		imag=y;
	}
	friend complex sum(complex,complex);
	void display(){
		cout<<"The complex number is "<<real<<" + "<<imag<<"j"<<endl;
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
	float p,q,r;
	cout<<"Enter real and imaginary part : "<<endl;
	cin>>p;
	cin>>q;
	A=complex(p,q);
	A.display();
	cout<<"Enter real and imaginary part : "<<endl;
	cin>>r;
	B=complex(r);
	B.display();
	C=sum(A,B);
	cout<<endl<<"--------SUM--------"<<endl;
	C.display();
	return 0;
}
