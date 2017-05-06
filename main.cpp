#include <iostream>
#include "header.hh"
int main() {
    ntime son;
    son.birthday={2013, "july", 19, 17, 05};
    printf("%d hour %d min, %d %s %d year", son.birthday.hour, son.birthday.min, son.birthday.day, son.birthday.month, son.birthday.year);
    return 0;
}