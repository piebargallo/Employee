module ProgrammerEmployee;

ProgrammerEmployee::ProgrammerEmployee() {}

ProgrammerEmployee::~ProgrammerEmployee() 
{
	cout << "Destructor called." << endl;
}

void ProgrammerEmployee::setProgrammerSalary(int pSalary)
{
	m_pSalary = pSalary;
}

int ProgrammerEmployee::getProgrammerSalary() const
{
	return m_pSalary;
}

void ProgrammerEmployee::programmerDisplay() const
{
	cout << format("Programmer salary: {}", getProgrammerSalary()) << endl;
	cout << endl;
}
