
#include <iostream>
using namespace std;

template<typename T>   // class or typename
void print(T n){
	cout << "template " << n << endl;
}

void print(int value){
	cout << "Non template " << value << endl;
}

template<typename T>   // class or typename
void show(){
	cout << T() << endl;
}

int main() {

	print<string>("Hello");
	print<int>(5);

	print(6); //non template version
	print<>(6); // template version

	show<double>();

	return 0;
}
