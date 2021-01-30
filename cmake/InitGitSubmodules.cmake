find_package(Git QUIET)
if(GIT_FOUND AND EXISTS "${PROJECT_SOURCE_DIR}/.git")
    message(STATUS "Submodule update.")
    execute_process(COMMAND
        ${GIT_EXECUTABLE} submodule update --init --recursive
        WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}
        RESULT_VARIABLE GIT_SUBMODULE_RESULT)
    if (NOT GIT_SUBMODULE_RESULT EQUAL "0")
        message(FATAL_ERROR "git submodule update failed with ${GIT_SUBMODULE_RESULT}")
    endif()
endif()

if(NOT EXISTS "${PROJECT_SOURCE_DIR}/3rd-party/yaml-cpp/CMakeLists.txt")
    message(FATAL_ERROR "Submodules are not downloaded.")
endif()
