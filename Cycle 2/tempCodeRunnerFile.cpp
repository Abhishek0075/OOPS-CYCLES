#include<iostream>
using namespace std;
class student{
    protected:
    int roll_no;
    public:
    void input_no(int x){
        roll_no=x;
    }
    void show_no(){
        cout<<"  =======ROLL NUMBER======"<<endl;
        cout<<"  >> Roll Number : "<<roll_no<<endl;
    }
};
class test:virtual public student{
    protected:
    float exam1,exam2;
    public:
    void input_marks(float x,float y){
        exam1=x;
        exam2=y;
    }
    void show_exam(){
        cout<<"  =======MARKS OF EXAMS======"<<endl;
        cout<<"  >> Exam 1 : "<<exam1<<endl;
        cout<<"  >> Exam 2 : "<<exam2<<endl;
    }
};
class sports:virtual public student{
    protected:
    float grace;
    public:
    void input_grace(float x){
        grace=x;
    }
    void show_grace(void){
        cout<<"  =======GRACE MARK======"<<endl;
        cout<<"  >> Sports grace mark : "<<grace<<endl;
    }
};
class result:public sports,public test{
    protected:
    float total;
    public:
    void show_total(void){
        cout<<"************TOTAL MARK************"<<endl<<endl;
        total=exam1+exam2+grace;
        show_no();
        show_exam();
        show_grace();
        cout<<"  ======================="<<endl;
        cout<<"  >> TOTAL MARK : "<<total<<endl;
    }
};


int main(){
    result std_1;
    int x;
    float a,b,c;
    cout<<"Enter your Roll number : "<<endl;
    cout<<">>> ";
    cin>>x;
    cout<<"Enter marks of 1st and 2nd exam : "<<endl;
    cout<<">>> ";
    cin>>a;
    cout<<">>> ";
    cin>>b;
    while(a>100 or b>100){
        cout<<"      !! INVALID MARKS !!"<<endl;
        cout<<"Enter marks of 1st and 2nd exam : "<<endl;
        cout<<">>> ";
        cin>>a;
        cout<<">>> ";
        cin>>b;
    }
    cout<<"Enter grace mark in sports : "<<endl<<">>> ";
    cin>>c;
    while(c>50){
        cout<<"      !! INVALID MARKS !!"<<endl;
        cout<<"Enter grace mark in sports : "<<endl;
        cout<<">>> ";
        cin>>c;
    }
    std_1.input_no(x);
    std_1.input_marks(a,b);
    std_1.input_grace(c);
    cout<<endl;
    std_1.show_total();
    return 0;
}