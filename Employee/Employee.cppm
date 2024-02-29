export module employee;

import <iostream>;
import <format>;
import <string>;
using std::cout;
using std::format;
using std::string;
using std::endl;

namespace Records {
	// Two constants
	const int defaultStartingSalary{ 30'000 };
	export const int DefaultRaiseAndDemeritAmount{ 1'000 };

	export class Employee
	{
	public:
		Employee(const std::string& firstName, const std::string& lastName);

		void promote(int raiseAmount = DefaultRaiseAndDemeritAmount);
		void demote(int demeritamount = DefaultRaiseAndDemeritAmount);
		void hire();
		void fire();
		
		// Outputs employee into to console
		void display() const;

		// Getters and setters
		void setFirstName(const string& firstName);
		const string& getFirstName() const;

		void setLastName(const string& lastName);
		const string& getLastName() const;

		void setEmployeeNumber(int employeeNumber);
		int getEmployeeNumber() const;

		void setSalary(int newSalary);
		int getSalary() const;

		bool isHired() const;
	private:
		string m_firstName;
		string m_lastName;
		int m_employeeNumber{ -1 };
		int m_salary{ defaultStartingSalary };
		bool m_hired{ false };
	};
}