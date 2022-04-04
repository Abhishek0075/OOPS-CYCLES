#include<iostream>
using namespace std;

template<class T>
class calculator{
    T num1,num2;
    public:
    calculator(T a,T b){
        num1=a;
        num2=b;
    }
    void show(void){
        cout<<">> Number 1 : "<<num1<<endl<<">> Number 2 : "<<num2<<endl;
        cout<<"   "<<num1<<" + "<<num2<<" = "<<sum()<<endl;
        cout<<"   "<<num1<<" - "<<num2<<" = "<<difference()<<endl;
        cout<<"   "<<num1<<" * "<<num2<<" = "<<product()<<endl;
        cout<<"   "<<num1<<" / "<<num2<<" = "<<quotient()<<endl;
    }
    T sum(){
        return (num1+num2);
    }
    T difference(){
        return (num1-num2);
    }
    T product(){
        return (num1*num2);
    }
    T quotient(){
        return (num1/num2);
    }
};
int main(){
    int x=1,n1,n2;
    float a,b;
    while(x==1 or x==2){
        cout<<"==========================================="<<endl;
        cout<<"* Press 1 for integer operations"<<endl;
        cout<<"* Press 2 for decimal operations"<<endl;
        cout<<"* Press any key other than this to EXIT"<<endl;
        cin>>x;
        if(x==1){
            cout<<"Enter the integers to be operated : "<<endl;
            cout<<">>> ";
            cin>>n1;
            cout<<">>> ";
            cin>>n2;
            calculator<int>cal_1(n1,n2);
            cal_1.show();
        }else if(x==2){
            cout<<"Enter the decimal numbers to be operated : "<<endl;
            cout<<">>> ";
            cin>>a;
            cout<<">>> ";
            cin>>b;
            calculator<float>cal_2(a,b);
            cal_2.show();
        }else{
            break;
        }
        cout<<"\t--------DO YOU WANT TO CONTINUE--------\n";
        cout<<"press 1 to continue or any other key to exit\n";
        int y;
        cin>>y;
        if(y!=1){
            break;
        }
    }
    cout<<"-----------Thank you for using-----------"<<endl;
    return 0;
}