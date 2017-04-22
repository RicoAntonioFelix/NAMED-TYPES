# This file is a part of the IncludeOS unikernel - www.includeos.org
#
# Copyright 2017 Oslo and Akershus University College of Applied Sciences
# and Alfred Bratterud
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

###############################################################################
# MINIMUM REQUIRED CMAKE VERSION
###############################################################################
cmake_minimum_required(VERSION 2.8.9)

###############################################################################
# PROJECT NAME
###############################################################################
project(named_values CXX)

###############################################################################
# C++ LANGUAGE STANDARD
###############################################################################
set(CMAKE_CXX_STANDARD 14)

###############################################################################
# C++ COMPILER FLAGS
###############################################################################
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -O3")

###############################################################################
# COMPILER INCLUDE PATH
###############################################################################
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

###############################################################################
# TARGET
###############################################################################
add_executable(example example.cpp)

###############################################################################
# TARGET INSTALLATION
###############################################################################
install(TARGETS example DESTINATION ${CMAKE_CURRENT_SOURCE_DIR})
