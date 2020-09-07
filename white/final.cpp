#include <iostream>
#include <map>
#include <iomanip>
#include <algorithm>
#include <sstream>
#include <exception>
#include <set>
#include <string>
#include <stdexcept>

using namespace std;


void CheckCommand(const string &command) {
    if (!(command == "Add" || command == "Find" || command == "Del" || command == "Print" || command == ""))
        throw runtime_error("Unknown command: " + command);
}

class Date {
public:
    Date() = default;

    Date(const int &input_year, const int &input_month, const int &input_day) {
        year = input_year;
        month = input_month;
        day = input_day;
    }

    int GetYear() const {
        return year;
    }

    int GetMonth() const {
        return month;
    }

    int GetDay() const {
        return day;
    }

private:
    int year;
    int month;
    int day;
};

istream &operator>>(istream &stream, Date &date) {

    int year, month, day;
    char def1, def2;
    stringstream ss;
    string output;
    stream >> output;
    ss << output;
    if (!(ss >> year >> def1 >> month >> def2 >> day && ss.peek() == EOF))
        throw invalid_argument("Wrong date format: " + ss.str());
    else if (month > 12 || month < 1)
        throw invalid_argument("Month value is invalid: " + to_string(month));
    else if (day > 31 || day < 1)
        throw invalid_argument("Day value is invalid: " + to_string(day));

    date = {year, month, day};

    return stream;


}

ostream &operator<<(ostream &stream, const Date &date) {
    stream << setw(4) << setfill('0') << date.GetYear() << '-'
           << setw(2) << setfill('0') << date.GetMonth() << '-'
           << setw(2) << setfill('0') << date.GetDay();
    return stream;

}

bool operator<(const Date &lhs, const Date &rhs) {
    return lhs.GetDay() + lhs.GetMonth() * 100 + lhs.GetYear() * 10000 <
           rhs.GetDay() + rhs.GetMonth() * 100 + rhs.GetYear() * 10000;
}

class Database {
public:
    void Find(const Date &date) const {
        for (const auto &item : field.at(date))
            cout << item << endl;

    }

    void Print() const {
        for (const auto &pair : field)
            for (const auto &item : pair.second)
                cout << pair.first << " " << item << endl;
    }

    void Add(const Date &date, const string &event) {
        field[date].insert(event);

    }

    void Delete(const Date &date, const string &event) {
        try {
            int k = 0;
            for (const auto &item : field.at(date))
                if (item == event) {
                    field.at(date).erase(event);
                    k = 1;
                    if (field.at(date).size() == 0)
                        field.erase(date);
                    break;
                }
            if (k == 0)
                throw out_of_range("");
            cout << "Deleted successfully" << endl;
        } catch (const out_of_range) {
            cout << "Event not found" << endl;
        }

    }

    void Delete(const Date &date) {
        cout << "Deleted " << field[date].size() << " events" << endl;
        field.erase(date);

    }

private:
    map<Date, set<string>> field;

};


int main() {
    Database db;

    string command;
    while (getline(cin, command)) {
        try {
            stringstream stream(command);
            string action;
            stream >> action;
            CheckCommand(action);
            if (action == "Add") {
                Date date;
                stream >> date;
                string event;
                stream >> event;
                db.Add(date, event);
            } else if (action == "Find") {
                Date date;
                stream >> date;
                db.Find(date);
            } else if (action == "Print") {
                db.Print();
            } else if (action == "Del") {
                Date date;
                stream >> date;
                string event;
                if (stream >> event)
                    db.Delete(date, event);
                else
                    db.Delete(date);

            }


        } catch (const out_of_range) {

        } catch (const exception &ex) {
            cout << ex.what() << endl;
            break;
        }

    }


    return 0;
}
