#ifndef MANAGER_H
#define MANAGER_H

#include </home/adelina/Desktop/adelina_paoo/src/Employee/Employee.h>
#include <string>
using namespace std;
using namespace EmployeeNamespace;

namespace ManagerNamespace{
class Manager : public Employee {
    public:
        Manager (const string& name, const string& position, const string& department, int ID, double salary);
        virtual void display() const; //override;

        void setDepartment(const string& department);
        string getDepartment() const;

    private:
        string department;
};
}

#endif