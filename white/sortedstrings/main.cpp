#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class SortedStrings {
public:
    void AddString(const string &s) {
        strings.push_back(s);
    }

    vector<string> GetSortedStrings() {
        SortStrings(strings);
        return strings;
    }

private:

    vector<string> strings;

    void SortStrings(vector<string> &strings) {
        sort(begin(strings), end(strings));
    }

};


void PrintSortedStrings(SortedStrings &strings) {
    for (const string &s : strings.GetSortedStrings()) {
        cout << s << " ";
    }
    cout << endl;
}

int main() {
    SortedStrings strings;

    strings.AddString("first");
    strings.AddString("third");
    strings.AddString("second");
    PrintSortedStrings(strings);

    strings.AddString("second");
    PrintSortedStrings(strings);

    return 0;
}
