# Package Info.
set(GD_NAME "GD")
set(GD_DESCRIPTION "GD is an open source code library for the dynamic creation of images by programmers.")
# Pakcage option.
option(USE_GD ${GD_DESCRIPTION} FALSE)
if (USE_GD)
    add_definitions(-DUSE_GD)
    # Define the repository URL and tag for the GD libraries
    set(GD_URL "https://github.com/libgd/libgd.git")
if(FORCE_UPGRADED_LIBS)
    set(GD_TAG "master")
else()
    set(GD_TAG "gd-2.3.3")
endif()
    set(GD_LIB_LIST "gd png z jpeg freetype m" CACHE STRING "List of modules (separated by a semicolon)")
endif()

find_package(PkgConfig QUIET)
pkg_search_module(GD gd)
# Package data repository.
if(USE_GD)
    set(FETCHCONTENT_QUIET off)
    get_filename_component(gd_base "${CMAKE_CURRENT_SOURCE_DIR}/${THIRD_PARTY}/${GD_NAME}"
        REALPATH BASE_DIR "${CMAKE_BINARY_DIR}")
    set(FETCHCONTENT_BASE_DIR ${gd_base})
    # Declare the GD libraries with their submodules using FetchContent_Declare
    FetchContent_Declare(
        gd
        GIT_REPOSITORY              ${GD_URL}
        GIT_TAG                     ${GD_TAG}
        GIT_PROGRESS   TRUE
        USES_TERMINAL_DOWNLOAD TRUE
        )
    # Check if population has already been performed
    FetchContent_GetProperties(gd)
    string(TOLOWER "${GD_NAME}" lcName)
    if(NOT ${lcName}_POPULATED)
        FetchContent_Populate(${lcName})
#        add_subdirectory(${${lcName}_SOURCE_DIR} ${${lcName}_BINARY_DIR} EXCLUDE_FROM_ALL)
    endif()
    FetchContent_MakeAvailable(gd)
    message("LLLLLL:" ${GD_LIB})
    if (BUILD_SHARED_LIBS)
        set(GD_LINK_LIB ${GD_LIB})
    else()
        set(GD_LINK_LIB ${GD_LIB_STATIC})
    endif()
    foreach(module IN LISTS GD_LIB_LIST)
        list(APPEND LIB_MODULES ${module})
    endforeach()
    list(APPEND LIB_TARGET_INCLUDE_DIRECTORIES ${${lcName}_SOURCE_DIR}/src)
endif()
if(NOT GD_FOUND)
    return()
endif()
