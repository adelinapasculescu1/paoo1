add_library(MainLib main.cpp)

add_subdirectory(Employee)
add_subdirectory(Calculator)
add_subdirectory(Manager)

# Include headers and source files from subdirectories
target_include_directories(MainLib PUBLIC "${PROJECT_BINARY_DIR}" "${PROJECT_BINARY_DIR}/Employee" "${PROJECT_BINARY_DIR}/Calculator" "${PROJECT_BINARY_DIR}/Manager")

target_link_libraries(MainLib EmployeeLibrary CalculatorLibrary ManagerLibrary)