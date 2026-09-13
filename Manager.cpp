#define _CRT_SECURE_NO_WARNINGS
#include "Manager.h"
#include <iostream>
using namespace std;

Manager::Manager() : Employer(), company(nullptr), project(nullptr)
{}

Manager::Manager(const char* n, const char* s, const char* c, const char* p) : Employer(n, s)
{
	cout << "Manager constr" << endl;
	company = new char[strlen(c) + 1];
	strcpy(company, c);
	project = new char[strlen(p) + 1];
	strcpy(project, p);
}

void Manager::Print()
{
	cout << "Manager Print" << endl;
	cout << "Name: " << name << endl;
	cout << "Surname: " << surname << endl;
	cout << "Company: " << company << endl;
	cout << "Project: " << project << endl;
}

Manager::~Manager()
{
	cout << "Manager destr" << endl;
	if (company != nullptr) delete[] company;
	if (project != nullptr) delete[] project;
}
