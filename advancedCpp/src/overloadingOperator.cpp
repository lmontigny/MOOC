
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Test {
private:
  int id;
  string name;

public:
	Test(): id(0), name(""){

  }

  Test(int id, string name): id(id), name(name){

  }

	void print() {
		cout <<  id << " " << name << endl;
	}

  const Test &operator=(const Test &other){
    cout << " assignement equal" << endl;
    id = other.id;
    name = other.name;
    return *this;
  }

  Test(const Test &other){
    cout << " copy constructor" << endl;
    id = other.id;
    name = other.name;
  }
};


int main() {
  Test test1(10, "Mike");
  test1.print();

  Test test2(20, "Bob");

  Test test3;

  //test3 = test2 = test1;

  test3.operator=(test2);
  test3.print();
  cout << endl;

  Test test4 = test1;
  test4.print();

	return 0;
}
