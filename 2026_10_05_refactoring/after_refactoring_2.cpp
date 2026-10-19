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

    bool isIncreasing = true;
    int i = 0;
    while (isIncreasing && (i < arr_size - 1)) {
        if (arr[i] < arr[i + 1]) {
            isIncreasing = true;
        } else {
            isIncreasing = false;
        }
        i++;
    }

    if (isIncreasing) {
        std::cout << "Последовательность возрастающая";
        std::cout << std::endl;
    } else {
        std::cout << "Последовательность не возрастающая";
        std::cout << std::endl;
    }

    return 0;
}

