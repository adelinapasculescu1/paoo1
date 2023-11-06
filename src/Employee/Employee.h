#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <cstring>
#include "../Employee/InterfaceEmployee.h"
using namespace std;

namespace EmployeeNamespace{
    class Employee : public InterfaceEmployee{
        public:
            Employee (const string& name, const string& position, int ID, double salary, const char* g);
            Employee (const Employee& other);
            Employee& operator = (const Employee& other);
            ~Employee();
            void display() const;

            void setName(const string& name);
            string getName() const;

            void setPosition(const string& position);
            string getPosition() const;

            void setID(int ID);
            int getID() const;
            
            void setSalary(double salary);
            double getSalary() const;

            void setGender(const char* gender);
            const char* getGender() const;
            Employee::Employee(Employee && other) noexcept;

        private:
            string name;
            string position;
            int ID;
            double salary;
            char* gender;
    };
}
#endif