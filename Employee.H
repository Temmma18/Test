#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {
private:
    std::string name;
    int id;
    double salary;

public:
    Employee(const std::string& name, int id, double salary);
    
    std::string getName() const;
    int getId() const;
    virtual double getSalary() const; // virtual - ключ к полиморфизму
    void setSalary(double newSalary);
};

#endif // EMPLOYEE_H
