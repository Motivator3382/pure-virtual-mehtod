#pragma once
#include "Employer.h"

class President : public Employer
{
private:
	char* country;
public:
	President();
	President(const char* n, const char* s, const char* c);
	void Print() override;
	~President();
};


