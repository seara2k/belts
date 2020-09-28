#include <iostream>
#include <map>

using namespace std;

void CHANGE_CAPITAL(map<string, string> &countries_and_capitals) {
    string country, new_capital;
    cin >> country >> new_capital;
    if (countries_and_capitals.count(country)==0){
        cout<<"Introduce new country "<< country<< " with capital " <<new_capital<<endl;
        countries_and_capitals[country] = new_capital;
    }
    else if (countries_and_capitals[country]==new_capital)
        cout<<"Country " <<country<<" hasn't changed its capital"<<endl;

    else  if (countries_and_capitals.count(country)==1) {
        cout <<"Country " <<country<< " has changed its capital from " <<countries_and_capitals[country]<< " to "<< new_capital<<endl;
        countries_and_capitals[country] = new_capital;
    }
}

void RENAME(map<string, string> &countries_and_capitals) {
    string old_country_name, new_country_name;
    cin >> old_country_name >> new_country_name;
    if ((old_country_name == new_country_name)||(countries_and_capitals.count(old_country_name)==0)||(countries_and_capitals.count(new_country_name)==1))
        cout << "Incorrect rename, skip"<<endl;
    else {
        cout<<"Country " <<old_country_name <<" with capital " <<countries_and_capitals[old_country_name]<< " has been renamed to " <<new_country_name<<endl;
        countries_and_capitals[new_country_name] = countries_and_capitals[old_country_name];
        countries_and_capitals.erase(old_country_name);
    }
}
void ABOUT(map<string, string> &countries_and_capitals) {
    string country;
    cin >> country;
    if (countries_and_capitals.count(country)==0)
        cout<<"Country " <<country<< " doesn't exist"<<endl;
    else
    cout <<"Country "<< country<< " has "  <<"capital "<<countries_and_capitals[country]<<endl;
}

void DUMP(map<string, string> &countries_and_capitals) {
    if (countries_and_capitals.size() == 0)
        cout << "There are no countries in the world"<<endl;
    else {
        for (const auto&[key, value]:countries_and_capitals) {
            cout << key << "/" << value << endl;
        }
    }
}
int main() {
    map<string, string> countries_and_capitals;
    int Q;
    cin >> Q;
    string input;
    for (int i = 1; i <= Q; ++i) {
        cin >> input;
        if (input == "CHANGE_CAPITAL")
            CHANGE_CAPITAL(countries_and_capitals);
        if (input == "RENAME")
            RENAME(countries_and_capitals);
        if (input == "ABOUT")
            ABOUT(countries_and_capitals);
        if (input == "DUMP")
            DUMP(countries_and_capitals);

    }
    return 0;
}
