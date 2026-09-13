#define _CRT_SECURE_NO_WARNINGS
#include "Worker.h"
#include <iostream>
using namespace std;


Worker::Worker() : Employer(), qualification(nullptr)
{}

Worker::Worker(const char* n, const char* s, const char* q) : Employer(n, s)
{
	cout << "Worker constr" << endl;
	qualification = new char[strlen(q) + 1];
	strcpy(qualification, q);
}

void Worker::Print()
{
	cout << "Worker Print" << endl;
	cout << "Name: " << name << endl;
	cout << "Surname: " << surname << endl;
	cout << "Qualification: " << qualification << endl;
}

Worker::~Worker()
{
	cout << "Worker destr" << endl;
	if (qualification != nullptr) delete[] qualification;
}

