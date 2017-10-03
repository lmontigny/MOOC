
#include <iostream>
#include <exception>
using namespace std;

void goesWrong(){
	bool err1 = true;
	bool err2 = false;

	if(err1){
		throw bad_alloc();
	}

	if(err2){
		throw exception();
	}
}

int main() {
		try{
			goesWrong();
		}
		// Put sub-classes first
		catch(bad_alloc &e){
			cout << e.what() << endl;
		}
		catch(exception &e){
			cout << e.what() << endl;
		}

		return 0;
}
