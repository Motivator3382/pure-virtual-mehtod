#pragma once
#include "Employer.h"

class Worker : public Employer
{
private:
	char* qualification;
public:
	Worker();
	Worker(const char* n, const char* s, const char* q);
	void Print() override;
	~Worker();
};

