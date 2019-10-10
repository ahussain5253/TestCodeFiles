#include <iostream>
using namespace std;

int main() {

	double currentBalance;
	double totalIncome;
	double creditCardCosts;
	double pendingAmount;
	double randomCosts;

	cout << "How much money is in your bank account right now?" << endl;
	cin >> currentBalance;

	cout << "What is the amount of income you want to include excluding monthly incomes?" << endl;
	cin >> totalIncome;

	char identifier;

	cout << "Do you have any monthly incomes you want to include? Type y or n" << endl;
	cin >> identifier;

	if (identifier == 'y') {

		int months;

		cout << "How many months do you want to calculate income for?" << endl;
		cin >> months;

		double earningPerMonth;

		cout << "How much do you earn each month?" << endl;
		cin >> earningPerMonth;

		double totalIncomeMonthly = months * earningPerMonth;

		cout << "How much do you owe on your credit card?" << endl;
		cin >> creditCardCosts;

		cout << "How much is pending on your credit card account?" << endl;
		cin >> pendingAmount;

		cout << "What is the total of your other costs not including your credit card?" << endl;
		cin >> randomCosts;

		int endValue;

		endValue = (currentBalance + totalIncome + totalIncomeMonthly) - (randomCosts + creditCardCosts + pendingAmount);

		cout << "Your calculated bank account balance: " << endValue << endl;

		return(0);

	}
	else if (identifier == 'n') {

		cout << "How much do you owe on your credit card?" << endl;
		cin >> creditCardCosts;

		cout << "How much is pending on your credit card account?" << endl;
		cin >> pendingAmount;

		cout << "What is the total of your other costs not including your credit card?" << endl;
		cin >> randomCosts;

		int endValue;

		endValue = (currentBalance + totalIncome) - (randomCosts + creditCardCosts + pendingAmount);

		cout << "Your calculated bank account balance: " << endValue << endl;

		return(0);

	}
}