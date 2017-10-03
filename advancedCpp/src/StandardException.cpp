//============================================================================
// Name        : AdvancedCpp.cpp
// Author      : lmontigny
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class CanGoWrong {
public:
		CanGoWrong(){
			char *pMem = new char[7777777777777777777];
			delete [] pMem;
		}
};

int main() {
		try{
			CanGoWrong wrong;
		}
		catch(bad_alloc &e){
				cout << "Caught exception " << e.what() << endl;
		}

		cout << "Still running" << endl;
		return 0;
}
