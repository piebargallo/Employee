/* Practise polymorphic behavior of the classes in your Person hierarchy from Exer 10-2. Define avector to store 
   a mix of employees, managers, and directors, and fill it with some test data. Finally, use a single range-based
   for loop to call toString() on all of the elements in the vector. */

import hr;
#include <iostream>
#include <string>
#include <vector>
#include <memory>
using std::cout;
using std::endl;
using std::vector;
using std::unique_ptr;
using std::make_unique;

int main()
{
	vector<unique_ptr<HR::Person>> persons;
	persons.push_back(make_unique<HR::Employee>(123, "John", "Doe"));
	persons.push_back(make_unique<HR::Manager>(456, "Otis", "Lowe"));
	persons.push_back(make_unique<HR::Director>(46, "Fran", "Stone"));
	persons.push_back(make_unique<HR::Employee>(33, "Harper", "Jones"));

	for (const auto& person : persons) {
		cout << person->toString() << endl;
	}
}
