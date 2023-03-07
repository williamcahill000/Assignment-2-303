#pragma once
#include <iostream>
using namespace std;


class Employee {
private:
	string empName;
	int id;
	double baseSalary;
public:
	Employee();
	virtual ~Employee();
	void calcWeeklySalary(int hours, int hr);
	void healthCareContrib();
	void vacDays();
};