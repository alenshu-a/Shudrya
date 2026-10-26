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


int i1
char c1
int i2
double d
char c1
char* ptr
int i3


