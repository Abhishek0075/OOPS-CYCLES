#include <iostream>
using namespace std;
const int size=3;
class vector{
    int v[size];
    public:
    vector();
    vector(int *x);
    friend vector operator *(vector a,vector b);
    friend istream & operator >>(istream &,vector &);
    friend ostream & operator <<(ostream &,vector &);
};
vector::vector(){
    for(int i=0;i<size;i++){
        v[i]=0;
    }
}
vector::vector(int *x){
    for(int i=0;i<size;i++){
        v[i]=x[i];
    }
}
vector operator *(vector a,vector b){
    vector c;
    for(int i=0;i<size;i++){
        c.v[i]=a.v[i]*b.v[i];
    }
    return c;
}
ostream & operator <<(ostream &dout,vector &b){
    dout<<"("<<b.v[0];
    for(int i=1;i<size;i++){
        dout<<", "<<b.v[i];
    }
    dout<<")";
    return (dout);
}
istream & operator >>(istream &din,vector &b){
    for(int i=0;i<size;i++){
        cout<<">> ";
        din>>b.v[i];
    }
    return (din);
}
int main(){
    vector m,n,product;
    int x=1;
    while (x==1){
        cout<<"Enter elements of vector m "<<endl;
        cin>>m;
        cout<<"Enter elements of vector n "<<endl;
        cin>>n;
        cout<<endl;
        cout<<"m = "<<m<<endl;
        cout<<"n = "<<n<<endl;
        cout<<endl;
        product=m*n;
        cout<<"m*n = "<<product<<endl;
        cout<<"*** 1 to continue and any other keys to EXIT ***"<<endl;
        cout<<" >> ";
        cin>>x;
        if(x!=1){
            break;
        }
    } 
    cout<<"********Thank you********"<<endl;
    return 0;
}
