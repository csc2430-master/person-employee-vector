//
// Created by Arias Arevalo, Carlos on 5/22/25.
//

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "person.h"

#include <string>
using std::string;

class Employee: public Person {
private:
	double _salary;
public:
	Employee(const string& name, unsigned int age, double salary = 0);
	double GetSalary() const;
	void SetSalary(double salary);
	double RaiseSalary(double percentage);
	virtual string ToString() const;

};



#endif //EMPLOYEE_H
