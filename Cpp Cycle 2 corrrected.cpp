#include <iostream>
#include <cmath>
using namespace std;
float area(float);
int area(int);
float area(float,float);
double area(int,int,int);
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
double area(int a,int b,int c){ //Triangle
    float s;
    s=float((a+b+c)/2);
    area=pow((s*(s-a)*(s-b)*(s-c)),0.5);
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
    int x,a,b,c;
    float r,s,t;
    while (x<=5 && x>0){
        cout<<"Enter 1 for area of square"<<endl<<"Enter 2 for area of Circle"<<endl<<"Enter 3 for area of Triangle"<<endl;
        cout<<"Enter 4 for area of rectangle "<<endl<<"Enter 5 for area of trapezium"<<endl<<"Enter any number other than this to exit"<<endl;
        cin>>x;
        if (x==1){
            cout<<"Enter one side of the square"<<endl;
            cin>>a;
            cout<<"Area of the square = "<<area(a)<<endl;
        }else if(x==2){
            cout<<"Enter radius of the circle"<<endl;
            cin>>r;
            cout<< "Area of circle = "<<area(r)<<endl;
        }else if(x==3){
            cout>>"Enter sides of the triangle">>endl;
            cin>>a>>b>>c;
            cout<<endl<<"Area of triangle = "<<area(a,b,c)<<endl;
        }else if(x==4){
            cout<<"Enter sides of the rectangle"<<endl;
            cin>>r>>s;
            cout<<endl<<"Area of rectangle = "<<area(r,s)<<endl;
        }else if(x==5){
            cout<<"Enter the perpendicular distance between the parallel sides and then enter the lengths of parallel sidess of the trapezium"<<endl;
            cin>>r>>s>>t;
            cout<<"Area of trapezium = "<<area(r,s,t)<<endl;
        }else{
            cout<<"EXIT"
            break;
        }
    }
	return 0;
}



