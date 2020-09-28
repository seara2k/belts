#include <iostream>
#include <set>
using namespace std;
int main() {
    set<string> x;
    int n;
    cin>>n;
    for (int i=0;i<n;++i){
        string input;
        cin>>input;
        x.insert(input);
    }
    cout<< x.size();
    return 0;
}
