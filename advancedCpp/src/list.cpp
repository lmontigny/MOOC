
#include <iostream>
#include <list>
using namespace std;

int main() {
  // list you can insert also in the middle not only at the end as for the vector
  // vector elt are continuois in memory
  // list are nodes connected with pointer

  list<int> x;
  x.push_back(1);
  x.push_back(2);
  x.push_back(3);
  x.push_front(0);

  list<int>::iterator it=x.begin();
  it++;
  x.insert(it,100);
  cout << "Element: " << *it << endl;

  list<int>::iterator it_erase =x.begin();
  it_erase++;
  it_erase = x.erase(it_erase);
  cout << "Element: " << *it_erase << endl;

  // Need to use iterator
  for(list<int>::iterator it=x.begin(); it != x.end(); it++){
    cout << *it << endl;
  }

  for(list<int>::iterator it=x.begin(); it != x.end(); it++){
    if(*it==2){
      x.insert(it,121);
    }
  }

	return 0;
}
