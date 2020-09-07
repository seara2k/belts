#include <iostream>
#include <algorithm>

using namespace std;


class ReversibleString {
private:
    string data;
public:
    ReversibleString() {};

    ReversibleString(const string &inputing) {
        data = inputing;
    }

    void Reverse() {
        reverse(data.begin(), data.end());
    }

    string ToString() const {
        return data;
    }

};


int main() {
    ReversibleString s("live");
    s.Reverse();
    cout << s.ToString() << endl;

    s.Reverse();
    const ReversibleString& s_ref = s;
    string tmp = s_ref.ToString();
    cout << tmp << endl;

    ReversibleString empty;
    cout << '"' << empty.ToString() << '"' << endl;
    return 0;
}
