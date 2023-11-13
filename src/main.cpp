#include <iostream>
#include "/home/adelina/Desktop/adelina_paoo/src/Employee/Employee.h"
#include "/home/adelina/Desktop/adelina_paoo/src/Manager/Manager.h"

using namespace EmployeeNamespace;
using namespace ManagerNamespace;

int main(int, char**){
    Employee e1 ("Nicu", "Software Developer", 123, 3000, "male");
    Employee e2 = e1;
    Employee e3(move(e2));

    e2.setName("Daniel");
    cout << "employee 1: \n";
    e1.display();
    cout << "employee 2: \n";
    e2.display();

    //YourRoleClass role; // Replace with the actual class you're using
    //RoleBase<YourRoleClass> roleBase;
    //roleBase.calculateSalary(role);


    Manager m1 (e1.getName(), e1.getPosition(), "Development", e1.getID(), (e1.getSalary() + 2000.00), e1.getGender());
    return 0;
}

