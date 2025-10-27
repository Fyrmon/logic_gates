set(SOURCES 
    ${CMAKE_CURRENT_SOURCE_DIR}/src/logicGates.cpp
)

add_library(lg_lib ${SOURCES})

target_include_directories(lg_lib PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)