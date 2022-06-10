option(SINGLE_TEST "generate single gtest executable" ON)
if (NOT SINGLE_TEST)
    add_subdirectory(testsum)
    add_subdirectory(testfab)

else()

    file(GLOB SRCS 
        ../*.cpp
        testsum/*.cpp
        testfab/*.cpp 
        )

    file(GLOB HEADERS
        ../*.h
        testsum/*.h 
        testfab/*.h
        )

    message(STATUS ${SRCS})

    list(FILTER SRCS EXCLUDE REGEX "../main.cpp")

    message(STATUS ${SRCS})

    find_package(Catch2 REQUIRED)

    ADD_EXECUTABLE(whole_test ${SRCS})

    target_link_libraries(whole_test Catch2::Catch2WithMain)
    
    add_test(NAME whole_test
            COMMAND whole_test)

endif()
# add new test here if you have.
