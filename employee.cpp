//
// Created by Arias Arevalo, Carlos on 5/22/25.
//

#include "employee.h"

#include <string>
#include <sstream>
using std::string;
using std::stringstream;

Employee::Employee(const string &name, unsigned int age, double salary): Person(name, age), _salary(salary) {

}

double Employee::GetSalary() const {
	return _salary;
}

void Employee::SetSalary(double salary) {
	_salary = salary;
}

double Employee::RaiseSalary(double percentage) {
	_salary += percentage * _salary;
	return _salary;
}

string Employee::ToString() const {
	stringstream ss;
	ss << "Employee " << Person::ToString() << " Salary: " << _salary;
	return ss.str();
}
