//============================================================================
// Name        : AdvancedCpp.cpp
// Author      : lmontigny
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void goWrong(){
	bool error1 = false;
	bool error2 = true;

	if(error1){
		throw "Something wrong";
	}
	if(error2){
		throw string("Something else went wrong");
	}
}

int main() {
	try{
		goWrong();
	}
	catch(int e){
		cout << "Error: " << e << endl;
	}
	catch(char const * e){
		cout << "Error: " << e << endl;
	}
	catch(string e){
		cout << "String Error: " << e << endl;

	}

	cout << "Still running" << endl;
	return 0;
}
