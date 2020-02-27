cmake_minimum_required(VERSION 3.14)
project(FdF C)

set(CMAKE_C_STANDARD 11)

#include_directories(includes)
#include_director
add_executable(fdf_1 main.c)
include_directories(./include/minilibx_macos)
find_library(MLX mlx ./include/minilibx_macos)

target_link_libraries(fdf_1 PUBLIC "-framework AppKit" "-framework OpenGL")
target_link_libraries(fdf_1 PUBLIC ${MLX})
