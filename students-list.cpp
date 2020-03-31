#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;






struct student {
//public:
	student(const string& new_name,
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
//private:
	string name;
	string surname;
	int day_of_birth;
	int month_of_birth;
	int year_of_birth;
}


class God {
	void add(const string& new_name,
	        const string& new_surname,
	        const int& new_day_of_birth,
	        const int& new_month_of_birth,
	        const int& new_year_of_birth){
		sets.pushback({new_name,new_surname,new_day_of_birth,new_month_of_birth,new_year_of_birth});
	}
	void name(const int& K) {
		cout << sets[K][0] << " " << sets[K][1]
	}


private:
	vector<student> sets;
}


int main() {

	return 0;
}