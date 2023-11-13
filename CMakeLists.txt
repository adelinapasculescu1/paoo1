cmake_minimum_required(VERSION 3.0.0)
project(adelina_paoo VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})

add_subdirectory(src)

add_executable(adelina_paoo src/main.cpp)

target_link_libraries(adelina_paoo MainLibrary)

include(CPack)
