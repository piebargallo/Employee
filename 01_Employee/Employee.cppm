export module employee;

import <iostream>;
import <format>;
import <string>;

namespace Records {
	const int DefaultStartingSalary{ 30'000 };
	
	export class Employee
	{
	public:
		Employee();
		Employee(const std::string& firstName, const std::string& lastName);

		// Destructor.
		~Employee();

		void display() const;// Outputs employee info to console

		// Getters and setters
		void setFirstName(const std::string& firstName);
		const std::string& getFirstName() const;

		void setLastName(const std::string& lastName);
		const std::string& getLastName() const;

		void setEmployeeNumber(int employeeNumber);
		int getEmployeeNumber() const;

		void setSalary(int newSalary);
		int getSalary() const;

	private:
		std::string m_firstName;
		std::string m_lastName;
		int m_employeeNumber{ -1 };
		int m_salary{ DefaultStartingSalary };
	};
}
