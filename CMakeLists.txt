project(Dragon_System)
cmake_minimum_required(VERSION 3.10)

find_package(ArrayFire)
find_package(OpenMP)

add_executable(
					App.exe 
					App/App.cpp
			   )


target_link_libraries(App.exe ArrayFire::af OpenMP::OpenMP_CXX)