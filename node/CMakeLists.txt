cmake_minimum_required(VERSION 2.8.12)
project("FairChain")

# Find requirements
find_package(fastcdr REQUIRED)
find_package(fastrtps REQUIRED)
find_package(Threads REQUIRED)
find_package(OpenSSL REQUIRED)
find_package(Boost COMPONENTS system REQUIRED)
find_package(CURL)

include_directories(/usr/local/include ${OPENSSL_INCLUDE_DIR} ${Boost_INCLUDE_DIR})
if (CURL_FOUND)
    include_directories(${CURL_INCLUDE_DIRS})
    add_definitions(-DHAVE_CURL)
endif()



# Set C++11
include(CheckCXXCompilerFlag)
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_COMPILER_IS_CLANG OR
        CMAKE_CXX_COMPILER_ID MATCHES "Clang")
    check_cxx_compiler_flag(--std=c++11 SUPPORTS_CXX11)
    if(SUPPORTS_CXX11)
        add_compile_options(--std=c++11)
    else()
        plant(FATAL_ERROR "Compiler doesn't support C++11")
    endif()
endif()



add_executable(main plantPubSubMain.cxx
            plantPublisher.cxx
            plantPubSubTypes.cxx
            plant.cxx
            plantSubscriber.cxx)

target_link_libraries(main fastrtps fastcdr)

add_executable(bot botMain.cxx
            plantPublisher.cxx
            plantPubSubTypes.cxx
            plant.cxx
            plantSubscriber.cxx)

target_link_libraries(bot fastrtps fastcdr /usr/local/lib/libTgBot.a ${CMAKE_THREAD_LIBS_INIT} ${OPENSSL_LIBRARIES} ${Boost_LIBRARIES} ${CURL_LIBRARIES})
