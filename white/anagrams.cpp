#include <iostream>
#include <map>

using namespace std;

map<char, int> BuildCharCounters(const string &word) {
    char letter;
    map<char, int> countletters;

    for (int i = 0; i < word.size(); ++i) {
        ++countletters[word[i]];
    }
    //for (const string& letter:word){
//
    // }
    return countletters;
}


int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        string a, b;
        cin >> a >> b;
        if (BuildCharCounters(a) == BuildCharCounters(b)) cout << "YES"<<endl;
        else cout << "NO"<<endl;

    }
    return 0;
}
