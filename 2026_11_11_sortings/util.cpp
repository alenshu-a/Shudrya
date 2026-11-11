#include "util.hpp"

#include <cstdlib>
#include <ctime>

namespace sai {
    void copy_array(int* from, int* to, const int size) {
         for (int i = 0; i < size; i++) {
            to[i] = from[i];
        }       
    }

    void generate_array(int* const arr, const int size) {
        std::srand(std::time(nullptr));
        for (int i = 0; i < size; i++) {
            arr[i] = rand() % 1000;
        }
    }
}
