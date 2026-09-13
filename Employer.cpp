#define _CRT_SECURE_NO_WARNINGS
#include "Employer.h"
#include <iostream>
using namespace std;


Employer::Employer() : name(nullptr), surname(nullptr)
{}

Employer::Employer(const char* n, const char* s)
{
	cout << "Employer constr\n";
	name = new char[strlen(n) + 1];
	strcpy(name, n);
	surname = new char[strlen(s) + 1];
	strcpy(surname, s);
}

Employer::~Employer()
{
	cout << "Employer  destr\n";
	if (name != nullptr) delete[] name;
	if (surname != nullptr) delete[] surname;
}

