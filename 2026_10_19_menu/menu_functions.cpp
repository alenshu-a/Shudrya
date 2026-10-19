#include <iostream>
#include "menu_functions.hpp"
#include "menu.hpp"
#include <cstdlib>

const Menu::MenuItem* Menu::showMenu(const Menu::MenuItem* current){
    std::cout << "Меню" << std::endl;
    for ( int i = 1; i < current->childrenCount; i++ ){
        std::cout << current->children[i]->title << std::endl;
    }

    std::cout << current->children[0]->title << std::endl;
    std::cout << "Выберите > ";

    int userInput;

    std::cin >> userInput;

    return current->children[userInput];
}

const Menu::MenuItem* Menu::exit(const Menu::MenuItem* current){
    std::exit(0);
    return nullptr;
}

const Menu::MenuItem* Menu::goBack(const Menu::MenuItem* current){
    return current->parent->parent;
}

const Menu::MenuItem* Menu::ruArtistsRublev(const Menu::MenuItem* current){
    return current->parent;
}

const Menu::MenuItem* Menu::ruArtistsPolenov(const Menu::MenuItem* current){ 
    return current->parent;
}

const Menu::MenuItem* Menu::ruArtistsAivazovsky(const Menu::MenuItem* current){
    return current->parent;
}