project(test_muduo)

set(SRC_LIST test_muduo.hpp test_muduo.cc)

add_executable(${PROJECT_NAME} ${SRC_LIST})

target_link_libraries(${PROJECT_NAME} PUBLIC mymuduo)