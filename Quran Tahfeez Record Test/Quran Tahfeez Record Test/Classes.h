#pragma once

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Student {

public:

	Student(string name, string darajah);

	string GetName();
	string GetDarajah();
	void GetFullReport();

	void SetMurajaat();

private:

	string name;
	string darajah;

	string murajaat;
	string FATAM;
	int murajaatMarks;

};