#include <iostream>
using namespace std;
class matrix{
	int **p;
	int d1,d2;
public:
	matrix(){} 
	matrix(int x,int y);
	void getelement(int i,int j,int value){
		p[i][j]=value;
	}
	int putelement(int i,int j){
		return (p[i][j]);
	}
	~matrix();
	friend void add_mat(matrix &a,matrix &b);
};
matrix::~matrix(){
	cout<<endl<<"Memory released"<<endl;
	for(int i=0;i<d1;i++){
		delete p[i];
	}
	delete p;

}
matrix::matrix(int x,int y){
	cout<<"Constructor called"<<endl;
	d1=x;
	d2=y;
	p=new int *[d1];
	for(int i=0;i<d1;i++){
		p[i]=new int [d2];
	}
}
void add_mat(matrix &a,matrix &b){
    int temp;
    cout<<"===The sum of matrices==="<<endl<<" ";
    for(int i=0;i<a.d1;i++){
        for(int j=0;j<a.d2;j++){
            temp=a.p[i][j]+b.p[i][j];
            cout<<temp<<" ";
        }
        cout<<endl<<" ";
    }
}

int main() {
	int m,n;
	matrix C;
	cout<<"Enter the size of matrix : ";
	cin>>m>>n;
	matrix A(m,n);
	cout<<"===========Matrix 1===========\n";
	cout<<"Enter the elements row by row"<<endl;
	int value;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>value;
			A.getelement(i,j,value);
		}
	}
	cout<<"Entered matrix : "<<endl;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<A.putelement(i, j)<<"  ";
		}
		cout<<endl;
	}
	matrix B(m,n);
	cout<<"===========Matrix 2===========\n";
	cout<<"Enter the elements row by row"<<endl;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>value;
			B.getelement(i,j,value);
		}
	}
	cout<<"Entered matrix : "<<endl;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<B.putelement(i, j)<<"  ";
		}
		cout<<endl;
	}
	add_mat(A,B);
	
	return 0;
}
