#include "Calculator.h"
#include "../Employee/Employee.h"

template <typename T>
void Calculator<T>::calculateSalary(const T& role) const {
    std::cout << "Real salary: " << 0.1 * role.getSalary() << std::endl;
}

// Explicit instantiation for the types you plan to use
template class Calculator<EmployeeNamespace::Employee>;  // Replace YourRoleClass with your actual class name
