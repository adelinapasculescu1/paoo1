#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<iostream>
#include <string>
#include <cstring>
#include "../Employee/InterfaceEmployee.h"
using namespace std;

namespace EmployeeNamespace{
    class Employee : public InterfaceEmployee{
        public:
            Employee (const char* name, const char* position, int ID, double salary, const char* g);
            Employee (const Employee& other);
            Employee& operator = (const Employee& other);
            ~Employee();
            void display() const;

            void setName(const char* name);
            const char* getName() const;

            void setPosition(const char* position);
            const char* getPosition() const;

            void setID(int ID);
            int getID() const;
            
            void setSalary(double salary);
            double getSalary() const;

            void setGender(const char* gender);
            const char* getGender() const;
            Employee(Employee && other);

            template <typename T>
            void setAttribute(T Employee::* member, const T& value);

            template <typename T>
            const T& getAttribute(T Employee::* member) const;

        protected:
            char* name;
            char* position;
            int ID;
            double salary;
            char* gender;
    };
}
#endif