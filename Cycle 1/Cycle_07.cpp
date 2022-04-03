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
    friend matrix add_mat(matrix &a,matrix &b);
    friend matrix multi_mat(matrix &a,matrix &b);
    friend int trace_mat(matrix a);
	void transpose(void);
};
void matrix::transpose(void){
    int temp=0;
    for(int i=0;i<d2;i++){
        for(int j=0;j<d1;j++){
            temp=p[j][i];
            cout<<temp<<" ";
        }
        cout<<endl;
    }
}
matrix add_mat(matrix &a,matrix &b){
    matrix c(a.d1,a.d2);
    for(int i=0;i<a.d1;i++){
        for(int j=0;j<a.d2;j++){
            c.p[i][j]=a.p[i][j]+b.p[i][j];
        }
    }
    return c;
}
matrix multi_mat(matrix &a,matrix &b){
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
int trace_mat(matrix a){
    int sum=0;
    for(int i=0;i<a.d1;i++){
        sum=sum+a.p[i][i];
    }
    return sum;
}
int main(){
    int value1,value2,a,b,c,d,x=1;
    matrix C,D;
    while(x>=1 or x<=4){
		cout<<"===============SELECT YOUR OPERATION==============="<<endl;
        cout<<"Enter 1 for addition"<<endl<<"Enter 2 for multiplication";
        cout<<endl<<"Enter 3 for trace"<<endl<<"Enter 4 for transpose"<<endl<<"Enter any other key to EXIT"<<endl;
        cin>>x;
        if(x<1 or x>4){
            cout<<"************THANK YOU FOR USING************"<<endl;
            break;
        }else if(x==1 or x==2){ 
			cout<<"Enter the dimensions of matrix 1 :-\n";
			cin>>a>>b;
			matrix A(a,b);
			cout<<"Enter the dimensions of matrix 2 :-\n";
			cin>>c>>d;
			matrix B(c,d);
            if(x==1){
                if(a==c and b==d){
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
				C=add_mat(A,B);
				cout<<endl;
				cout<<"===========| SUM |==========="<<endl;
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
                    C=multi_mat(A,B);
                    cout<<endl;
					cout<<"===========| PRODUCT |==========="<<endl;
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
        }else{
			if(x==3){
				cout<<"Enter the dimensions of matrix :-\n";
				cin>>a>>b;
				matrix D(a,b);
				if(a==b){
					cout<<"Enter values of matrix :-"<<endl;
					for(int i=0;i<a;i++){
						for(int j=0;j<b;j++){
							cin>>value1;
							D.in_element(i,j,value1);
						}
					}                    
					int result;
					result=trace_mat(D);
					cout<<"===========| TRACE |==========="<<endl;
					cout<<"The trace : "<<endl<<">>> "<<result<<endl;
				}else{
					cout<<"The dimensions does't support calculating Trace of a matrix"<<endl;
				}
			}else if(x==4){
				cout<<"Enter the dimensions of matrix :-\n";
				cin>>a>>b;
				matrix D(a,b);
				cout<<"Enter values of matrix :-"<<endl;
				for(int i=0;i<a;i++){
					for(int j=0;j<b;j++){
						cin>>value1;
						D.in_element(i,j,value1);
					}
				}
				cout<<"===========| TRANSPOSE |==========="<<endl;
				cout<<endl<<"The transpose :\n";
				D.transpose();
			}
        }
    }
    return 0;
}