#include "menu_items.hpp"
#include "menu.hpp"
#include "menu_functions.hpp"

const Menu::MenuItem Menu::RU_ARTISTS_RUBLEV = {"1 - Андрей Иванов сын Рублев", Menu::ruArtistsRublev, &Menu::ART_RU_ARTISTS};
const Menu::MenuItem Menu::RU_ARTISTS_POLENOV = {"2 - Василий Дмитриевич Поленов", Menu::ruArtistsPolenov, &Menu::ART_RU_ARTISTS};
const Menu::MenuItem Menu::RU_ARTISTS_AIVAZOVSKY = {"3 - Иван Константинович Айвазовский", Menu::ruArtistsAivazovsky, &Menu::ART_RU_ARTISTS};
const Menu::MenuItem Menu::RU_ARTISTS_GO_BACK = {"0 - Вернуться в предыдущее меню", Menu::goBack, &Menu::ART_RU_ARTISTS};

namespace{
    const Menu::MenuItem* ruArtistsChildren[] = {
        &Menu::RU_ARTISTS_GO_BACK,
        &Menu::RU_ARTISTS_RUBLEV,
        &Menu::RU_ARTISTS_POLENOV,
        &Menu::RU_ARTISTS_AIVAZOVSKY
    };

    const int ruArtistsSize = sizeof(ruArtistsChildren) / sizeof(ruArtistsChildren[0]);
}

const Menu::MenuItem Menu::ART_RU_ARTISTS = {"1 - Русские художники", Menu::showMenu, &Menu::ART, ruArtistsSize,ruArtistsChildren};
const Menu::MenuItem Menu::ART_RU_MUSICIANS = {"2 - Русские музыканты", nullptr, &Menu::ART};
const Menu::MenuItem Menu::ART_GO_BACK = {"0 - Выйти в главное меню", Menu::goBack, &Menu::ART};

namespace{
    const Menu::MenuItem* artChildren[] = {
        &Menu::ART_GO_BACK,
        &Menu::ART_RU_ARTISTS,
        &Menu::ART_RU_MUSICIANS
    };

    const int artSize = sizeof(artChildren) / sizeof(artChildren[0]);
}

const Menu::MenuItem Menu::ART = {"1 - Искусство России", Menu::showMenu, &Menu::MAIN, artSize, artChildren};
const Menu::MenuItem Menu::EXIT = {"0 - Выйти", Menu::exit, &Menu::MAIN};

namespace {
    const Menu::MenuItem* mainChildren[] = {
        &Menu::EXIT,
        &Menu::ART
    };

    const int mainSize = sizeof(mainChildren) / sizeof(mainChildren[0]);
}

const Menu::MenuItem Menu::MAIN = {nullptr, Menu::showMenu, nullptr, mainSize, mainChildren};