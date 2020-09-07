#include <iostream>
#include <set>
#include <map>
using namespace std;

set<string> BuildMapValuesSet(const map<int, string>& m) {
    set<string> output;
    for (auto item:m){
        output.insert(item.second);
    }
    return output;
}