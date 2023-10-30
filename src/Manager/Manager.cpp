#include "Manager.h"
#include <iostream>

using namespace std;

Manager::Manager(const string& name, const string& position, const string& department, int ID, double salary)
    : Employee(name, position, ID, salary), department(department) {
    cout<<"manager constructor called"<<endl;
}

void Manager::display() const{
    cout<< "Manager ID: " << ID << endl;
    cout<< "Name: " << name << endl;
    cout<< "Position: " << position << endl;
    cout<< "Department: " << department << endl;
    cout<< "Salary: " << salary << endl;
}

void Manager::setDepartment(const string& newDepartment){
    department = newDepartment;
}

string Manager::getDepartment() const{
    return department;
}