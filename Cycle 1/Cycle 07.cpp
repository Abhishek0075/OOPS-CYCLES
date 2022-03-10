#include <iostream>
using namespace std;

class matrix
{
	int **m;
	int row,column;
public:
	matrix(){};
	matrix(int x, int y);
	void input(int &i,int &j,int &value)
	{
		m[i][j]=value;
	}
	int get_matrix(int, int);
	void matrix_add(matrix &, matrix &);
	void matrix_mult(matrix &, matrix &);
	void matrix_transpose(matrix);
	int matrix_trace(int);
};

matrix::matrix(int x, int y)
{
	row=x;
	column=y;
	m=new int *[row];
	for(int i=0;i<row;i++)
	{
		m[i]=new int[column];
	}
}

int matrix::get_matrix(int i, int j)
{
	return(m[i][j]);
}

void matrix::matrix_add(matrix &a, matrix &b)
{
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			m[i][j]=a.m[i][j]+b.m[i][j];
			cout<<m[i][j]<<"  ";
		}
		cout<<"\n";
	}
}

void matrix::matrix_mult(matrix &a, matrix &b)
{
	for(int i=0;i<a.row;i++)
	{
		for(int j=0;j<b.column;j++)
		{
			for(int k=0;k<b.row;k++)
			{
				m[i][j]=m[i][j]+a.m[i][k]*b.m[k][j];
			}cout<<m[i][j];
		}
		cout<<endl;
	}
}

void matrix::matrix_transpose(matrix a)
{
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<row;j++)
		{
			int temp=a.m[j][i];
			cout<<temp<<"  ";
		}
		cout<<endl;
	}
}

int matrix::matrix_trace(int n){
	int sum=0;
	for(int i=0;i<n;i++){
		sum=sum+m[i][i];
	}
	return sum;
}
int main() {
	int row1, row2, column1, column2,value;
	cout<<"Enter the number of rows and coloum of first matrix : ";
	cin>>row1>>column1;
	matrix m1(row1,column1);
	cout<<"Enter the element in the matrix row by row : ";
	for(int i=0;i<row1;i++){
		for(int j=0;j<column1;j++){
			cin>>value;
			m1.input(i, j, value);
		}
	}
	cout<<"Enter the row and coloum of second matrix :\n ";
	cin>>row2>>column2;
	matrix m2(row2,column2);
	cout<<"Enter the elements in the matrix row by row : \n";
        int x2;
	for(int i2=0;i2<row2;i2++)
	{
	    cout<<"Enter row "<<1+1<<endl;
		for(int j2=0;j2<column2;j2++)
		{
			cin>>value;
			m2.input(i2, j2, x2);
		}
	}
	if(row1==row2 and column1==column2)
	{
		matrix S1(row1,column1);
		S1.matrix_add(m1, m2);
	}
	else
		cout<<"Matrix with different dimension";
	if(column1==row2)
	{
		matrix S2(row1,column2);
		cout<<"Product of the matrix : ";
		S2.matrix_mult(m1, m2);
	}
	cout<<"Transpose of matrix : ";
	matrix T(column1,row1);
	T.matrix_transpose(m1);
	if(row1==column1)
	cout<<"Trace of matrix : ";
	int trace=m1.matrix_trace(row1);
   	cout<<trace<<endl;

	return 0;
}
