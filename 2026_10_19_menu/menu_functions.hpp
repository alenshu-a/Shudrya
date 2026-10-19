#pragma once
#include "menu.hpp"


namespace Menu{
    const MenuItem* showMenu(const MenuItem* current);
    const MenuItem* exit(const MenuItem* current);

    const MenuItem* goBack(const MenuItem* current);
    const MenuItem* ruArtistsRublev(const MenuItem* current);
    const MenuItem* ruArtistsPolenov(const MenuItem* current);
    const MenuItem* ruArtistsAivazovsky(const MenuItem* current);
}