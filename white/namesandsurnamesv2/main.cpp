#include <map>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

// если имя неизвестно, возвращает пустую строку
string FindNameByYear(const map<int, string> &names, int year) {
    string name;  // изначально имя неизвестно

    // перебираем всю историю по возрастанию ключа словаря, то есть в хронологическом порядке
    for (const auto &item : names) {
        // если очередной год не больше данного, обновляем имя
        if (item.first <= year) {
            name = item.second;
        } else {
            // иначе пора остановиться, так как эта запись и все последующие относятся к будущему
            break;
        }
    }

    return name;
}

string PrintVector(const vector<string> &vector) {
    int k = 0;
    string output = "";
    for (const auto &item:vector) {
        if (k == 0) output += item;
        else if (k == 1) output += " (" + item;
        else output += ", "+item;
        ++k;
    }
    if (k==1) return output;
    else return output+")";

}

vector<string> FindNamesByYearReverse(const map<int, string> &names, int year) {
    vector<string> vectest, vecoutput;
    string previous = "123";
    for (const auto &item:names) {
        if ((item.first <= year) && (previous != item.second)) {
            vectest.push_back(item.second);
            previous = item.second;
        }
    }
    for (int i = vectest.size() - 1; i >= 0; --i) {
        vecoutput.push_back(vectest[i]);
    }
    return vecoutput;
}

class Person {
public:
    void ChangeFirstName(int year, const string &first_name) {
        first_names[year] = first_name;
    }

    void ChangeLastName(int year, const string &last_name) {
        last_names[year] = last_name;
    }

    string GetFullName(int year) {
        // получаем имя и фамилию по состоянию на год year
        const string first_name = FindNameByYear(first_names, year);
        const string last_name = FindNameByYear(last_names, year);

        // если и имя, и фамилия неизвестны
        if (first_name.empty() && last_name.empty()) {
            return "Incognito";

            // если неизвестно только имя
        } else if (first_name.empty()) {
            return last_name + " with unknown first name";

            // если неизвестна только фамилия
        } else if (last_name.empty()) {
            return first_name + " with unknown last name";

            // если известны и имя, и фамилия
        } else {
            return first_name + " " + last_name;
        }
    }

    string GetFullNameWithHistory(int year) {
        const vector<string> first_names_by_year = FindNamesByYearReverse(first_names, year);
        const vector<string> last_names_by_year = FindNamesByYearReverse(last_names, year);
        if (last_names_by_year.empty() && first_names_by_year.empty()) {
            return "Incognito";
        } else if (last_names_by_year.empty()) {
            string output = PrintVector(first_names_by_year) + " with unknown last name";
            return output;

        } else if (first_names_by_year.empty()) {
            string output = PrintVector(last_names_by_year) + " with unknown first name";
            return output;
        } else {
            string output = PrintVector(first_names_by_year) + " " + PrintVector(last_names_by_year);
            return output;
        }
    }

private:
    map<int, string> first_names;
    map<int, string> last_names;
};

int main() {


    Person person;

    person.ChangeFirstName(1900, "Eugene");
    person.ChangeLastName(1900, "Sokolov");
    person.ChangeLastName(1910, "Sokolov");
    person.ChangeFirstName(1920, "Evgeny");
    person.ChangeLastName(1930, "Sokolov");
    cout << person.GetFullNameWithHistory(1940) << endl;

    return 0;
}