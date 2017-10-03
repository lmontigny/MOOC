
#include <iostream>
#include <stack>
#include <queue>
using namespace std;

class Test {
private:
  string name;

public:
	Test(string name): name(name){

	}

  ~Test(){

  }
	void print()  {
		cout <<  name << endl;
	}


};

int main() {
  // LIFO
  stack<Test> testStack;

  testStack.push(Test("Nike"));
  testStack.push(Test("Joe"));
  testStack.push(Test("Marc"));

  //Test &test1 = testStack.top(); //invalid, object is destroyed!!
  //test1.print();
  //testStack.pop();

  while(testStack.size()>0){
      Test &test = testStack.top();
      test.print();
      testStack.pop();
  }


  // FIFO (First)
  queue<Test> testQueue;

  testQueue.push(Test("Nike"));
  testQueue.push(Test("Joe"));
  testQueue.push(Test("Marc"));

  testQueue.back().print();

  while(testQueue.size()>0){
      Test &test = testQueue.front();
      test.print();
      testQueue.pop();
  }

	return 0;
}
