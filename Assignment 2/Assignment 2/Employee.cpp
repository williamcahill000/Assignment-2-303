#include "Employee.h"

Employee::Employee() {
	empName = " ";
	id = 0;
	baseSalary = 0.0;
}

Employee::~Employee() {
	cout << "~employee()" << endl;
}

void Employee::calcWeeklySalary(int hours, int hr) {
	cout << "weekly salary is: " << hours * hr << endl;
}

void Employee::healthCareContrib() {
	//instructions we're unclear
}

void Employee::vacDays() {
	//instructions we're unclear
}