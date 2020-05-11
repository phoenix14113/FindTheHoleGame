cmake_minimum_required(VERSION 3.0)
project(catch2_example)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

file(GLOB_RECURSE main ./src/scrMain/*.h ./src/scrMain/*.cpp)
file(GLOB_RECURSE tests ./src/tests/*.cpp)
file(GLOB_RECURSE board ./src/scrMain/Board.h ./src/scrMain/Board.cpp)
file(GLOB_RECURSE menu ./src/scrMain/Menu.h ./src/scrMain/Menu.cpp)
file(GLOB_RECURSE playgame ./src/scrMain/PlayGame.h ./src/scrMain/PlayGame.cpp)
file(GLOB_RECURSE player ./src/scrMain/Player.h ./src/scrMain/Player.cpp)


IF (GENERATE_CODE_COVERAGE)
    message(STATUS "Compiling with code coverage")
    SET(GCC_COVERAGE_COMPILE_FLAGS "-g -O0 -coverage -fprofile-arcs -ftest-coverage")
    SET(GCC_COVERAGE_LINK_FLAGS    "-coverage -lgcov")
    SET(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}" )
    SET(CMAKE_EXE_LINKER_FLAGS  "${CMAKE_EXE_LINKER_FLAGS} ${GCC_COVERAGE_LINK_FLAGS}")
ENDIF()

add_executable(game
        ${main})
add_executable(testing
        ${tests}
        ${board}
        ${menu}
        ${playgame}
        ${player})

if (GENERATE_CODE_COVERAGE)
    target_link_libraries(testing gcov)
ENDIF()
