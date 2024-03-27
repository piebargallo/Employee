/* Continuing with your solution of Exer 10-1, add a toString() method to the Person class returning a string 
   representation of a person. Override this method in the Employee. Manager and Directorclasses to build up a 
   complete string representation by delegating part of their work to parent classes. */

import hr;
#include <iostream>
#include <string>
using std::cout;
using std::string;
using std::endl;

int main()
{
	HR::Person person{ "Otis", "Lowe" };
	HR::Employee employee{ 123, "Otis", "Lowe" };

	cout << person.toString() << endl;
	cout << employee.toString() << endl;
}
