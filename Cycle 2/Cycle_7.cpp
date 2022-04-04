#include<iostream>
using namespace std;
class alpha{
    float a;
    public:
    alpha(float x){
        a=x;
        cout<<"Alpha called"<<endl;
    }
    void show_a(void){
        cout<<"a = "<<a<<endl;
    }
};
class beta{
    float b;
    public:
    beta(float x){
        b=x;
        cout<<"Beta called"<<endl;
    }
    void show_b(void){
        cout<<"b = "<<b<<endl;
    }
};
class gamma:public beta,public alpha{
    float c,d;
    public:
    gamma(float m,float n,float x,float y):alpha(m),beta(n){
        c=x;
        d=y;
        cout<<"Gamma called"<<endl;
    }
    void show_cd(void){
        cout<<"c = "<<c<<endl;
        cout<<"d = "<<d<<endl;
    }
};
int main(){
    float num1,num2,num3,num4;
    cout<<"!!!! Enter 4 values for constructor i.e :- \n* First value to alpha private member"<<endl;
    cout<<"* Second value to beta private member"<<endl;
    cout<<"* Third and fourth value to gamma private members"<<endl;
    cout<<endl<<">>> ";
    cin>>num1;
    cout<<endl<<">>> ";
    cin>>num2;
    cout<<endl<<">>> ";
    cin>>num3;
    cout<<endl<<">>> ";
    cin>>num4;
    cout<<"\n";
    cout<<"==================\n";
    gamma g(num1,num2,num3,num4);
    cout<<"==================\n";
    g.show_a();
    g.show_b();
    g.show_cd();
    return 0;
}