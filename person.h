//
// Created by Arias Arevalo, Carlos on 5/22/25.
//

#ifndef PERSON_H
#define PERSON_H

#include <string>
using std::string;

class Person {
private:
	string _name;
	unsigned int _age;
public:
	Person(string name, unsigned int age);
	string ToString() const;
	void Birthday();
	unsigned int GetAge();
};



#endif //PERSON_H
