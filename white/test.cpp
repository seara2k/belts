#include <map>
#include <iostream>
using namespace std;


int main () {
	map<int, int> testmap;
	testmap[1];
	testmap[2];
	for (auto item : testmap)
		cout << item.first << " ";


	return 0;
}