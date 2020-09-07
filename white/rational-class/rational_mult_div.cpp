#include <iostream>
using namespace std;




long smart_nod_finder(long a, long b) {
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

	Rational(long input_numerator = 0, long input_denominator = 1) {


		long sign = 0;

		if (input_numerator == 0) {
			numerator = 0;
			denominator = 1;
		}
		else {

			if (input_denominator * input_numerator > 0)
				sign = 1;
			else
				sign = -1;
			long nod = smart_nod_finder(input_denominator, input_numerator);
			input_numerator = abs(input_numerator);
			input_denominator = abs(input_denominator);
			numerator = input_numerator / nod * sign;
			denominator = input_denominator / nod;
		}
	}

	long Numerator() const {
		return numerator;
	}

	long Denominator() const {
		return denominator;
	}

private:

	long numerator;
	long denominator;
};

Rational operator+(const Rational& lhs, const Rational&rhs) {
	return Rational((lhs.Numerator() * rhs.Denominator() + lhs.Denominator() * rhs.Numerator()), (lhs.Denominator() * rhs.Denominator()));
}

Rational operator-(const Rational& lhs, const Rational&rhs) {
	return Rational((lhs.Numerator() * rhs.Denominator() - lhs.Denominator() * rhs.Numerator()), (lhs.Denominator() * rhs.Denominator()));
}


Rational operator*(const Rational& lhs, const Rational&rhs) {
	return Rational((lhs.Numerator() * rhs.Numerator()), (lhs.Denominator() * rhs.Denominator()));
}

Rational operator/(const Rational& lhs, const Rational&rhs) {
	return Rational((lhs.Numerator() * rhs.Denominator()), (lhs.Denominator() * rhs.Numerator()));
}

bool operator==(const Rational& lhs, const Rational&rhs) {
	return ((lhs.Numerator() == rhs.Numerator()) && (lhs.Denominator() == rhs.Denominator()));

}
int main() {

	{
		Rational r1(4, 6);
		Rational r2(2, 3);
		bool equal = r1 == r2;
		if (!equal) {
			cout << "4/6 != 2/3" << endl;
			return 1;
		}
	}

	{
		Rational a(2, 3);
		Rational b(4, 3);
		Rational c = a + b;
		bool equal = c == Rational(2, 1);
		if (!equal) {
			cout << "2/3 + 4/3 != 2" << endl;
			return 2;
		}
	}

	{
		Rational a(5, 7);
		Rational b(2, 9);
		Rational c = a - b;
		bool equal = c == Rational(31, 63);
		if (!equal) {
			cout << "5/7 - 2/9 != 31/63" << endl;
			return 3;
		}
	}



	{
		Rational r1(2, 3);
		Rational r2(3, 2);
		bool equal = (r1 * r2) == Rational(1, 1);
		if (!equal) {
			cout << "lox" << endl;
			return 1;
		}
	}


	cout << "OK" << endl;
	return 0;

}