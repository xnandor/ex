cmake_minimum_required(VERSION 3.0)
project(EX)

include_directories(include)
SET(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

file(GLOB SOURCES "src/*.cpp")
add_executable(extest ${SOURCES})

add_library(ex STATIC ${SOURCES})
install(TARGETS ex DESTINATION lib)

