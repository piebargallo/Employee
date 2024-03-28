/* In real companies, employees can get promoted to a manager or director position. Do you see a way you can add
   support for this to your class hierarchy of Exer 10-3. */

import hr;
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

int main()
{
	HR::Employee employee{ 123, "Carlie", "Dudley" };
	cout << employee.toString() << endl;

	// Promote employee to manager.
	HR::Manager manager{ employee };
	cout << manager.toString() << endl;
}
