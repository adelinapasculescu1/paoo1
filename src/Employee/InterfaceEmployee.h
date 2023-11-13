#ifndef INTERFACEEMPLOYEE_H
#define INTERFACEEMPLOYEE_H

#include <string>
using namespace std;

//namespace IEmployeeNamespace {
    class InterfaceEmployee {
        virtual void display() const = 0;
        virtual void setName(const char* name) = 0;
        virtual const char* getName() const = 0;

        virtual void setPosition(const char* position) = 0;
        virtual const char* getPosition() const = 0;

        virtual void setID(int ID) = 0;
        virtual int getID() const = 0;
            
        virtual void setSalary(double salary) = 0;
        virtual double getSalary() const = 0;

        virtual void setGender(const char* gender) = 0;
        virtual const char* getGender() const = 0;
    };
//}

#endif