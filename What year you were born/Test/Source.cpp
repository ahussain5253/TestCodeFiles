#include <iostream>
using namespace std;

int main() {

	int ageNow;
	int yearNow;

	int yearBorn;

	cout << "How old are you?" << endl;
	cin >> ageNow;

	cout << "What is the current year?" << endl;
	cin >> yearNow;

	yearBorn = yearNow - ageNow;

	cout << "You were born in the year: " << yearBorn << endl;

	return 0;

}
