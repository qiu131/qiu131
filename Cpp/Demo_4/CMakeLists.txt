# CMake 最低版本号要求
cmake_minimum_required (VERSION 3.2)

# 项目信息
project (Demo_4)

# 添加 algorithm 子目录
add_subdirectory(algorithm)

#main
set(PROJECT_MAIN_DIR "${CMAKE_CURRENT_SOURCE_DIR}/src")
file(GLOB project_main_source_files ${PROJECT_MAIN_DIR}/*.cpp)
source_group("Source Files" FILES ${project_main_source_files})

#algorithm
set(PROJECT_ALGORITHM_DIR "${PROJECT_MAIN_DIR}/algorithm")
file(GLOB project_algorithm_header_files ${PROJECT_ALGORITHM_DIR}/*.h)
file(GLOB project_algorithm_source_files ${PROJECT_ALGORITHM_DIR}/*.cpp)
source_group("Header Files\\algorithm" FILES ${project_algorithm_header_files})
source_group("Source Files\\algorithm" FILES ${project_algorithm_source_files})


#将上述文件夹include到工程里面
include_directories(${PROJECT_MAIN_DIR} ${PROJECT_ALGORITHM_DIR})


# 指定生成目标
add_executable(${PROJECT_NAME} ${project_main_source_files} ${project_algorithm_header_files} ${project_algorithm_source_files})

# 添加链接库
target_link_libraries(${PROJECT_NAME} Hello)