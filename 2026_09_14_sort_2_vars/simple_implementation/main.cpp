#include <iostream>

void my_sort(int *arr, const int size);
void print_array(const char* const comment, int *arr, const int size);

int k;
int y = 0;

int main() {
    int size;
    std::cout << "Введите размер массива" << std::endl;
    std::cin >> size;
    std::cout << "Введите элементы массива" << std::endl;
    int* arr = new int[size]; 
    int el;
    for (int i = 0; i < size; i++){
        std::cin >> el;
        arr[i] = el;
    }

    print_array("Первоначальный массив", arr, size);
    my_sort(arr, size);
    print_array("Отсортированный массив", arr,size);

    delete[] arr;
}

void my_sort(int* const arr, const int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }       
    }
}

void print_array(const char* const comment, int *arr, const int size) {
    std::cout << comment << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
}
