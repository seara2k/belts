#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct student {
	student (const string& new_name,
	         const string& new_surname,
	         const int& new_day_of_birth,
	         const int& new_month_of_birth,
	         const int& new_year_of_birth)
	{
		name = new_name;
		surname =  new_surname;
		day_of_birth = 	new_day_of_birth;
		month_of_birth =  new_month_of_birth;
		year_of_birth = new_year_of_birth;
	}
	void name_print() {
		cout << name << " " << surname << endl;
	}
	void date_print() {
		cout << day_of_birth << "." << month_of_birth << "." << year_of_birth << endl;
	}
	string name;
	string surname;
	int day_of_birth;
	int month_of_birth;
	int year_of_birth;
};

int main() {
	int count, k, mind;
	string input1, input2;
	int input3, input4, input5;
	vector<student> list;
	cin >> count;
	for (int i = 0; i < count; ++i) {
		cin >> input1 >> input2 >> input3 >> input4 >> input5;
		list.push_back({input1 , input2 , input3 , input4, input5});
	}
	mind = count;
	cin >> count;
	for (int i = 0; i < count; ++i) {
		cin >> input1 >> k;
		if (k > mind)cout << "bad request";
		else {
			if (input1 == "name") list[k - 1].name_print();
			else if (input1 == "date") list[k - 1].date_print();
			else cout << "bad request";
		}
	}
	return 0;

}