#include <iostream>
#include <set>
#include <map>

using namespace std;

void adding(map<string, set<string>> &dictionary) {
    string input1,input2;
    cin>>input1>>input2;
    dictionary[input1].insert(input2);
    dictionary[input2].insert(input1);
}
void counting(map<string, set<string>> &dictionary) {
    string input1;
    cin>>input1;
    cout<< dictionary[input1].size()<<endl;
}
void checking(map<string, set<string>> &dictionary) {
    string input1,input2;
    bool flag=false;
    cin>>input1>>input2;
   // for ( auto &item1:dictionary){
        for ( auto&item:dictionary[input1] ) {
            if (input2 == item) {
                flag=true;
                cout << "YES"<<endl;

            }

        }
    if (flag==false) cout<<"NO"<<endl;
        // }8
    //if (flag== false){

    //}

}
int main() {
    int q;
    string input;
    cin>>q;
    map<string, set<string>> dictionary;
for (int i=0;i<q;++i){
    cin>>input;
    if (input=="ADD"){
        adding(dictionary);
    }
    if (input=="COUNT"){
        counting(dictionary);
    }
    if (input=="CHECK"){
        checking(dictionary);
    }
}
    return 0;
}