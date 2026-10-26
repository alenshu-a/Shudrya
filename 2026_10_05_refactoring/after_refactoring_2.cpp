#include <iostream>
#include <cmath>


int main()
{
    const int arr_size = 10;
    int arr[arr_size];
    for (int i = 0; i < arr_size; i++) {
        std::cout << " Введите " << i << " элемент" << std::endl;
        std::cin >> arr[i];
    }

    bool is_increasing = true;
    int i = 0;
    while (is_increasing && (i < arr_size - 1)) {
        if (arr[i] < arr[i + 1]) {
            is_increasing = true;
        } else {
            is_increasing = false;
        }
        i++;
    }

    if (is_increasing) {
        std::cout << "Последовательность возрастающая";
        std::cout << std::endl;
    } else {
        std::cout << "Последовательность не возрастающая";
        std::cout << std::endl;
    }

    return 0;
}

