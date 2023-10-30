#include </home/adelina/Desktop/adelina_paoo/src/Employee/Employee.h>
#include <iostream>

using namespace std;

Employee::Employee(string& name, string& position, int ID, double salary)
    : name(name), position(position), ID(ID), salary(salary){
    cout<<"constructor called"<<endl;
}

Employee::Employee(const Employee&other)
    : name(other.name), position(other.position), ID(other.ID), salary(other.salary){
    cout<<"copy constructor called"<<endl;
}

Employee& Employee::operator = (const Employee& other){
    if(this == &other){
        return *this;
    }
    
    name = other.name;
    position = other.position;
    ID = other.ID;
    salary = other.salary;
    return *this;
}

Employee::~Employee() {
    cout << "deconstructor called" << endl;
}

void Employee::display() const{
    cout<< "ID: " << ID << endl;
    cout<< "Name: " << name << endl;
    cout<< "ID: " << position << endl;
    cout<< "ID: " << salary << endl;
}