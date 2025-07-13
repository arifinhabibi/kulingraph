cmake_minimum_required(VERSION 3.10)
project(KulinGraph)

set(CMAKE_CXX_STANDARD 17)

add_executable(KulinGraph
    main.cpp
    graph/graph.cpp
    search/search.cpp
    sort/sort.cpp
)

