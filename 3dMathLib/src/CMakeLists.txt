

cmake_minimum_required(VERSION 3.10)

#set project name
project(Mathority_Library)
#each version will increment with a separate completion of each
#production-build level update

#

#add executable
add_executable(Mathority Mathority.cxx)

#configure headerfiles to pass the version number to the src 
#code
configure_file(3DMathLibConfig.h.in 3DMathLibConfig.h)

#config file written into binary tree ^^

#add directory for include files' path
target_include_directories(Mathority PUBLIC "${PROJECT_BINARY_DIR}/headers/")
