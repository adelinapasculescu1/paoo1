#include <iostream>
#include "/home/adelina/Desktop/adelina_paoo/src/Employee/Employee.h"
#include "/home/adelina/Desktop/adelina_paoo/src/Manager/Manager.h"

using namespace EmployeeNamespace;
using namespace ManagerNamespace;

int main(int, char**){
    Employee e1 ("Nicu", "Software Developer", 123, 3000);
    Employee e2 = e1;

    e2.setName("Daniel");
    cout << "employee 1: \n";
    e1.display();
    cout << "employee 2: \n";
    e2.display();

    Manager m1 (e1.getName(), e1.getPosition(), "Development", e1.getID(), (e1.getSalary() + 2000.00));
    return 0;
}

