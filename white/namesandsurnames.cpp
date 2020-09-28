#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

class Person {
public:
    void ChangeFirstName(int year, const string &first_name) {
        name[year] = first_name;
    }

    void ChangeLastName(int year, const string &last_name) {
        surname[year] = last_name;
    }

    string GetFullName(int year) {
        string check_name, check_surname, output;
        for (auto item:name) {
            if (item.first <= year) check_name = item.second;
        }
        for (auto item:surname) {
            if (item.first <= year) check_surname = item.second;
        }

        if (check_name.length() == 0) {
            if (check_surname.length() == 0) output = "Incognito";
            else output = check_surname + " with unknown first name";
        } else {
            if (check_surname.length() == 0) output = check_name + " with unknown last name";
            else output = check_name + " " + check_surname;
        }
        return output;
    }

private:
    map<int, string> name;
    map<int, string> surname;
};

int main() {
    Person person;

    person.ChangeFirstName(1965, "Polina");
    person.ChangeLastName(1967, "Sergeeva");
    for (int year : {1900, 1965, 1990}) {
        cout << person.GetFullName(year) << endl;
    }

    person.ChangeFirstName(1970, "Appolinaria");
    for (int year : {1969, 1970}) {
        cout << person.GetFullName(year) << endl;
    }

    person.ChangeLastName(1968, "Volkova");
    for (int year : {1969, 1970}) {
        cout << person.GetFullName(year) << endl;
    }
    return 0;
}
