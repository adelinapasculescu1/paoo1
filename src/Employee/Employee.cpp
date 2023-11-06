#include </home/adelina/Desktop/adelina_paoo/src/Employee/Employee.h>
#include <iostream>
#include <cstring>

using namespace std;

namespace EmployeeNamespace {

Employee::Employee(const string& name, const string& position, int ID, double salary, const char* g)
    : name(name), position(position), ID(ID), salary(salary){
        gender = new char[strlen(g) + 1];
                strcpy(gender, g);
    cout<<"constructor called"<<endl;
}

Employee::Employee(const Employee&other)
    : name(other.name), position(other.position), ID(other.ID), salary(other.salary){
        gender = new char[strlen(other.gender) + 1];
        strcpy(gender, other.gender);
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
    delete[] gender;
    gender = new char[strlen(other.gender) + 1];
    strcpy(gender, other.gender);
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

void Employee::setGender(const char* newGender){
    gender = new char[strlen(newGender) + 1];
        strcpy(gender, newGender);
}

const char* Employee::getGender() const{
    return gender;
}

Employee::Employee(Employee && other) noexcept :
    name(""), position(""), ID(0), salary(0.0), gender(nullptr) {
    cout<<"move constructor called"<<endl;
    *this = std::move(other);
    }
}
