#include <iostream>
#include <map>
using namespace std;

int main() {
	multimap<int, string> x;
	x.insert(make_pair(39,"Mike"));
	x.insert(make_pair(33,"TOto"));
	x.insert(make_pair(29,"Marc"));

	for(multimap<int, string>::iterator it=x.begin(); it != x.end(); it++){
    cout << it->first << ": " << it->second << endl;
  }

	cout << endl;

	for(multimap<int, string>::iterator it=x.find(33); it != x.end(); it++){
		cout << it->first << ": " << it->second << endl;
	}

	cout << endl;

	

	return 0;
}
