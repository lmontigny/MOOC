#include <iostream>
#include <map>
using namespace std;

int main() {
  map<string, int> ages; // string is the key

  ages["Mike"] = 40;
  ages["Jose"] = 17;
  ages["Marc"] = 34;

  // key is unique!
  ages["Jose"] = 10;

  pair<string, int> addToMap("Peter", 100);
  ages.insert(addToMap);

  ages.insert(make_pair("Peter",100));

  cout << ages["Jose"] << endl;
  if(ages.find("Marc") != ages.end()) {
    cout << "not found " << endl;
  }
  else{
      cout << "found" << endl;
  }

  for(map<string, int>::iterator it=ages.begin(); it != ages.end(); it++){
    pair<string, int> age = *it;
    cout << age.first << ": " << age.second << endl;

  }

  for(map<string, int>::iterator it=ages.begin(); it != ages.end(); it++){
    cout << it->first << ": " << it->second << endl;
  }

	return 0;
}
