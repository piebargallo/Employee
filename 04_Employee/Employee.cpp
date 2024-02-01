module employee;

using namespace std;

Employee::Employee() {}

Employee::Employee(const string& firstName, const string& lastName)
		: m_firstName{ firstName }, m_lastName{ lastName } {}


void Employee::display() const
{
	cout << format("Employee: {}, {}", getLastName(), getFirstName()) << endl;
	cout << "-------------------------" << endl;
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

