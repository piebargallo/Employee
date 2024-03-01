/* Built further on the result of exercise 1-1 and add an enumeration data member title to Employee to specify
whether a certain employee is a Manager, Senior, Senior Engineer, or Engineer. Which kind of enumeration type
will you use and why? Whatever you need to add, add it to the HR namespace. Test your new employee data member
in the main() function. Use a switch statement to print out a human-readable string for thr title. */

#include <iostream>
#include <format>
import employee;

using std::cout;
using std::format;
using std::endl;

int main()
{
	// Create and populate an employee using C++20 designated initializers.
	HR::Employee anEmployee {
		.firstInitial = 'J',
			.lastInitial = 'D',
			.employeeNumber = 42,
			.salary = 80'000,
			.title = HR::Title::SeniorEngineer
	};

	// output the values of an employee
	cout << format("Employee: {}{}", anEmployee.firstInitial,
		anEmployee.lastInitial) << endl;
	cout << format("Number: {}", anEmployee.employeeNumber) << endl;
	cout << format("Salary: ${}", anEmployee.salary) << endl;

	switch (anEmployee.title)
	{
		using enum HR::Title;

	case Engineer:
		cout << "Engineer" << endl;
		break;
	case SeniorEngineer:
		cout << "Senior Engineer" << endl;
		break;
	case Manager:
		cout << "Manager" << endl;
		break;
	}
	return 0;
}
