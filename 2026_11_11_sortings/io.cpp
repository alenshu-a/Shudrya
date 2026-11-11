#include "io.hpp"

#include <iostream>

namespace sai {
    void print_array(const char* const comment, const int* const arr, const int size) {
        std::cout << comment;
        for (int i = 0; i < size; i++) {
            std::cout << arr[i] << ", ";
        }
        std::cout << std::endl;
    }
}
