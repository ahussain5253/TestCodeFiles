#pragma once

#include <iostream>
#include <vector>
#include <string>
#include "Header.h"

using namespace std;

Student::Student(string name, string darajah) {

	this->name = name;
	this->darajah = darajah;

}

string Student::GetName() {

	return this->name;

}

string Student::GetDarajah() {

	return this->darajah;

}

void Student::SetMurajaat() {

	string M;
	string FAM;
	int MM;

	cout << endl;
	cout << "Enter Murajaat" << endl;
	getline(cin, M);

	cout << endl;
	cout << "Enter From Ayat to Ayat for Murajaat" << endl;
	getline(cin, FAM);

	cout << endl;
	cout << "Enter The Murajaat Score" << endl;
	cin >> MM;
	cout << endl;

	this->murajaat = M;
	this->FATAM = FAM;
	this->murajaatMarks = MM;

}

void Student::GetFullReport() {

	cout << endl << endl;
	cout << this->name << "'s Full Report: " << endl << endl;
	cout << "   " << "Murajaat: " << this->murajaat << endl << endl;
	cout << "   " << "From Ayat to Ayat for Murajaat: " << this->FATAM << endl << endl;
	cout << "   " << "Murajaat Score: " << this->murajaatMarks << endl << endl;
	cout << "End of Report" << endl << endl;

}
