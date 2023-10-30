#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;

class Employee {
    public:
    Employee (const string& name, string& position, int ID, double salary);
    Employee (const Employee& other);
    Employee& operator = (const Employee& other);
    virtual ~Employee();
    virtual void display() const;

    void setName(const string& name);
    string getName() const;

    void setPosition(const string& name);
    string getPosition(const string& name);

    void setID(int ID);
    int getID() const;
    
    void setSalary(double salary);
    double getSalary() const;

    protected:
    string name;
    string position;
    int ID;
    double salary;
};

#endif