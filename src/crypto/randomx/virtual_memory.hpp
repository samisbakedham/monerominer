/*

Copyright Walker Industries 2021
 */

 
#pragma once

#include <cstddef>

void* allocExecutableMemory(std::size_t, bool);
void* allocLargePagesMemory(std::size_t);
void freePagedMemory(void*, std::size_t);
