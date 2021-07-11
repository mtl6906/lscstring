project(lscstring) 

cmake_minimum_required(VERSION 3.10) 

add_definitions(-D_GLIBCXX_USE_CXX11_ABI=0) 

aux_source_directory(src/ls/cstring SRC) 

aux_source_directory(sample SRC_SAMPLE) 

include_directories(include) 

add_library(lscstring SHARED ${SRC})

add_executable(testcase ${SRC} ${SRC_SAMPLE})

install(TARGETS lscstring DESTINATION lib)
install(DIRECTORY include/ls/cstring DESTINATION include/ls)
