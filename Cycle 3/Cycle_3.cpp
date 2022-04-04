#include<iostream>
using namespace std;
int main(){
    float num1,num2;
    cout<<".............FIND a/(a-b)............."<<endl;
    cout<<"Enter a and b numbers :- "<<endl;
    cout<<">>> ";
    cin>>num1;
    cout<<">>> ";
    cin>>num2;
    float x=num1-num2;
    try{
        if(x!=0){
            cout<<"Result of a/(a-b): "<<(num1/x)<<endl;
        }else{
            throw(x);
        }
    }catch(float i){
        cout<<"Exception caught : denominator = "<<x<<endl;
    }
    cout<<"................END..............."<<endl;

}