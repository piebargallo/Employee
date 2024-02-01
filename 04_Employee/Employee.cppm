export module employee;

import <iostream>;
import <format>;
import <string>;

export class Employee
{
public:
	Employee();
	Employee(const std::string& firstName, const std::string& lastName);

	void display() const;// Outputs employee info to console

	// Getters and setters
	void setFirstName(const std::string& firstName);
	const std::string& getFirstName() const;

	void setLastName(const std::string& lastName);
	const std::string& getLastName() const;

private:
	std::string m_firstName;
	std::string m_lastName;
};

