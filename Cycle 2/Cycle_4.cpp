#include<iostream>
using namespace std;
class matrix{
    int d1,d2;
    int **p;
    public:
    matrix(){}
    matrix(int i,int j){
        d1=i;
        d2=j;
        p=new int *[d1];
        for(int k=0;k<d1;k++){
            p[k]=new int [d2];
        }
    }
    void in_element(int i,int j,int value ){
        p[i][j]=value;
    }
    int show_element(int i,int j){
        return p[i][j];
    }
    friend matrix operator +(matrix &a,matrix &b);
    friend matrix operator *(matrix &a,matrix &b);
};
matrix operator +(matrix &a,matrix &b){
    matrix c(a.d1,a.d2);
    for(int i=0;i<a.d1;i++){
        for(int j=0;j<a.d2;j++){
            c.p[i][j]=a.p[i][j]+b.p[i][j];
        }
    }
    return c;
}
matrix operator *(matrix &a,matrix &b){
    matrix c(a.d1,b.d2);
    int p_sum;
    for(int i=0;i<a.d1;i++){
        for(int j=0;j<b.d2;j++){
            p_sum=0;
            for(int k=0;k<a.d2;k++){
                p_sum=p_sum+a.p[i][k]*b.p[k][j];
                c.p[i][j]=p_sum;
            }
        }
    }
    return c;
}
int main(){
    int value1,value2,a,b,c,d,x=1;
    matrix C;
    while(x==1 or x==2){
        cout<<"Enter 1 for addition"<<endl<<"Enter 2 for multiplication";
        cout<<endl<<"Enter any other key to EXIT"<<endl;
        cin>>x;
        if(x<1 or x>2){
            cout<<"************THANK YOU FOR USING************"<<endl;
            break;
        }else{
            cout<<"Enter the dimensions of matrix 1 :-\n";
            cin>>a>>b;
            matrix A(a,b);
            cout<<"Enter the dimensions of matrix 2 :-\n";
            cin>>c>>d;
            matrix B(c,d);
            cout<<"Enter values of matrix 1 :-"<<endl;
            for(int i=0;i<a;i++){
                for(int j=0;j<b;j++){
                    cin>>value1;
                    A.in_element(i,j,value1);
                }
            }
            cout<<"Enter values of matrix 2 :-"<<endl;
            for(int i=0;i<c;i++){
                for(int j=0;j<d;j++){
                    cin>>value2;
                    B.in_element(i,j,value2);
                }
            }
            if(x==1){
                if(a==c and b==d){
                    C=A+B;
                    cout<<endl;
                    for(int i=0;i<a;i++){
                        for(int j=0;j<d;j++){
                            cout<<C.show_element(i,j)<<" ";
                        }
                        cout<<endl;
                    }
                }else{
                    cout<<"The dimensions doesn't support addition of matrices "<<endl;
                }
            }else if(x==2){
                if(b==c){
                    C=A*B;
                    cout<<endl;
                    for(int i=0;i<a;i++){
                        for(int j=0;j<d;j++){
                            cout<<C.show_element(i,j)<<" ";
                        }
                        cout<<endl;
                    }
                }else{
                    cout<<"The dimensions doesn't support multiplication of matrices "<<endl;
                }
            }
        }
    }
    return 0;
}