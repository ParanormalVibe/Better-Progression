cmake_minimum_required (VERSION 3.8)
project(BetterProgression)
add_subdirectory(cwmods)
add_library (BetterProgression SHARED "main.cpp")
target_link_libraries (BetterProgression LINK_PUBLIC CWSDK)
target_include_directories (BetterProgression PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/cwmods)
target_include_directories (BetterProgression PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/cwmods/common)
target_include_directories (BetterProgression PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/cwmods/cube)
target_include_directories (BetterProgression PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/cwmods/gfx)
target_include_directories (BetterProgression PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/cwmods/IDA)
target_include_directories (BetterProgression PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/cwmods/msvc)
target_include_directories (BetterProgression PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/cwmods/plasma)