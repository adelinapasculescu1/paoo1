#include </home/adelina/Desktop/adelina_paoo/src/Employee/Employee.h>
#include <iostream>
#include <cstring>

using namespace std;

namespace EmployeeNamespace {

Employee::Employee(const char* n, const char* p, int ID, double salary, const char* g)
    : ID(ID), salary(salary){
        name = new char[strlen(n) + 1];
                strcpy(name, n);
        position = new char[strlen(p) + 1];
                strcpy(position, p);
        gender = new char[strlen(g) + 1];
                strcpy(gender, g);
    cout<<"constructor called"<<endl;
}

Employee::Employee(const Employee&other)
    : position(other.position), ID(other.ID), salary(other.salary){
        name = new char[strlen(other.name) + 1];
        strcpy(name, other.name);

        position = new char[strlen(other.position) + 1];
        strcpy(position, other.position);

        gender = new char[strlen(other.gender) + 1];
        strcpy(gender, other.gender);

        cout<<"copy constructor called"<<endl;
}


Employee& Employee::operator = (const Employee& other){
    if(this == &other){
        return *this;
    }
    delete[] name;
    name = new char[strlen(other.name) + 1];
    strcpy(name, other.name);

    delete[] position;
    position = new char[strlen(other.position) + 1];
    strcpy(position, other.position);

    ID = other.ID;
    salary = other.salary;

    delete[] gender;
    gender = new char[strlen(other.gender) + 1];
    strcpy(gender, other.gender);
    return *this;
}

Employee::~Employee() {
    delete name;
    delete position;
    delete[] gender;
    cout << "deconstructor called" << endl;
}

void Employee::display() const{
    cout<< "ID: " << ID << endl;
    cout<< "Name: " << name << endl;
    cout<< "Position: " << position << endl;
    cout<< "salary: " << salary << endl;
    cout<< "gender: " << gender << endl;
}

void Employee::setName(const char* newName){
    name = new char[strlen(newName) + 1];
        strcpy(name, newName);
}

const char* Employee::getName() const{
    return name;
}

void Employee::setPosition (const char* newPosition){
    position = new char[strlen(newPosition) + 1];
        strcpy(position, newPosition);
}

const char* Employee::getPosition() const{
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

Employee::Employee(Employee && other) :
    name(nullptr), position(nullptr), ID(0), salary(0.0), gender(nullptr) {
    *this = std::move(other);
    cout<<"move constructor called"<<endl;
    }

template <typename T>
void Employee::setAttribute(T Employee::* member, const T& value) {
    this->*member = value;
}

template <typename T>
const T& Employee::getAttribute(T Employee::* member) const {
    return this->*member;
}
}
