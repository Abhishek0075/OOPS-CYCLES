#include <iostream>
using namespace std;
class Time{
	int seconds,minutes,hours;
public:
	void gettime(){
		cout<<"Enter the time in hh mm ss form :"<<endl;
		cin>>hours;
		cin>>minutes;
		cin>>seconds;
	}
	void sum(Time t1,Time t2){
		seconds=t1.seconds+t2.seconds;
		minutes=seconds/60;
		seconds=seconds%60;
		minutes=minutes+t1.minutes+t2.minutes;
		hours=minutes/60;
		minutes=minutes%60;
		hours=hours+t1.hours+t2.hours;
	}
	void puttime(void){
		cout<<hours<<" hours "<<minutes<<" minutes and "<<seconds<<" seconds"<<endl;
	}
};
int main() {
	Time T1,T2,T3;
	T1.gettime();
	T2.gettime();
	T3.sum(T1,T2);
	cout<<"T1 = ";
	T1.puttime();
	cout<<"T2 = ";
	T2.puttime();
	cout<<"T3 = ";
	T3.puttime();
	return 0;
}
