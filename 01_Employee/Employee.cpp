module employee;

using namespace std;

namespace Records {

	Employee::Employee() {}
	
	Employee::Employee(const string& firstName, const string& lastName)
		: m_firstName{ firstName }, m_lastName{ lastName } {}

	Employee::~Employee()
	{
		cout << "Destructor called." << endl;
	}

	void Employee::display() const
	{
		cout << format("Employee: {}, {}", getLastName(), getFirstName()) << endl;
		cout << "-------------------------" << endl;
		cout << format("Employee Number: {}", getEmployeeNumber()) << endl;
		cout << format("Salary: ${}", getSalary()) << endl;
		cout << endl;
	}

	// Getters and setters
	void Employee::setFirstName(const string& firstName)
	{
		m_firstName = firstName;
	}

	const string& Employee::getFirstName() const
	{
		return m_firstName;
	}

	void Employee::setLastName(const string& lastName)
	{
		m_lastName = lastName;
	}

	const string& Employee::getLastName() const
	{
		return m_lastName;
	}

	void Employee::setEmployeeNumber(int employeeNumber)
	{
		m_employeeNumber = employeeNumber;
	}

	int Employee::getEmployeeNumber() const
	{
		return m_employeeNumber;
	}

	void Employee::setSalary(int salary)
	{
		m_salary = salary;
	}

	int Employee::getSalary() const
	{
		return m_salary;
	}
}
