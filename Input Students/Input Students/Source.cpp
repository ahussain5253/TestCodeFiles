#include <iostream>
#include <vector>

using namespace std;

class Student {

public:
	
	Student(string name, int age, int grade);
	void GetRundown();

private:

	string name;
	int age;
	int grade;
};

Student::Student(string name, int age, int grade) {

	this->name = name;
	this->age = age;
	this->grade = grade;

}

void Student::GetRundown() {
	
	cout << "Student Name: " << studentName << endl;
	cout << "Student Age: " << studentAge << endl;
	cout << "Student Grade: " << studentGrade << endl;
}


int main() {

	vector<Student> Students;

	char identifier = 'y';
	int i = 0;

	while (identifier == 'y') {

		string name;
		int age;
		int grade;

		cout << "Name?" << endl;
		cin >> name;

		cout << "Age?" << endl;
		cin >> age;

		cout << "Grade?" << endl;
		cin >> grade;

		Students.at(i) = Student student(name, age, grade);

		i++;

		cout << "Again? y/n" << endl;
		cin >> identifier;
	}

	

	return 0;

}