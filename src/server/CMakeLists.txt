project(server)

set(SRC_LIST *.cc)
set(DB_LIST ./db/*.hpp)
set(MODEL_LIST ./model/*.hpp)
set(REDIS_LIST ./redis/*.hpp)

# add_executable(ChatServer ${SRC_LIST} ${DB_LIST} ${MODEL_LIST} ${REDIS_LIST})