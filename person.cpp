//
// Created by Arias Arevalo, Carlos on 5/22/25.
//

#include "person.h"

#include <string>
#include <sstream>

using std::string;
using std::stringstream;

Person::Person(string name, unsigned int age): _name(name), _age(age) {
}

string Person::ToString() const {
	stringstream ss;
	ss << "Name: " << _name << " Age: " << _age;
	return ss.str();
}

void Person::Birthday() {
	_age++;
}

unsigned int Person::GetAge() {
	return _age;
}