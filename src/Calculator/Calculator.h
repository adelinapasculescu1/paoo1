#ifndef ROLE_BASE_H
#define ROLE_BASE_H

#include <iostream>

template <typename T>
class Calculator {
public:
    void calculateSalary(const T& role) const;
};

#endif 