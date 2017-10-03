
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
    *this = other;
  }

  friend ostream &operator<<(ostream &out, const Test&test){
      out << test.id << ": " << test.name;
      return out;
  }

  friend const Test operator+(const Test &T1, const Test &T2){
    Test T3;
    T3.id = T1.id + T2.id;
    T3.name = "Hello";
    return T3;
  }

  double getId() const{ // declare method as const, better for encapsulation
    return id;
  }


};


int main() {

  Test test1(10, "Mike");
  Test test2(10, "Mike");

  cout << test1+test2 << endl;

  cout << test1 << endl; // left-right associtivity

	return 0;
}
