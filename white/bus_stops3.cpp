#include <iostream>
#include <map>
#include <set>
using namespace std;
int main() {
    map<set<string>,int> bus_stops;
    int q,n=1;
    cin>>q;
    for (int i=0;i<q;++i){
        int d;
        cin>>d;
        set<string> input_set;
        for (int j=0;j<d;++j){
            string input;
            cin>>input;
            input_set.insert(input);
        }
if (bus_stops.count(input_set)==0){
    bus_stops[input_set]=n;
    cout << "New bus " << n << endl;
    n++;
}
       else  cout << "Already exists for " << bus_stops[input_set] << endl;
    }

    return 0;
}
