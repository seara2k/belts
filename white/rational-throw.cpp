#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <exception>
#include <stdexcept>
using namespace std;
using namespace std;



int smart_nod_finder(int a, int b) {
	a = abs(a);
	b = abs(b);
	while (a != b) {
		if (a > b) a -= b;
		else b -= a;
	}
	return a;
}
class Rational {
public:

	Rational() {

		numerator = 0;

		denominator = 1;

	}
	Rational(int input_numerator, int input_denominator) {


		int sign = 0;

		if (input_denominator == 0) {
			throw invalid_argument("lol");
		}

		if (input_numerator == 0) {
			numerator = 0;
			denominator = 1;
		}
		else {

			if (input_denominator * input_numerator > 0)
				sign = 1;
			else
				sign = -1;
			int nod = smart_nod_finder(input_denominator, input_numerator);
			input_numerator = abs(input_numerator);
			input_denominator = abs(input_denominator);
			numerator = input_numerator / nod * sign;
			denominator = input_denominator / nod;
		}
	}

	int Numerator() const {
		return numerator;
	}

	int Denominator() const {
		return denominator;
	}

private:

	int numerator;
	int denominator;
};

Rational operator+(const Rational& lhs, const Rational&rhs) {
	return Rational((lhs.Numerator() * rhs.Denominator() + lhs.Denominator() * rhs.Numerator()), (lhs.Denominator() * rhs.Denominator()));
}

Rational operator-(const Rational& lhs, const Rational&rhs) {
	return Rational((lhs.Numerator() * rhs.Denominator() - lhs.Denominator() * rhs.Numerator()), (lhs.Denominator() * rhs.Denominator()));
}


Rational operator*(const Rational& lhs, const Rational&rhs) {
	return Rational((lhs.Numerator() * lhs.Numerator()), (rhs.Denominator() * rhs.Denominator()));
}

Rational operator/(const Rational& lhs, const Rational&rhs) {
	if (rhs.Numerator() == 0) {
		throw domain_error("lol");
	}
	return Rational((lhs.Numerator() * rhs.Denominator()), (lhs.Denominator() * rhs.Numerator()));
}

const bool operator==(const Rational& lhs, const Rational&rhs) {
	return ((lhs.Numerator() == rhs.Numerator()) && (lhs.Denominator() == rhs.Denominator()));

}

bool operator<(const Rational& lhs, const Rational&rhs) {
	return lhs.Numerator() * rhs.Denominator() < rhs.Numerator() * lhs.Denominator();
}

bool operator>(const Rational& lhs, const Rational&rhs) {
	return lhs.Numerator() * rhs.Denominator() > rhs.Numerator() * lhs.Denominator();
}

istream& operator>>(istream& stream, Rational& rational) {

	int input1, input2;

	if (stream >> input1) {
		stream.ignore(80, '/');
		if (stream >> input2)
		{
			rational = {input1, input2};
		}
	}

	return stream;

}


ostream& operator<<(ostream& stream, const Rational& rational) {
	stream << rational.Numerator() << "/" << rational.Denominator();
	return stream;

}

int main() {
	try {
		Rational r(1, 0);
		cout << "Doesn't throw in case of zero denominator" << endl;
		return 1;
	} catch (invalid_argument&) {
	}

	try {
		auto x = Rational(1, 2) / Rational(0, 1);
		cout << "Doesn't throw in case of division by zero" << endl;
		return 2;
	} catch (domain_error&) {
	}

	cout << "OK" << endl;
	return 0;
}