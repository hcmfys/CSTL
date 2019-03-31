cmake_minimum_required(VERSION 3.13)
project(CSTL C)

set(CMAKE_C_STANDARD 11)

include_directories(.)
include_directories(include)
include_directories(test)

add_executable(CSTL
        include/c_algorithm.h
        include/c_def.h
        include/c_functional.h
        include/c_iterator.h
        include/c_list.h
        include/c_map.h
        include/c_queue.h
        include/c_set.h
        include/c_stack.h
        include/c_utility.h
        include/c_vector.h
        test/t_algo.c
        test/t_list.c
        test/t_main.c
        test/t_map.c
        test/t_queue.c
        test/t_set.c
        test/t_stack.c
        test/t_test.h
        test/t_tree.c
        test/t_vector.c
        c_algo.c
        c_algo.h
        c_function.c
        c_function.h
        c_iterator.c
        c_list.c
        c_map.c
        c_memory.c
        c_memory.h
        c_pair.c
        c_pair.h
        c_queue.c
        c_set.c
        c_stack.c
        c_tree.c
        c_tree.h
        c_vector.c)
