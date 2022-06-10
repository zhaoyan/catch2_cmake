
file(GLOB SRCS 
*.cpp 
../../sub.cpp)

file(GLOB HEADERS
*.h 
../../*.h)

message(STATUS ${SRCS})

list(FILTER SRCS EXCLUDE REGEX "../../main.cpp")

add_executable(testfab ${SRCS} )


find_package(Catch2 REQUIRED)

target_link_libraries(testfab Catch2::Catch2WithMain)

add_test(NAME testfab
         COMMAND testfab)