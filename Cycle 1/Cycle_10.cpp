#include <iostream>
using namespace std;
int count=0;
class items{
	int itemcode;
	float itemprice;
	int stock;
	string name;
public:
	void additem();
	void remove();
	void sumup();
	void displayitems();
	void stock_add();
	void purchase();
	
};
items prdt[100];
void items::purchase(){
    cout<<"============PURCHASE STOCKS==========="<<endl;
	int x,y;
	cout<<"Enter the code of item to buy stocks of : ";
	cin>>x;
	for(int i=0;i<count;i++){
		if(prdt[i].itemcode==x){
		    cout<<"The number of stocks in the inventory : "<<prdt[i].stock<<endl;
		    cout<<"Enter number of stocks to be purchased : "<<endl<<">>> ";
		    cin>>y;
		    if(prdt[i].stock>=y){
    			prdt[i].stock=prdt[i].stock-y;
    			cout<<">> New number of stocks : "<<prdt[i].stock<<endl;
				break;
		    }else{
		        cout<<"!!!! The number of stocks in the inventory in lesser than the need !!!!\n";
		    }
		}

	}

}
void items::stock_add(){
    cout<<"============ADD STOCKS==========="<<endl;
	int x,y;
	cout<<"Enter the code of item to which stocks to be added : ";
	cin>>x;
	for(int i=0;i<count;i++){
		if(prdt[i].itemcode==x){
		    cout<<"Enter number of stocks to be added : "<<endl<<">>> ";
		    cin>>y;
			prdt[i].stock=prdt[i].stock+y;
			cout<<">> New number of stock : "<<prdt[i].stock<<endl;
			break;
		}
	}
}
void items:: additem(){
	cout<<"============ADD ITEM==========="<<endl;
	cout<<"Enter item name : ";
	cin>>name;
	cout<<"Enter item code : ";
	cin>>itemcode;
	cout<<"Enter the item price : ";
	cin>>itemprice;
	cout<<"Enter the item stock : ";
	cin>>stock;
	count++;
	}

void items::sumup(){
	float sum=0;
	for(int i=0;i<count;i++){
		sum=sum+(prdt[i].itemprice*prdt[i].stock);
	}
	cout<<"============================"<<endl<<"TOTAL PRICE = "<<sum<<endl;
}
void items::remove(){
	cout<<"============REMOVE ITEM==========="<<endl;
	int x;
	cout<<"Enter the code to be deleted : ";
	cin>>x;
	for(int i=0;i<count;i++){
		if(prdt[i].itemcode==x){
			prdt[i].itemprice=0;
			break;
		}
	}
	

}
void items::displayitems(){
	int j=0;
	for(int i=0;i<count;i++){
		if(prdt[i].itemprice>0){
			j=j+1;
			cout<<"=======ITEM "<<j<<"======="<<endl;
			cout<<"Name : "<<prdt[i].name<<endl;
			cout<<"Code : "<<prdt[i].itemcode<<endl;
			cout<<"Price : "<<prdt[i].itemprice<<endl;
			cout<<"Stock : "<<prdt[i].stock<<endl;
		}
	}
}
int main() {
	int x=3,y;
	while(x>=1 and x<=5){
				cout<<"=======================SHOPPING LIST======================="<<endl;
				cout<<"\tNUMBER        PROCESS"<<endl;
				cout<<"\t1 	 : Add new item ";
				cout<<"\n\t2 	 : Delete an item";
				cout<<"\n\t3 	 : Display all items";
				cout<<"\n\t4 	 : Show the items with the total sum of prices";
				cout<<"\n\t5 	 : Add stocks to an item";
				cout<<"\n\t6 	 : Purchase an item";
				cout<<"\n\tANY 	 : Quit";
				cout<<"\n\tENTER YOUR INPUT >>> ";
				cin>>x;
		if(x==1){
			prdt[count].additem();
		}else if(x==2){
			prdt[count].remove();
		}else if(x==3){
			prdt[count].displayitems();
		}else if(x==4){
			prdt[count].displayitems();
			prdt[count].sumup();
		}else if(x==5){
		    prdt[count].stock_add();
		}else if(x==6){
		    prdt[count].purchase();
		}else{
			cout<<"********Thank You********"<<endl;
			break;
		}
		cout<<"========================================="<<endl;
		cout<<"    **DO YOU WANT TO CONTINUE**"<<endl<<"Press 1 to continue or any other to exit  "<<endl<<">>>> ";
		cin>>y;
		if(y==1){

		}else{
			cout<<"*************THANK YOU*************"<<endl;
			break;
		}
	}
	return 0;
}

