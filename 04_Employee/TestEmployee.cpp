import ProgrammerEmployee;

#include <iostream>

int main()
{
	std::cout << "Testing the Employee class." << std::endl;
	ProgrammerEmployee programmerEmp;
	programmerEmp.setFirstName("Pepo");
	programmerEmp.setLastName("Papo");
	programmerEmp.display();
	programmerEmp.setProgrammerSalary(43'000);
	programmerEmp.programmerDisplay();

	return 0;
}

