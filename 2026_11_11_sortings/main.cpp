#include <chrono>
#include <iostream>

#include "io.hpp"
#include "sort.hpp"
#include "util.hpp"

int main() {
    const int size = 100000;
    int* arr = new int[size];
    sai::generate_array(arr, size);

    {
        std::cout << "Классический пузырёк!" << std::endl;
        //int arr[] = {4, 6, 1, 9, 3, 5};
        //const int arr_size = sizeof(arr) / sizeof(arr[0]);
        //sai::print_array("Неотсортированный массив: ", arr, size);
        
        int* arr1 = new int[size];
        sai::copy_array(arr, arr1, size);
        auto start = std::chrono::high_resolution_clock::now();
        sai::bubble_sort(arr1, size);
        auto end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> sec = end - start;
        std::cout << "Время = " << sec.count() << std::endl;

        //sai::print_array("Отсортированный массив: ", arr, size);
    }
    std::cout << std::endl;
    {
        std::cout << "Оптимизированный пузырёк (способ 1)!" << std::endl;

        //sai::print_array("Неотсортированный массив: ", arr, size);

        int* arr1 = new int[size];
        sai::copy_array(arr, arr1, size);
        auto start = std::chrono::high_resolution_clock::now();
        sai::bubble_sort_opt1(arr1, size);
        auto end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> sec = end - start;
        std::cout << "Время = " << sec.count() << std::endl;

        //sai::print_array("Отсортированный массив: ", arr, arr_size);
    }
    std::cout << std::endl;
    {
        std::cout << "Шейкерная сортировка!" << std::endl;
        //int arr[] = {4, 6, 1, 9, 3, 5};
        //const int arr_size = sizeof(arr) / sizeof(arr[0]);
        //sai::print_array("Неотсортированный массив: ", arr, arr_size);

        int* arr1 = new int[size];
        sai::copy_array(arr, arr1, size);
        auto start = std::chrono::high_resolution_clock::now();
        sai::shaker_sort(arr1, size);
        auto end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> sec = end - start;
        std::cout << "Время = " << sec.count() << std::endl;

        //sai::print_array("Отсортированный массив: ", arr, arr_size);
    }
    std::cout << std::endl;
    {
        std::cout << "Сортировка расчёской!" << std::endl;
        //int arr[] = {4, 6, 1, 9, 3, 5};
        //const int arr_size = sizeof(arr) / sizeof(arr[0]);
        //sai::print_array("Неотсортированный массив: ", arr, arr_size);

        int* arr1 = new int[size];
        sai::copy_array(arr, arr1, size);
        auto start = std::chrono::high_resolution_clock::now();
        sai::comb_sort(arr1, size);
        auto end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> sec = end - start;
        std::cout << "Время = " << sec.count() << std::endl;

        //sai::print_array("Отсортированный массив: ", arr, arr_size);
    }
}
