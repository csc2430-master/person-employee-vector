#include "person.h"
#include "employee.h"

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {
	vector<Person*> people;

	people.push_back(new Person("Jenny", 12));
	people.push_back(new Employee("Tommy", 30));
	people.push_back(new Person("Johnny", 18));
	people.push_back(new Employee("Timmy", 23, 1500));
	people.push_back(new Person("Jimmy", 21));

	for (int i = 0; i < people.size(); i++) {
		cout << people.at(i)->ToString() << endl;

	}


	for (int i = 0; i < people.size(); i++) {
		delete people.at(i);
	}

	return 0;
}
