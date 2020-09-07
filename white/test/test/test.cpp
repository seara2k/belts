#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <map>
#include <cassert>
#include <set>
#include <algorithm>

using namespace std;
struct FullName {
	string first_name, last_name;

};

class Person {
public:
	void ChangeFirstName(int year, const string& first_name) {



		person_details[year].first_name = first_name;



	}
	void ChangeLastName(int year, const string& last_name) {


		person_details[year].last_name = last_name;

	}
	string GetFullName(int year) {
		string fname = "";
		string lname = "";
		if (person_details.size() == 0) {
			return "Incognito";
		}
		for (const auto& i : person_details) {
			if (i.first <= year) {
				if (i.second.first_name.size() != 0) {
					fname = i.second.first_name;
				}
				if (i.second.last_name.size() != 0) {
					lname = i.second.last_name;
				}

			}
		}

		if (fname.size() == 0) {
			if (lname.size() == 0) {
				return "Incognito";
			}
			else {
				return lname + " with unknown first name";
			}


		}
		else if (lname.size() == 0) {
			return fname + " with unknown last name";
		}
		else {
			return fname + " " + lname;
		}

	}
	string GetFullNameWithHistory(int year) {

		string output_name = "";
		string output_surname = "";
		string more_names = "";
		string more_surnames = "";
		vector <string> name;
		vector <string> surname;
		if (person_details.size() == 0) {
			return "Incognito";
		}
		for (const auto& i : person_details) {
			if (i.first <= year) {

				if (i.second.first_name.size() != 0) {
					output_name = i.second.first_name;

					name.push_back(i.second.first_name);

				}


				if (i.second.last_name.size() != 0) {
					output_surname = i.second.last_name;

					surname.push_back(i.second.last_name);

				}
			}
		}
		if (name.size() > 1) {
			if (output_name != name[name.size() - 2]) {
				more_names += " (" + name[name.size() - 2];
				for (int i = name.size() - 1; i > 1; --i) {
					if (name[i - 1] != name[i - 2]) {
						more_names += ", " + name[i - 2];
					}
				}
				more_names += ")";
			}
		}
		if (surname.size() > 1) {
			if (output_surname != surname[surname.size() - 2]) {
				more_surnames += " (" + surname[surname.size() - 2];
				for (int i = surname.size() - 1; i > 1; --i) {
					if (surname[i - 1] != surname[i - 2]) {
						more_surnames += ", " + surname[i - 2];
					}
				}
				more_surnames += ")";
			}
		}
		if (name.size() == 0 && surname.size() == 0) {
			return "Incognito";
		}
		else if (name.size() == 0) {
			return output_surname + more_surnames + " with unknown first name";
		}
		else if (surname.size() == 0) {
			return output_name + more_names + " with unknown last name";
		}
		else {

			return output_name + more_names + " " + output_surname + more_surnames;
		}
	}
private:
	map<int, FullName> person_details;
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