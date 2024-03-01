/* Modify the Employee structure from the begining of this chapter by putting it in a namespace called HR
What modifications do you have to make to the code in main() to work with the new implementation? Additionally,
modifify the code to use C++20 designated initializers */

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
			.salary = 80'000
	};

	// output the values of an employee
	cout << format("Employee: {}{}", anEmployee.firstInitial,
		anEmployee.lastInitial) << endl;
	cout << format("Number: {}", anEmployee.employeeNumber) << endl;
	cout << format("Salary: ${}", anEmployee.salary) << endl;
	return 0;
}


