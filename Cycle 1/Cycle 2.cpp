//============================================================================
// Name        : Cycle.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;
double area(double);
int area(int);
float area(float,float);
float area(int,float);
float area(float,float,float);
int main() {
	cout<< "Area of square = "<<area(10)<<endl;
	cout<< "Area of circle = "<<area(10.5)<<endl;
	cout<<"Area of triangle = "<<area(12,10.1)<<endl;
	cout<<"Area of rectangle = "<<area(11,12)<<endl;
	cout<<"Area trapezium = "<<area(10,10,11)<<endl;
	cout<<"Area = "<<area(10.5,2.5,3.2)<<endl;
	return 0;
}
int area(int a){//square
	return a*a;
}
float area(float a,float b){
	return a*b;
}
float area(int a,float b){
	return 0.5*(a*b);
}
float area(float a,float b,float c){
	if(b>c){
		return (0.5*a)*(b-c);
	}else{
		return (0.5*a)*(c-b);
	}

}
double area(double a){
	return 3.146*(a*a);
}
