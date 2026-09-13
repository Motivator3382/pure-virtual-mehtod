#pragma once
#include "Employer.h"

class Manager : public Employer
{
private:
	char* company;
	char* project;
public:
	Manager();
	Manager(const char* n, const char* s, const char* c, const char* p);
	void Print() override;
	~Manager();
};

