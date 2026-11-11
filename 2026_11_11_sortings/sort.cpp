#include "sort.hpp"

namespace sai {
    void bubble_sort(int* const arr, const int size) {
        for(int i = 0; i < size - 1; i++) {
            for(int j = 0; j < size - i - 1; j++) {
                if (arr[j] > arr[j+1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }

    void bubble_sort_opt1(int* const arr, const int size) {
        bool is_swapped;
        int i = 0;
        do {
            is_swapped = false;
            for (int j = 0; j < size - i - 1; j++) {
                if (arr[j] > arr[j+1]) {
                    int t = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = t;
                    is_swapped = true;
                }
            }
            i++;
        } while (is_swapped);
    }

    void shaker_sort(int* const arr, const int size) {
        int begin = 0;
        int end = size - 1 ;
        bool is_swapped = true;
        while (is_swapped) {
            is_swapped = false;
            for (int i = begin; i < end; i++) {
                if (arr[i] > arr[i + 1]) {
                    int t = arr[i];
                    arr[i] = arr[i + 1];
                    arr[i + 1] = t;
                    is_swapped = true;

                }
            }
            end--;

            if (!is_swapped) break;
            
            is_swapped = false;
            for (int i = end; i > begin; i--) {
                if (arr[i] < arr[i - 1]){
                    int t = arr[i];
                    arr[i] = arr[i - 1];
                    arr[i - 1] = t;
                    is_swapped = true;
                }
            }
            begin++;
        }
    }
    void comb_sort(int* const arr, const int size){
        double factor = 1.25;
        int step =size - 1;
        bool is_swapped = true ;
        while (step>1 || is_swapped){
            is_swapped=false;
            for (int i=0; i+ step<size; i++) {
                if (arr[i] > arr[i + step]) {
                    int t = arr[i];
                    arr[i] = arr[i + step];
                    arr[i + step] = t;
                    is_swapped = true;
                }
            }
            if (step>1) {
                step/=factor;
            }
        }

    }
}
