#include <iostream>
#include <vector>

using namespace std;

class Student {

public:
	
	void SetNameAgeGrade(string name, int age, int grade);
	void GetRundown();

private:

	string studentName;
	int studentAge;
	int studentGrade;
};

void Student::SetNameAgeGrade(string name, int age, int grade) {

	studentName = name;
	studentAge = age;
	studentGrade = grade;

}

void Student::GetRundown() {
	
	cout << "Student Name: " << studentName << endl;
	cout << "Student Age: " << studentAge << endl;
	cout << "Student Grade: " << studentGrade << endl;
}






int main() {

		

	

	return 0;

}