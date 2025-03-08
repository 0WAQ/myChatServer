project(test)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/../bin/test)

add_subdirectory(./json)
add_subdirectory(./muduo)
add_subdirectory(./mysql)