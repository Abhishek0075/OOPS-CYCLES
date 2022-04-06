#include<iostream>
using namespace std;
class complex{
    float real,img;
    public:
    complex(){
        real=0;
        img=0;
    }
    complex(float x,float y){
        real=x;
        img=y;
    }
    void display(){
        cout<<"Complex number : "<<endl<<">>> ";
        cout<<real;
        if(img<0){
            cout<<" "<<img<<"j";
        }else{
            cout<<" + "<<img<<"j";
        }
        cout<<endl;
    }
    friend complex operator +(complex &a,complex &b);
    friend complex operator *(complex &a,complex &b);
};
complex operator +(complex &a,complex &b){
    complex c;
    c.real=a.real+b.real;
    c.img=a.img+b.img;
    return c;
}
complex operator *(complex &a,complex &b){
    complex c;
    c.real=a.real*b.real-a.img*b.img;
    c.img=a.img*b.real+a.real*b.img;
    return c;
}


int main(){
    float a,b,c,d;
    complex C;
    int x=1,breaker;
    while(x==1  or x==2){
        cout<<"================ OPERATIONS ================";
        cout<<"\nPress 1 for addition of two complex numbers"<<endl;
        cout<<"Press 2 for multiplication of two complex numbers"<<endl;
        cout<<"Any other key to EXIT"<<endl;
        cout<<">>> ";
        cin>>x;
        if(x !=1 and x !=2){
            break;
        }
        cout<<"================Complex number 1================\n";
        cout<<"Enter the real and imaginary part of the complex number : ";
        cin>>a>>b;
        complex A(a,b);
        cout<<"Entered ";
        A.display();
        cout<<"\n================Complex number 2================\n";
        cout<<"Enter the real and imaginary part of the complex number : ";
        cin>>c>>d;
        complex B(c,d);
        cout<<"Entered ";
        B.display();
        if(x==1){
            C=A+B;
            cout<<"=============| SUM |============="<<endl;
            C.display();
        }else if(x==2){
            C=A*B;
            cout<<"=============| PRODUCT |============="<<endl;
            C.display();
        }
        cout<<"********DO YOU WANT TO CONTINUE********"<<endl;
        cout<<"1 to CONTINUE and any other key to EXIT"<<endl<<">>> ";
        cin>>breaker;
        if(breaker==1){

        }else{
            break;
        }
    }
    cout<<"********THANK YOU FOR USING**********"<<endl;
    return 0;
}