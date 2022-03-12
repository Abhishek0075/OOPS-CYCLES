//============================================================================
// Name        : Cycle.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
//============================================================================
// Name        : test3.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
const int m=100;
class items{
	int itemcode[m];
	float itemprice[m];
	int count;
public:
	void CNT(){
		count=0;
	}
	void additem(){
		cout<<"Enter item code : ";
		cin>>itemcode[count];
		cout<<"Enter the item price : ";
		cin>>itemprice[count];
		count++;
	}
	void sumup(){
		float sum=0;
		for(int i=0;i<count;i++){
			sum=sum+itemprice[i];
		}
		cout<<"===================="<<endl<<"TOTAL PRICE = "<<sum<<endl;
	}
	void displayitems(){
		int j=0;
		for(int i=0;i<count;i++){
			if(itemprice[i]>0){
				j=j+1;
				cout<<"=======ITEM "<<j<<"======="<<endl;
				cout<<"Code : "<<itemcode[i]<<endl;
				cout<<"Price : "<<itemprice[i]<<endl;
			}
		}
	}
	void remove(){
		int x;
		cout<<"Enter the code to be deleted :";
		cin>>x;
		for(int i=0;i<count;i++){
			if(itemcode[i]==x){
				itemprice[i]=0;
			}
		}
	}
};
int main() {
	items order;
	int x=2;
	order.CNT();
	while(x>=1 and x<=7){
		cout<<"==========================SHOPPING LIST==============================="<<endl;
		cout<<"      1       : ADD ITEM TO THE SHOPPING LIST"<<endl;
		cout<<"      2       : REMOVE ITEM FROM THE SHOPPING LIST"<<endl;
		cout<<"      3       : DISPLAY ITEMS IN THE SHOPPING LIST"<<endl;
		cout<<"      4       : DISPLAY ITEMS WITH THE TOTAL COST IN THE SHOPPING LIST"<<endl;
		cout<<"ANY OTHER KEY : QUIT THIS PROCESS"<<endl;
		cout<<"ENTER YOUR INPUT"<<endl<<">>>";
		cout<<"\n===================="<<endl;
		if(x==1){
			order.additem();
		}else if(x==2){
			order.remove();
		}else if(x==3){
			order.displayitems();
		}else if(x==4){
			order.displayitems();
			order.sumup();
		}else{
			cout<<"THANK YOU"<<endl;
		}
	}
	return 0;
}

