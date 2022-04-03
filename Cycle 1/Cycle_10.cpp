
#include <iostream>
using namespace std;
int count=0;
class items{
	int itemcode;
	float itemprice;
public:
	void additem();
	void remove();
	void sumup();
	void displayitems();
};
items prdt[100];
void items:: additem(){
	cout<<"============ADD ITEM==========="<<endl;
		cout<<"Enter item code : ";
		cin>>itemcode;
		cout<<"Enter the item price : ";
		cin>>itemprice;
		count++;
	}

void items::sumup(){
	float sum=0;
	for(int i=0;i<count;i++){
		sum=sum+prdt[i].itemprice;
	}
	cout<<"============================"<<endl<<"TOTAL PRICE = "<<sum<<endl;
}
void items::remove(){
	cout<<"============REMOVE ITEM==========="<<endl;
	int x;
	cout<<"Enter the code to be deleted :";
	cin>>x;
	for(int i=0;i<count;i++){
		if(prdt[i].itemcode==x){
			prdt[i].itemprice=0;
		}
	}
}
void items::displayitems(){
	int j=0;
	for(int i=0;i<count;i++){
		if(prdt[i].itemprice>0){
			j=j+1;
			cout<<"=======ITEM "<<j<<"======="<<endl;
			cout<<"Code : "<<prdt[i].itemcode<<endl;
			cout<<"Price : "<<prdt[i].itemprice<<endl;
		}
	}
}
int main() {
	int x=3,y;
	while(x>=1 and x<=5){
				cout<<"=======================SHOPPING LIST======================="<<endl;
				cout<<"\tNUMBER        PROCESS"<<endl;
				cout<<"\t1 	 : Add an item ";
				cout<<"\n\t2 	 : Delete an item";
				cout<<"\n\t3 	 : Display all items";
				cout<<"\n\t4 	 : Show the items with the total sum of prices";
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
		}else{
			cout<<"********Thank You********"<<endl;
			break;
		}
		cout<<"========================================="<<endl;
		cout<<"    **DO YOU WANT TO CONTINUE**"<<endl<<"Press 1 to continue or any other to exit  "<<endl<<">>>> ";
		cin>>y;
		if(y==1){

		}else{
			cout<<"********Thank You********"<<endl;
			break;
		}
	}
	return 0;
}


