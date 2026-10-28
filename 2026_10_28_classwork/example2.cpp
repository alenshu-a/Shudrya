#include <iostream>

int main() {
    std::cout <<"Введите номер дня недели ";
    int day;
    std::cin >> day;

    switch(day) {
        case 1:
            std::cout << "Понедельник";
            break;
        case 2:
            std::cout << "Вторник";
            break;
        case 3:
            std::cout << "Среда";
            break;
        case 4:
            std::cout << "Четверг";
            break;
        case 5:
            std::cout << "Пятница";
            break;
        case 6:
            std::cout << "Суббота";
            break;
        case 7:
            std::cout << "Воскресенье";
            break;                               
        default:
            std::cout << "Неверный день недели";
            break;
    }
    std::cout << std::endl;
}