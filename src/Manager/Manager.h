#ifndef MANAGER_H
#define MANAGER_H

#include </home/adelina/Desktop/adelina_paoo/src/Employee/Employee.h>
#include <string>
using namespace std;

class Manager : public Employee {
    public:
    Manager (string& name, string& department, int ID, double salary);
    virtual void display() const override;

    protected:
    string department;
};

#endif