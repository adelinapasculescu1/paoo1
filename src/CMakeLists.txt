cmake_minimum_required(VERSION 3.0.0)
project(adelina_paoo VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_subdirectory(Employee)
add_subdirectory(Manager)

add_executable(adelina_paoo main.cpp
                Employee/Employee.cpp
                Manager/Manager.cpp)

target_include_directories(adelina_paoo PUBLIC "${PROJECT_BINARY_DIR}" "${PROJECT_BINARY_DIR}/Employee" "${PROJECT_BINARY_DIR}/Manager")

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
