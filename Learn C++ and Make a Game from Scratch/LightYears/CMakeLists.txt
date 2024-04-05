cmake_minimum_required (VERSION 3.8)


project ("LightYears" VERSION 1.0.0 LANGUAGES C CXX)


#settings ========================
set(CMAKE_CXX_STANDARD          14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS       OFF)
#==================================


# create a variable
set(LIGHT_YEARS_GAME_TARGET_NAME LightYearsGame)

#include operation - from subdirectory to main cmake file
add_subdirectory(LightYears)

#add_executable(${LIGHT_YEARS_GAME_TARGET_NAME}
	#${CMAKE_CURRENT_SOURCE_DIR}/LightYears/src/main.cpp
#)