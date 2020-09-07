#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;

void PrintVector(const vector<int> &v) {
    for (const auto &item:v) {
        cout << item << " ";
    }
}

using namespace std;

int main() {
    vector<int> ohmygod;
    int n;
    cin>>n;
    int input;
    //ohmygod.push_back(n);
    for (int i = 0; i < n; ++i) {
        cin >> input;
        ohmygod.push_back(input);
    }
    sort(begin(ohmygod), end(ohmygod), [](const int & a,const int & b) {
       return abs(a) < abs(b);
    });
    PrintVector(ohmygod);
    return 0;
}
