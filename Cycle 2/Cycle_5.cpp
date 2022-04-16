#include<iostream>
using namespace std;
class supplier{
    int num;
    public:
    supplier(int x){
        num=x;
        cout<<">>> Supplier constructor called "<<endl;
    }
    void show_suppliers(){
        cout<<"* Number of suppliers = "<<num<<endl;
    }
};
class raw:public supplier{
    int amount;
    public:
    raw(int x,int y):supplier(x){
        amount=y;
        cout<<">>> Raw constructor called "<<endl;
    }
    void show_raw(){
        cout<<"* Amount of raw materials = "<<amount<<endl;
    }
};
class factories{
    int no;
    public:
    factories(int x){
        no=x;
        cout<<">>> Factories constructor called "<<endl;
    }
    void show_factories(){
        cout<<"* Number of factories = "<<no<<endl;
    }
};
class product:public factories,public raw{
    int out;
    public:
    product(int a,int b,int c,int e):raw(a,b),factories(c){
        out=e;
        cout<<">>> Product constructor called "<<endl;
    }
    void show_product(){
        cout<<"* Number of products produced = "<<out<<endl;
    }
};
int main(){
    int num1,num2,num3,num4;
    cout<<"!!!! Enter 4 values for constructor i.e :- \n* First value = Number of suppliers"<<endl;
    cout<<"* Second value = Amount of raw materials"<<endl;
    cout<<"* Third value = Number of factories"<<endl<<"* Fourth value = Number of products"<<endl;
    cout<<">>> ";
    cin>>num1;
    cout<<">>> ";
    cin>>num2;
    cout<<">>> ";
    cin>>num3;
    cout<<">>> ";
    cin>>num4;
    cout<<"\n";
    product f(num1,num2,num3,num4);
    cout<<endl;
    f.show_suppliers();
    f.show_raw();
    f.show_factories();
    f.show_product();
    return 0;
}