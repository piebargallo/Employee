module employee;

using namespace std;

namespace Records {

	// Constructors and destructor
	Employee::Employee() {}

	Employee::Employee(const string& firstName, const string& lastName)
		: m_firstName{ firstName }, m_lastName{ lastName } {}

	Employee::Employee(const Employee& employee) :
		Employee { employee.m_firstName, employee.m_lastName } {}

	Employee::Employee(Employee&& employee) noexcept
	{
		moveFrom(employee);
	}

	Employee::~Employee()
	{
		cout << "Destructor called." << endl;
	}

	// Assignment operators
	Employee& Employee::operator=(const Employee& employee)
	{
		if (this == &employee) {
			return *this;
		}
	}

	Employee& Employee::operator=(Employee&& employee) noexcept
	{
		// Check for self-assinment
		if (this == &employee) {
			return *this;
		}

		// Free the old memory and move ownership
		cleanup();
	}

	void Employee::cleanup() noexcept
	{
		m_firstName = ' ';
		m_lastName = ' ';
	}

	void Employee::moveFrom(Employee& employee) noexcept
	{
		// shallow copy of data
		m_firstName = employee.m_firstName;
		m_lastName = employee.m_lastName;

		// Reset the source object, because ownership has been moved;
		employee.m_firstName = ' ';
		employee.m_lastName = ' ';
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
