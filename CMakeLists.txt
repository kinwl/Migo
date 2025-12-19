cmake_minimum_required(VERSION 4.1)
project(
        Migo
        LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(fmt CONFIG REQUIRED)
find_package(spdlog CONFIG REQUIRED)
find_package(sol2 CONFIG REQUIRED)
find_package(nlohmann_json CONFIG REQUIRED)
find_package(cxxopts CONFIG REQUIRED)
find_package(OpenXLSX CONFIG REQUIRED)

find_package(lua REQUIRED)
find_package(unofficial-luafilesystem CONFIG REQUIRED)

add_executable(Migo
        src/main.cpp
)

target_include_directories(Migo PRIVATE ${LUA_INCLUDE_DIR})
target_link_libraries(Migo PRIVATE ${LUA_LIBRARIES})

set(LUA_LIBS_DIR "${CMAKE_SOURCE_DIR}/scripts")
message(STATUS "LUA_LIBS_DIR : ${LUA_LIBS_DIR}")
target_compile_definitions(Migo PRIVATE
        LUA_LIBS_DIR="${LUA_LIBS_DIR}"
)

target_include_directories(Migo PRIVATE src)
target_link_libraries(Migo
        PRIVATE
        fmt::fmt
        spdlog::spdlog
        sol2::sol2
        nlohmann_json::nlohmann_json
        cxxopts::cxxopts
        OpenXLSX::OpenXLSX
        lua
        unofficial::luafilesystem::lfs
)
