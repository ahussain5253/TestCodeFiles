#include <iostream>
#include <vector>

using namespace std;

int CalcAverage(vector<int> scores) {

	int sum = 0;

	for (int i = 0; i < scores.size(); i++) {

		sum += scores.at(i);

	}

	int average = sum / scores.size();

	return average;

}

int main() {

	vector<int> scores = {};

	int numberOfScores;

	cout << "How many scores?" << endl;
	cin >> numberOfScores;

	

	cout << "Average: " << CalcAverage(scores) << endl;

}