#include "Employee.h"

Employee::Employee(const std::string& name, int id, double salary)
    : name(name), id(id), salary(salary) {}

std::string Employee::getName() const {
    return name;
}

int Employee::getId() const {
    return id;
}

double Employee::getSalary() const {
    return salary;
}

void Employee::setSalary(double newSalary) {
    salary = newSalary;
}
