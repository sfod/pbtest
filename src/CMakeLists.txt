add_custom_command(OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/task.pb-c.h ${CMAKE_CURRENT_SOURCE_DIR}/task.pb-c.c
    COMMAND protoc-c --c_out=.. task.proto
    DEPENDS proto/task.proto
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/proto/
)
set_source_files_properties(${CMAKE_CURRENT_SOURCE_DIR}/task.pb-c.c PROPERTIES GENERATED TRUE)
set_property(SOURCE main.c APPEND PROPERTY OBJECT_DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/task.pb-c.c)

add_executable(pbtest main.c ${CMAKE_CURRENT_SOURCE_DIR}/task.pb-c.c)
target_link_libraries(pbtest protobuf-c)
