#include <iostream>
#include <vector>
#include <memory>
#include "/home/adelina/Desktop/adelina_paoo/src/Employee/Employee.h"
#include "/home/adelina/Desktop/adelina_paoo/src/Manager/Manager.h"
#include "/home/adelina/Desktop/adelina_paoo/src/Calculator/Calculator.h"

using namespace EmployeeNamespace;
using namespace ManagerNamespace;

int main(int, char**){
    vector<unique_ptr<Employee>> employeeList;
    auto e1 = make_unique<Employee>("Nicu", "Software Developer", 123, 3000, "male");
    employeeList.push_back(move(e1));
    //Employee e2 = e1;
    //employeeList.push_back(e2);
    //Employee e3(move(e2));

    /*e2.setName("Daniel");
    cout << "employee 1: \n";
    e1.display();
    cout << "employee 2: \n";
    e2.display();*/

    cout << "Employee List:\n";
    for (const auto& employee : employeeList) {
        employee->display();
    }

    //Calculator<Employee> calc1;
    //calc1.calculateSalary(e1);

    //Manager m1 (e1.getName(), e1.getPosition(), "Development", e1.getID(), (e1.getSalary() + 2000.00), e1.getGender());
    
    auto sharedEmployee = make_shared<Employee>("John", "Manager", 456, 4000, "male");
    Manager m1(sharedEmployee->getName(), sharedEmployee->getPosition(), "Development", sharedEmployee->getID(),
              (sharedEmployee->getSalary() + 2000.00), sharedEmployee->getGender());

    return 0;
    
}

