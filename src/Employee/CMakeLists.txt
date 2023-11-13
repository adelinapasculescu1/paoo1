add_library(EmployeeLibrary Employee.cpp Employee.h InterfaceEmployee.h)
target_include_directories(EmployeeLibrary PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})