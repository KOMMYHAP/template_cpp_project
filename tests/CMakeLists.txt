include(cmake_helpers/my_add_test.cmake)

option(TESTING_MYMATH "Testing mymath lib" ON)
if (TESTING_MYMATH)
	add_subdirectory(mymath)
endif()
