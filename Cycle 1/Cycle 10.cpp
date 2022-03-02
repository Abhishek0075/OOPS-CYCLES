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
		cout<<"============================"<<endl<<"TOTAL PRICE = "<<sum<<endl;
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
	order.CNT();
	order.additem();
	order.additem();
	order.additem();
	order.remove();
	order.displayitems();
	order.sumup();
	return 0;
}


