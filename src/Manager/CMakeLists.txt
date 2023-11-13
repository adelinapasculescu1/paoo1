add_library(ManagerLibrary Manager.cpp Manager.h)
target_include_directories(ManagerLibrary PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})