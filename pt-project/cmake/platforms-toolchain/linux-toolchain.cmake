# Standard settings
set (CMAKE_SYSTEM_NAME Linux)
set (CMAKE_SYSTEM_VERSION 1)
set (CMAKE_CROSSCOMPILING TRUE)
set (LINUX TRUE)
set (PLATFORM_FOLDER "Unix")

#------ PROJECT DIRECTORIES ------
set(dir ${CMAKE_CURRENT_SOURCE_DIR}/build/${PLATFORM_FOLDER})
set(EXECUTABLE_OUTPUT_PATH ${dir} CACHE PATH "Build directory" FORCE)
set(LIBRARY_OUTPUT_PATH ${dir} CACHE PATH "Build directory" FORCE)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${dir})
set(CMAKE_BUILD_FILES_DIRECTORY ${dir})
set(CMAKE_BUILD_DIRECTORY ${dir})
set(CMAKE_BINARY_DIR  ${dir})
SET(EXECUTABLE_OUTPUT_PATH ${dir})
SET(LIBRARY_OUTPUT_PATH ${dir}lib/)
SET(CMAKE_CACHEFILE_DIR ${dir})

message("CMAKE_BUILD_FILES_DIRECTORY: " ${CMAKE_BUILD_FILES_DIRECTORY})