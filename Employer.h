#pragma once
class Employer
{
protected:
	char* name;
	char* surname;
public:
	Employer();
	Employer(const char* n, const  char* s);
	virtual void Print() = 0;
	virtual ~Employer() = 0;
};

