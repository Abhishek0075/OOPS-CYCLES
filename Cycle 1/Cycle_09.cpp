#include <iostream>
using namespace std;
class test{
	int code;
	static int count;
public:
	void setcode(void){
		code=++count;
	}
	void showcode(void){
		cout<<"Object number : "<<code<<endl;
	}
	static void showcount(void){
		cout<<"Total objects now : "<<count<<endl<<endl;
	}
};
int test::count;
int main() {
	test t1,t2,t3;
	t1.setcode();
	t1.showcode();
	test::showcount();
	t2.setcode();
	t2.showcode();
	test::showcount();
	t3.setcode();
	t3.showcode();
	test::showcount();
	return 0;
}

