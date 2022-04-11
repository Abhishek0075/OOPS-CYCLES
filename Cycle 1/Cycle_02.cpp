//============================================================================
// Name        : 1.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include <cmath>
using namespace std;
float area(float);
int area(int);
float area(float,float);
float area(int,int,int);
float area(float,float,float);


float area(float a){ //Circle
	return 3.146*(a*a);
}
int area(int a){  //square
	return a*a;
}
float area(float a,float b){  //rectangle
	return a*b;
}
float area(int a,int b,int c){ //Triangle
    float s,area;
	s=float(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
	return area;
}
float area(float a,float b,float c){ //Trapezium
	if(b>c){
		return (0.5*a)*(b-c);
	}else{
		return (0.5*a)*(c-b);
	}
}

int main() {
    int x=3,a,b,c,y;
    float r,s,t;
    while (x<=5 && x>0) {
        cout<<"Enter 1 for area of square"<<endl<<"Enter 2 for area of Circle"<<endl<<"Enter 3 for area of Triangle"<<endl;
        cout<<"Enter 4 for area of rectangle "<<endl<<"Enter 5 for area of trapezium"<<endl<<"Enter any number other than this to exit"<<endl<<">>> ";
        cin>>x;
        if (x==1){
        	cout<<"=====================SQUARE====================="<<endl;
            cout<<"Enter one side of the square"<<endl<<">>> ";
            cin>>a;
            cout<<"Area of the square = "<<area(a)<<endl;
        }else if(x==2){
        	cout<<"=====================CIRCLE====================="<<endl;
            cout<<"Enter radius of the circle"<<endl<<">>> ";
            cin>>r;
            cout<< "Area of circle = "<<area(r)<<endl;
        }else if(x==3){
        	cout<<"=====================TRIANGLE====================="<<endl;
            cout<<"Enter sides of the triangle(All sides in integer)"<<endl<<">>> ";
            cin>>a;
            cout<<">>> ";
            cin>>b;
            cout<<">>> ";
            cin>>c;
            cout<<endl<<"Area of triangle = "<<area(a,b,c)<<endl;
        }else if(x==4){
        	cout<<"=====================RECTANGLE====================="<<endl;
            cout<<"Enter sides of the rectangle"<<endl<<">>> ";
            cin>>r;
            cout<<">>> ";
            cin>>s;
            cout<<endl<<"Area of rectangle = "<<area(r,s)<<endl;
        }else if(x==5){
        	cout<<"=====================TRAPEZIUM====================="<<endl;
            cout<<"Enter the perpendicular distance between the parallel sides "<<endl;
            cout<<">>> ";
            cin>>r;
            cout<<"Enter the lengths of parallel sides of the trapezium"<<endl;
            cout<<">>> ";
            cin>>s;
            cout<<">>> ";
            cin>>t;
            cout<<"Area of trapezium = "<<area(r,s,t)<<endl;
        }else{
            cout<<"EXIT";
            break;
        }
        cout<<"Enter 1 to CONTINUE or any other key to EXIT"<<endl<<">>> ";
        cin>>y;
        if(y==1){

        }else{
        	cout<<"THANK YOU"<<endl;
        	break;
        }
    }
	return 0;
}

