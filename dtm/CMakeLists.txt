# Find python and Boost - both are required dependencies
find_package(PythonLibs 3 REQUIRED)
find_package(Boost COMPONENTS python REQUIRED)

add_subdirectory(src)
add_subdirectory(tests)