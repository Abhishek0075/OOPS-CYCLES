//============================================================================
// Name        : Cycle.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class matrix{
	int **p;
	int d1,d2;
public:
	matrix(int x,int y);
	void getelement(int i,int j,int value){
		p[i][j]=value;
	}
	int putelement(int i,int j){
		return (p[i][j]);
	}
	~matrix();
};
matrix::~matrix(){
	for(int i=0;i<d1;i++){
		delete p[i];
		delete p;
		cout<<"Deleted"<<endl;
	}
}
matrix::matrix(int x,int y){
	d1=x;
	d2=y;
	p=new int *[d1];
	for(int i=0;i<d1;i++){
		p[i]=new int [d2];
	}
}
int main() {
	int m,n;
	cout<<"Enter the size of matrix : ";
	cin>>m>>n;
	matrix A(m,n);
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
	return 0;
}
