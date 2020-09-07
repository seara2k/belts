#include <iostream>
#include <set>
using namespace std;
int main() {
	set<string> x;
	int n;
	cin >> n;
	for (int i = 0; i < n; ++n) {
		string input;
		cin >> input;
		x.insert(input);
	}
	cout << n - x.size();
	return 0;
}
