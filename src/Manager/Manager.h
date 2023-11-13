#ifndef MANAGER_H
#define MANAGER_H

#include </home/adelina/Desktop/adelina_paoo/src/Employee/Employee.h>
#include <string>
using namespace std;
using namespace EmployeeNamespace;

namespace ManagerNamespace{
class Manager : public Employee {
    public:
        Manager (const char* name, const char* position, const string& department, int ID, double salary, const char* gender);
        virtual void display() const; 

        void setDepartment(const string& department);
        string getDepartment() const;

    protected:
        string department;
};
}

#endif