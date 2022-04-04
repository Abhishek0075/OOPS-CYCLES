#include<iostream>
using namespace std;
class base1{
    int a;
    public:
    base1(int x){
        a=x;
        cout<<">>> Base 1 constructor called "<<endl;
    }
    void show_base1(){
        cout<<"* private member in base1 = "<<a<<endl;
    }
};
class der_b1:public base1{
    int b;
    public:
    der_b1(int x,int y):base1(x){
        b=y;
        cout<<">>> Constructor of 1st derived class of base 1  called "<<endl;
    }
    void show_der_b1(){
        cout<<"* private member in der_b1 = "<<b<<endl;
    }
};
class base2{
    int c;
    public:
    base2(int x){
        c=x;
        cout<<">>> Constructor of base 2  called "<<endl;
    }
    void show_base2(){
        cout<<"* private member in base2 = "<<c<<endl;
    }
};
class final_derived:public base2,public der_b1{
    int d;
    public:
    final_derived(int a,int b,int c,int e):der_b1(a,b),base2(c){
        d=e;
        cout<<">>> Constructor of final derived class  called "<<endl;
    }
    void show_final(){
        cout<<"* private member in final derived class = "<<d<<endl;
    }
};



int main(){
    int num1,num2,num3,num4;
    cout<<"!!!! Enter 4 values for constructor i.e :- \n* First value to base_1 private member"<<endl;
    cout<<"* Second value to derived class of base_1 private member"<<endl;
    cout<<"* Third value to base_2 private member"<<endl<<"* Fourth value to final derived class private member"<<endl;
    cout<<endl<<">>> ";
    cin>>num1;
    cout<<endl<<">>> ";
    cin>>num2;
    cout<<endl<<">>> ";
    cin>>num3;
    cout<<endl<<">>> ";
    cin>>num4;
    cout<<"\n";
    final_derived f(num1,num2,num3,num4);
    f.show_base1();
    f.show_der_b1();
    f.show_base2();
    f.show_final();
    return 0;
}