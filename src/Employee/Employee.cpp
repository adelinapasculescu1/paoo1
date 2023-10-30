#include </home/adelina/Desktop/adelina_paoo/src/Employee/Employee.h>
#include <iostream>

using namespace std;

Employee::Employee(const string& name, const string& position, int ID, double salary)
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

void Employee::setName(const string& newName){
    name = newName;
}

string Employee::getName() const{
    return name;
}

void Employee::setPosition (const string& newPosition){
    position = newPosition;
}

string Employee::getPosition() const{
    return position;
}

void Employee::setID(int newID){
    ID = newID;
}

int Employee::getID() const{
    return ID;
}

void Employee::setSalary(double newSalary){
    salary = newSalary;
}

double Employee::getSalary() const{
    return salary;
}