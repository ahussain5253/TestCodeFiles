#include <iostream>
using namespace std;

int main() {

	char mainIdentifier = 'y';

	while (mainIdentifier != 'n') {

		double currentBalance;
		double totalIncome;
		double creditCardCosts;
		double pendingAmount;
		double randomCosts;
		double doorDashNetAmount;

		cout << "How much money is in your bank account right now?" << endl;
		cin >> currentBalance;

		cout << "What is the amount of income you want to include excluding monthly incomes and Doordash?" << endl;
		cin >> totalIncome;

		char DDIdentifier;

		cout << "Calculate Doordash?" << endl;
		cin >> DDIdentifier;

		if (DDIdentifier == 'y') {

			double payPerOrder;
			int daysOrWeeksOfDashing;
			int ordersPerDash;
			char dOrWIdentifier;
			int ordersPerWeek;
			int days;

			cout << "Do you want to calculate weeks or days? Type w or d" << endl;
			cin >> dOrWIdentifier;

			if (dOrWIdentifier == 'w') {

				cout << "How many weeks of dashing will you be calculating for?" << endl;
				cin >> daysOrWeeksOfDashing;

				cout << "How much money do you receive per order?" << endl;
				cin >> payPerOrder;

				cout << "How many orders do you complete per week?" << endl;
				cin >> ordersPerWeek;

				doorDashNetAmount = (ordersPerWeek * payPerOrder) * daysOrWeeksOfDashing;

			}
			else {

				cout << "How many days of dashing will you be calculating for?" << endl;
				cin >> daysOrWeeksOfDashing;

				cout << "How many orders do you complete for one day of dashing?" << endl;
				cin >> ordersPerDash;

				cout << "How much money do you receive per order?" << endl;
				cin >> payPerOrder;

				doorDashNetAmount = (payPerOrder * ordersPerDash) * daysOrWeeksOfDashing;

			}
		}

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

			endValue = (currentBalance + totalIncome + totalIncomeMonthly + doorDashNetAmount) - (randomCosts + creditCardCosts + pendingAmount);

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

			double endValue;
			double CreditCard = creditCardCosts + pendingAmount;

			endValue = (currentBalance + totalIncome + doorDashNetAmount) - (randomCosts + creditCardCosts + pendingAmount);

			cout << endl;
			cout << "Your calculated bank account balance: " << endValue << endl << endl;

			cout << "Breakdown:" << endl << endl;
			cout << "Income excluding doordash: " << totalIncome << endl;
			cout << "Income from doordash: " << doorDashNetAmount << endl;
			cout << "Credit card costs: " << CreditCard << endl;
			cout << "Other cost(s): " << randomCosts << endl;


		}

		cout << endl;
		cout << "Do you want to calculate again?" << endl;
		cin >> mainIdentifier;

	}

	cout << endl;
	cout << "Thank you and have a great day!" << endl;

	return 0;
}