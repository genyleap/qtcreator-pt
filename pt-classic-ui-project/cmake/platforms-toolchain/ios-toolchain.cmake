# Standard settings
set (CMAKE_SYSTEM_NAME iOS)
set (CMAKE_SYSTEM_VERSION 1)
set(CMAKE_CROSSCOMPILING TRUE)
set (IOS TRUE)
set (PLATFORM_FOLDER "iOS")

if(NOT DEFINED IOS_BITCODE) # check xcode/clang version? since xcode 7
  set(IOS_BITCODE 1)
endif()
set(IOS_BITCODE_MARKER 0)

set(OS_LIBS "-framework IOKit -framework Foundation")

#------ PROJECT DIRECTORIES ------
#set(dir ${CMAKE_CURRENT_SOURCE_DIR}/build/iOS)
#set(EXECUTABLE_OUTPUT_PATH ${dir} CACHE PATH "Build directory" FORCE)
#set(LIBRARY_OUTPUT_PATH ${dir} CACHE PATH "Build directory" FORCE)
#set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${dir})
#set(CMAKE_BUILD_FILES_DIRECTORY ${dir})
#set(CMAKE_BUILD_DIRECTORY ${dir})
#set(CMAKE_BINARY_DIR  ${dir})
#SET(EXECUTABLE_OUTPUT_PATH ${dir})
#SET(LIBRARY_OUTPUT_PATH ${dir}lib)
#SET(CMAKE_CACHEFILE_DIR ${dir})

#message("CMAKE_BUILD_FILES_DIRECTORY: " ${CMAKE_BUILD_FILES_DIRECTORY})
