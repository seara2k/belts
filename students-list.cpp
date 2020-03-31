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


	/*void add(const string& new_name,
	         const string& new_surname,
	         const int& new_day_of_birth,
	         const int& new_month_of_birth,
	         const int& new_year_of_birth) {
		sets.push_back({new_name, new_surname, new_day_of_birth, new_month_of_birth, new_year_of_birth});
	}*/
	/*void name(const int& K) {
		cout << sets[K - 1][0] << " " << sets[K - 1][1];
	}*/

	string name;
	string surname;
	int day_of_birth;
	int month_of_birth;
	int year_of_birth;
};


int main() {
	int count;
	vector<student> list();
	cin >> count;
	for (int i; i < count; ++i) {
		cin >> input1 >> input2 >> input3 >> input4;
		list.push_back(input1 , input2 , input3 , input4)
	}
	cout << (list[0]).day_of_birth;
	return 0;
}