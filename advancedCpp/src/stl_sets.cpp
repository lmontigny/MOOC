
#include <iostream>
#include <set>
using namespace std;

class Test{
	int id;
	string name;

public:
	Test(): id(0), name(""){}
	Test(int id, string name): id(id), name(name){

	}

	void print() const {
		cout << id << " " << name << endl;
	}

	// other wise it->print don't work
	bool operator<(const Test &other) const{
		return name < other.name;
	}
};

int main() {
	set<int> x;
	x.insert(50);
	x.insert(50);
	x.insert(30);
	x.insert(20);
	x.insert(20); // Keep unique set of value!

	for(set<int>::iterator it=x.begin(); it !=x.end(); it++){
		cout << *it << endl;
	}

	// Way to check if element in the set
	set<int>::iterator itFind = x.find(360);
	if(itFind != x.end()){
		cout << "Found " << *itFind << endl;
	}

	if(x.count(30)){
		cout << "nb Found" << endl;
	}

	set<Test> tests;
	tests.insert(Test(10, "Mike"));
	tests.insert(Test(30, "Joe"));
	tests.insert(Test(20, "Sue"));

	for(set<Test>::iterator it=tests.begin(); it !=tests.end(); it++){
		it->print();
	}

	return 0;
}
