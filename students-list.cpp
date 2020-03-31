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
	void name(const&int K) {
		cout << student.name << " " << student.surname << endl
	}
	string name;
	string surname;
	int day_of_birth;
	int month_of_birth;
	int year_of_birth;
};

int main() {
	int count, number;
	string input1, input2;
	int input3, input4, input5;
	vector<student> list;
	cin >> count;
	for (int i; i < count; ++i) {
		cin >> input1 >> input2 >> input3 >> input4 >> input5;
		list.push_back({input1 , input2 , input3 , input4, input5});
	}
	cin >> count;
	for (int i; i < count; ++i) {
		cin >> input1;
		cin >> number;
		if (input1 == "date") {




		}
	}
	return 0;

}