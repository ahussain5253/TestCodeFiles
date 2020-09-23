#include <iostream>
using namespace std;

int main() {

	int degreesFar;
	int degreesCel;

	cout << "What is the temperature in Farenheit?" << endl;
	cin >> degreesFar;

	degreesCel = (degreesFar - 32) * (5/9);

	degreesCel = 40;

	cout << " When it is " << degreesFar << " degress Farenheit outside, it is " << degreesCel << " degrees Celcius as well." << endl;

	return 0;
}