#include <iostream>
#include <string>
using namespace std;
class Employee {
protected:
    string name;
    int id;
    float baseSalary;

public:
    Employee(const string& empName, int empId, float salary) 
        : name(empName), id(empId), baseSalary(salary) {}

protected:
    virtual float calculateSalary() {
        return baseSalary;
    }
    virtual void display() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: " << calculateSalary() << endl;
    }
};
class Manager : public Employee {
private:
    float bonus;

public:
    Manager(const string& empName, int empId, float salary, float mgrBonus)
        : Employee(empName, empId, salary), bonus(mgrBonus) {}

private:
    float calculateSalary() override {
        return baseSalary + bonus;
    }

public:
    void display() override {
        cout << "Manager Details:" << endl;
        Employee::display(); 
    }
};
class Developer : public Employee {
private:
    float overtimePay;

public:
    Developer(const string& empName, int empId, float salary, float overtime)
        : Employee(empName, empId, salary), overtimePay(overtime) {}

private:
    float calculateSalary() override {
        return baseSalary + overtimePay;
    }

public:
    void display() override {
        cout << "Developer Details:" << endl;
        Employee::display(); 
    }
};

int main() {
    Manager manager("John Smith", 1001, 5000.0, 1500.0);
    Developer developer("Alice Johnson", 1002, 4000.0, 800.0);

   
    manager.display();
    cout << "---------------------" << endl;
    developer.display();

    return 0;
}