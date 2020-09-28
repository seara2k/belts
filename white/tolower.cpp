#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>
using namespace std;

void PrintVector(const vector <string> &v) {
    for (auto item:v) {
        cout << item << " ";
    }
}

int main() {
    int n;
    cin >> n;
    vector <string> YEAH;
    for (int i = 0; i < n; ++i) {
        string input;
        cin >>input;
        YEAH.push_back(input);
    }
    sort(begin(YEAH), end(YEAH), [](string &a, string &b) {
        int i = 0;
        string c,d;
        while (a[i])
        {
            c+=tolower(a[i]);;
            i++;
        }
        i=0;
        while (b[i])
        {
           d+=tolower(b[i]);
            i++;
         }
        return c<d;
    });
    PrintVector(YEAH);
    return 0;
}
