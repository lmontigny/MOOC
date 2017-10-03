
#include <iostream>
using namespace std;

void test() {
	cout << "Hello" << endl;
}

void test(int value){
	cout << "Hello " << value << endl;
}

int test(double value){
	cout << "Hello " << value << endl;
	return value;
}

int main() {
	//test();

	void (*pTest)();
	pTest = test;
	pTest();

	void (*pTest1)() = test;
	pTest1();

	void(*pTest2)(int) = test;
	pTest2(4);

	int(*pTest3)(double) = test;
	int a = pTest3(5.0);

	return 0;
}
