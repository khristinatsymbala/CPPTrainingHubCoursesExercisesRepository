add_library(${LIGHT_YEARS_ENGINE_TARGET_NAME} STATIC

	${CMAKE_CURRENT_SOURCE_DIR}/include/framework/Application.h
	${CMAKE_CURRENT_SOURCE_DIR}/src/framework/Application.cpp

	${CMAKE_CURRENT_SOURCE_DIR}/include/framework/Core.h
	${CMAKE_CURRENT_SOURCE_DIR}/src/framework/Core.cpp

	${CMAKE_CURRENT_SOURCE_DIR}/include/EnteryPoint.h
	${CMAKE_CURRENT_SOURCE_DIR}/src/EnteryPoint.cpp
)

#include header files
target_include_directories(${LIGHT_YEARS_ENGINE_TARGET_NAME} PUBLIC
	${CMAKE_CURRENT_SOURCE_DIR}/include
)