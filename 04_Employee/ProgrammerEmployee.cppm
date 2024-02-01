export module ProgrammerEmployee;

export import employee;

import <iostream>;
import <format>;
using namespace std;

export class ProgrammerEmployee : public Employee
{
public:
	ProgrammerEmployee();
	virtual ~ProgrammerEmployee();
	
	virtual void setProgrammerSalary(int newSalary);
	virtual int getProgrammerSalary() const;

	void programmerDisplay() const;

private:
	int m_pSalary{ 0 };
};