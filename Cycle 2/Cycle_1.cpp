#include<iostream>
#include<cmath>
using namespace std;
class vector{
    float x,y,z;
    double magnt;
    public:
    vector(){
        x=0;
        y=0;
        z=0;
    }
    vector(float a,float b,float c){
        x=a;
        y=b;
        z=c;
    }
    double mag(){
        magnt=sqrt((x*x)+(y*y)+(z*z));
        return magnt;
    }
    void display(){
        cout<<x<<"i";
        if(y<0){
            cout<<" -"<<y<<"j";
        }else{
            cout<<" +"<<y<<"j";
        }
        if(z<0){
            cout<<" -"<<z<<"z";
        }else{
            cout<<" +"<<z<<"z";
        }
    }
    friend  int operator==(vector &a,vector &b);
    friend  int operator!=(vector &a,vector &b);
    friend  int operator<(vector &a,vector &b);
    friend  int operator<=(vector &a,vector &b);
    friend  int operator>(vector &a,vector &b);
    friend  int operator>=(vector &a,vector &b);
};
 int operator==(vector &a,vector &b){
    if((a.mag()==b.mag())){
        return 1;
    }else{
        return 0;
    }
}
 int operator!=(vector &a,vector &b){
    if((a.mag())!=(b.mag())){
        return 1;
    }else{
        return 0;
    }
}
int operator <(vector &a,vector &b){
    if((a.mag())< (b.mag())){
        return 1;
    }else{
        return 0;
    }
}
int operator <=(vector &a,vector &b){
    if((a.mag())<=(b.mag())){
        return 1;
    }else{
        return 0;
    }
}
int operator >(vector &a,vector &b){
    if((a.mag())>(b.mag())){
        return 1;
    }else{
        return 0;
    }
}
int operator >=(vector &a,vector &b){
    if((a.mag())>(b.mag())){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    int x;
    float a,b,c,d,e,f;
    x=3;
    while(x>1 and x<6){
        cout<<"===========SELECT YOUR OPERATION==========="<<endl;
        cout<<"1 for =="<<endl<<"2 for !="<<endl<<"3 for <"<<endl;
        cout<<"4 for <="<<endl<<"5 for >"<<endl<<"6 for >="<<endl;
        cout<<"Any other for EXIT"<<endl;
        cout<<">>> ";
        cin>>x;
        if(x>6){
            cout<<"==========THANK YOU FOR USING==========";
            break;
        }
                
        cout<<"Enter the values of vector 1 : "<<endl;
        cin>>a>>b>>c;
        vector A(a,b,c);
        
        cout<<"Enter the values of vector 2 : "<<endl;
        cin>>d>>e>>f;
        vector B(d,e,f);
        if(x==1){
            if(A==B){
                cout<<"==========RESULT=========="<<endl;
                A.display();
                cout<<" == ";
                B.display();
            }else{
                cout<<"==========RESULT=========="<<endl;
                A.display();
                cout<<" != ";
                B.display();
            }
        }
        else if(x==2){
            if(A!=B){
                cout<<"==========RESULT=========="<<endl;
                A.display();
                cout<<" != ";
                B.display();
                
            }else{
                cout<<"==========RESULT=========="<<endl;
                A.display();
                cout<<" == ";
                B.display();
            }
        }
        else if(x==3){
            if(A<B){
                cout<<"==========RESULT=========="<<endl;
                A.display();
                cout<<" < ";
                B.display();
            }else{
                cout<<"==========RESULT=========="<<endl;
                A.display();
                cout<<" >= ";
                B.display();
            }
        }
        else if(x=4){
            if(A<=B){
                cout<<"==========RESULT=========="<<endl;
                A.display();
                cout<<" <= ";
                B.display();
            }else{
                cout<<"==========RESULT=========="<<endl;
                A.display();
                cout<<" > ";
                B.display();
            }
        }
        else if(x==5){
            if(A>B){
                cout<<"==========RESULT=========="<<endl;
                A.display();
                cout<<" > ";
                B.display();
            }else{
                cout<<"==========RESULT=========="<<endl;
                A.display();
                cout<<" <= ";
                B.display();
            }
        }
        else if(x==6){
            cout<<"==========RESULT=========="<<endl;
            if(A>=B){
                A.display();
                cout<<" >= ";
                B.display();
            }else{
                cout<<"==========RESULT=========="<<endl;
                A.display();
                cout<<" > ";
                B.display();
            }
        }
    int y;
    cout<<"\nPRESS 1 TO CONTINUE OR ANY OTHER TO EXIT"<<endl;
    cin>>y;
    if(y!=1){
        cout<<"==========THANK YOU FOR USING==========";
        break;
    }
    } 
    
    return 0;
}