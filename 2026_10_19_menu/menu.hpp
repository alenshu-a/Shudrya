#pragma once


namespace Menu{
    struct MenuItem {
        const char* const title;
        const MenuItem* (*func)(const MenuItem* current);

        const MenuItem* parent;

        const int childrenCount;
        const MenuItem* const *children;

    };
}
