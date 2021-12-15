#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> doSomething(vector<string> A) {

	for (int i = A.size() - 1; i >= 0; i--) {

		bool wasFound = false;

		for (int j = i - 1; j >= 0; j--) {

			if (A.at(i) == A.at(j)) {

				A.erase(A.begin() + j);
				wasFound = true;
				i--;

			}

		}
		if (!wasFound) {

			A.erase(A.begin() + i);

		}

	}

	return A;
}

	int main() {

		vector<string> animals = { "giraffe", "cat", "bat", "dog", "dog", "cat", "rat", "giraffe", "giraffe", " snake" };

		animals.push

		doSomething(animals);

		for (int i = 0; i < animals.size(); i++) {

			cout << animals.at(i) << " ";

		}

	}
		 


