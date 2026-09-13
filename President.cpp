#define _CRT_SECURE_NO_WARNINGS
#include "President.h"
#include <iostream> 
using namespace std;

President::President() : Employer(), country(nullptr)
{}

President::President(const char* n, const char* s, const  char* c) : Employer(n, s)
{
	cout << "President const" << endl;
	country = new char[strlen(c) + 1];
	strcpy(country, c);
}

void President::Print()
{
	cout << "President Print" << endl;
	cout << "Name: " << name << endl;
	cout << "Surname: " << surname << endl;
	cout << "Country: " << country << endl;
}

President::~President()
{
	cout << "President destr" << endl;
	if (country != nullptr) delete[] country;
}
