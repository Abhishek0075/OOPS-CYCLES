# include <iostream>
using namespace std;
class variable{
    protected:
    float sum;
public:
   virtual void input()=0;
   virtual void add()=0;
   virtual void show()=0;
};
class one_var: public variable{
    float a;
    public:
    void input(void){
        cout<<"Enter a number : ";
        cin>>a;
    }

    void add(void){ 
        sum=a+a;
    }
    void show(void){
        cout<<">>> Sum of same variable = "<<sum<<endl;
    }
};
class two_var: public variable{

    float m,n;
public:
void input(void){
    cout<<"Enter the first number : ";
    cin>>m;
    cout<<"Enter the second number : ";
    cin>>n;
    }
void add(void){ 
    sum=m+n;
    }
void show(void){
    cout<<">>> Sum of two variables = "<<sum<<endl;
    }
};
int main(){
    int x=1;
    variable* vari1;
    while(x==1 or x==2){
        cout<<"++++++++++Calculate sum of different number of numbers++++++++++"<<endl;
        cout<<"Choose any of the following options to continue : "<<endl;
        cout<<"Sum of same number    : 1"<<endl;
        cout<<"Sum of two numbers    : 2"<<endl;
        cout<<"Exit                : Any other"<<endl;
        cin>>x;
        cout<<" "<<endl;
        if(x==1){
            vari1=new one_var;
            vari1->input();
            cout<<" "<<endl;
            vari1->add();
            vari1->show();
            cout<<" "<<endl;
        }else if(x==2){
            vari1=new two_var;
            vari1->input();
            cout<<" "<<endl;
            vari1->add();
            vari1->show();
            cout<<" "<<endl;
        }else{
            break;
        }
        cout<<"*********DO YOU WANT TO CONTINUE*********"<<endl;
        cout<<"PRESS 1 TO CONTINUE OR ANY OTHER TO EXIT"<<endl<<">>> ";
        int y;
        cin>>y;
        if(y==1){
        }else{
            break;
        }
    }
    cout<<"++++++++++++++| THANK YOU |++++++++++++++ "<<endl;
    return 0;
}