#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <set>

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
            else break;
        }
        for (auto item:surname) {
            if (item.first <= year) check_surname = item.second;
            else break;
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

    string GetFullNameWithHistory(int year) {
        string output;
        vector<string> check_name, check_surname, test1, test2;
        set<string> ineffectiveshit, justshit;


        for (auto item:name) {
            if (item.first <= year) check_name.push_back(item.second);
            else break;
        }
        for (auto item:surname) {
            if (item.first <= year) check_surname.push_back(item.second);
            else break;
        }
        int i=0;
        int g;
        g=check_name.size();
        while ((i<g) &&(g>1 )){

            if (check_name[i]==check_name[i+1]){
                check_name.erase(check_name.begin()+i+1);
                i=0;
            }
            else ++i;
            g=check_name.size();

        }

        i=0;
        int h;
        h=check_surname.size();
        while ((i<h) && (h>1)) {

            if (check_surname[i]==check_surname[i+1]){
                check_surname.erase(check_surname.begin()+i+1);
                i=0;
            }

            else ++i;
            h=check_surname.size();
        }

       /* for (auto e:test1) {
            if (ineffectiveshit.find(e) == ineffectiveshit.end()) {
                ineffectiveshit.insert(e);
                check_name.push_back(e);
            }
        }
        for (auto e:test2) {
            if (justshit.find(e) == justshit.end()) {
                justshit.insert(e);
                check_surname.push_back(e);
            }
       }*/

        reverse(check_surname.begin(), check_surname.end());
        reverse(check_name.begin(), check_name.end());
        if (check_name.size() == 0) {
            if (check_surname.size() == 0) output = "Incognito";
            else {
                if (check_surname.size() == 1) output = check_surname[0];
                if (check_surname.size() == 2) output = check_surname[0] + " (" + check_surname[1] + ")";
                if (check_surname.size() > 2) {
                    output = check_surname[0] + " " + "(";
                    check_surname.erase(check_surname.begin());
                    for (auto item:check_surname) {
                        output += item + ", ";
                    }
                    output.erase(output.length() - 2, 2);
                    output += ")";
                }
                output += " with unknown first name";

            }
        } else {
            if (check_surname.size() == 0) {
                if (check_name.size() == 1) output = check_name[0];
                if (check_name.size() == 2) output = check_name[0] + " (" + check_name[1] + ")";
                if (check_name.size() > 2) {
                    output = check_name[0] + " " + "(";
                    check_name.erase(check_name.begin());
                    for (auto item:check_name) {
                        output += item + ", ";
                    }
                    output.erase(output.length() - 2, 2);
                    output += ")";
                }
                output += " with unknown last name";
            } else {
                if (check_name.size() == 1) output = check_name[0]+" ";
                if (check_name.size() == 2) output = check_name[0] + " (" + check_name[1] + ") ";
                if (check_name.size() > 2) {
                    output = check_name[0] + " " + "(";
                    check_name.erase(check_name.begin());
                    for (auto item:check_name) {
                        output += item + ", ";
                    }
                    output.erase(output.length() - 2, 2);
                    output += ") ";
                }

                if (check_surname.size() == 1) output += check_surname[0];
                if (check_surname.size() == 2) output += check_surname[0] + " (" + check_surname[1] + ")";
                if (check_surname.size() > 2) {
                    output += check_surname[0] + " " + "(";
                    check_surname.erase(check_surname.begin());
                    for (auto item:check_surname) {
                        output += item + ", ";
                    }
                    output.erase(output.length() - 2, 2);
                    output += ")";

                }
            }
        }

        return output;
    }

private:
    map<int, string> name;
    map<int, string> surname;
};

int main() {
    Person person;


    person.ChangeFirstName(1970, "Appolinaria");
    person.ChangeFirstName(1980, "Polina");
    person.ChangeFirstName(1985, "Pauline");
    person.ChangeFirstName(1987, "Polina");
    person.ChangeFirstName(1988, "Polina");
    for (int year : {1969, 1970, 1990}) {
        cout << person.GetFullNameWithHistory(year) << endl;
    }
    return 0;
}
