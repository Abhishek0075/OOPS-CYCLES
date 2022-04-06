#include<iostream>
using namespace std;
class matrix{
    int d1,d2;
    int **p;
    public:
    matrix(){}
    ~matrix(){
    	for(int i=0;i<d1;i++){
    		delete p[i];
    	}
    	delete p;
    }
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
    void matrix_add(matrix &a,matrix &b);
    void matrix_mult(matrix &a,matrix &b);
    void matrix_trace(void);
	void matrix_transpose(void);
};
void matrix::matrix_transpose(void){
    int temp=0;
    for(int i=0;i<d2;i++){
        for(int j=0;j<d1;j++){
            temp=p[j][i];
            cout<<temp<<" ";
        }
        cout<<endl;
    }
}
void matrix:: matrix_add(matrix &a,matrix &b){
    int sum=0;
    for(int i=0;i<a.d1;i++){
        for(int j=0;j<a.d2;j++){
            sum=a.p[i][j]+b.p[i][j];
            cout<<sum<<" ";
        }
        cout<<endl;
    }
}
void matrix:: matrix_mult(matrix &a,matrix &b){
    int p_sum;
    for(int i=0;i<a.d1;i++){
        for(int j=0;j<b.d2;j++){
            p_sum=0;
            for(int k=0;k<a.d2;k++){
                p_sum=p_sum+a.p[i][k]*b.p[k][j];
                p[i][j]=p_sum;
            }
        }
    }
    for(int i=0;i<a.d1;i++){
        for(int j=0;j<b.d2;j++){
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
}
void matrix::matrix_trace(void){
    int sum=0;
    for(int i=0;i<d1;i++){
        sum=sum+p[i][i];
    }
    cout<<">> Trace = "<<sum<<endl;
}
int main(){
    int value1,value2,a,b,c,d,x=1;
    matrix C,D;
    while(x>=1 or x<=6){
        int breaker;
        cout<<"       DO YOU WANT CONTINUE ?"<<endl;
        cout<<" 1 to CONTINUE and other keys to EXIT"<<endl;
        cin>>breaker;
        if(breaker!=1){
            break;
        }
        cout<<"Enter the dimensions of matrix 1 :-\n";
        cin>>a>>b;
        matrix A(a,b);
        cout<<"Enter values of matrix 1 :-"<<endl;
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                cin>>value1;
                A.in_element(i,j,value1);
            }
        }
        cout<<"Enter the dimensions of matrix 2 :-\n";
        cin>>c>>d;
        matrix B(c,d);
        cout<<"Enter values of matrix 2 :-"<<endl;
        for(int i=0;i<c;i++){
            for(int j=0;j<d;j++){
                cin>>value2;
                B.in_element(i,j,value2);
            }
        }
        cout<<endl;
		cout<<"===============SELECT YOUR OPERATION==============="<<endl;
        cout<<"Enter 1 for addition"<<endl<<"Enter 2 for multiplication";
        cout<<endl<<"Enter 3 for trace of both the matrices "<<endl<<"Enter 4 for transpose of both the matrices  "<<endl;
        cout<<"Enter any other key to EXIT"<<endl;
        cin>>x;
        if(x>=1 or x<=4){
            if(x==1){
                if(a==c and b==d){
                    matrix C(a,d);
                    cout<<endl;
                    cout<<"===========| SUM |==========="<<endl;
                    C.matrix_add(A,B);
				}else{
					cout<<"!! The dimensions doesn't support addition of matrices !!"<<endl;
				}
            }else if(x==2){
                if(b==c){
                    matrix C(a,d);
                    cout<<endl;
					cout<<"===========| PRODUCT |==========="<<endl;
                    C.matrix_mult(A,B);
                }else{
                    cout<<"!! The dimensions doesn't support multiplication of matrices !!"<<endl;
                }
            }else if(x==3){
                if(a==b){
                    cout<<"===========| TRACE OF MATRIX 1 |==========="<<endl;
                    A.matrix_trace();
                    cout<<"==========================================="<<endl<<endl;
                }else{
                    cout<<"!! In matrix 1, The dimensions does't support calculating Trace of a matrix !!"<<endl;
                }
                if(c==d){
                    cout<<"===========| TRACE OF MATRIX 2 |==========="<<endl;
                    B.matrix_trace();
                    cout<<"==========================================="<<endl;
                }else{
                    cout<<"!! In matrix 2, The dimensions does't support calculating Trace of a matrix !!"<<endl;
                }
            }else if(x==4){
                cout<<"===========| TRANSPOSE OF MATRIX 1 |==========="<<endl;
				A.matrix_transpose();
                cout<<"\n==============================================="<<endl;
                cout<<"===========| TRANSPOSE OF MATRIX 2 |==========="<<endl;
				B.matrix_transpose();
                cout<<"\n==============================================="<<endl;
            }else{
                break;
            }
        }else{
            break;
        }
    }
    cout<<"*********THANK YOU FOR USING*********"<<endl;
    return 0;
}
