#include "Manager.h"
#include <iostream>

using namespace std;
using namespace EmployeeNamespace;

namespace ManagerNamespace {
Manager::Manager(const string& name, const string& position, const string& department, int ID, double salary)
    : Employee(name, position, ID, salary), department(department) {
    cout<<"manager constructor called"<<endl;
}

void Manager::display() const{
    cout<< "Manager ID: " << getID() << endl;
    cout<< "Name: " << getName() << endl;
    cout<< "Position: " << getPosition() << endl;
    cout<< "Department: " << department << endl;
    cout<< "Salary: " << getSalary() << endl;
}

void Manager::setDepartment(const string& newDepartment){
    department = newDepartment;
}

string Manager::getDepartment() const{
    return department;
}    
}