
#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v;
	v.push_back(1);
	v.push_back(10);
	v.push_back(3);

	vector<int>::iterator it = v.begin();
	cout << *it << endl;
	cout << "Capacity: " << v.capacity() << endl;

	for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
		cout << *it << endl;
	}

	v.clear();
	cout << "Capacity: " << v.capacity() << endl;


	// 2D vector
	vector< vector<int> > grid(3,vector<int>(4, 0));  //row, columns, init to 0
	for(int row=0; row<grid.size(); row++){
		for(int col=0; col<grid[row].size(); col++){
			cout << grid[row][col] << flush;
		}
		cout << endl;
	}

	return 0;
}
