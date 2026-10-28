#include <iostream>

void calculate_function(
    const int a, 
    const int b, 
    const int* xarr, 
    int* yarr, 
    const int count
);

int main() {
    std::cout << "Введите параметры линейного уравнения a и b: ";
    int a;
    int b;
    std::cin >> a;
    std::cin >> b;

    const int count = 20;
    int xarr[count];
    int yarr[count];
    for(int i = 0; i < count; i++) {
        xarr[i] = i;
    }

    calculate_function(a, b, xarr, yarr, count);

    std::cout << "Функция в точках равна: " << std::endl;
    for(int i = 0; i < count; i++) {
        std::cout 
            << "x = " 
            << xarr[i]
            << " y = "
            << yarr[i]
            << std::endl;
    }
}

void calculate_function(
    const int a, 
    const int b, 
    const int* xarr, 
    int* yarr, 
    const int count
) {
    for(int i = 0; i < count; i++) {
        yarr[i] = a * xarr[i] + b;
    }
}
