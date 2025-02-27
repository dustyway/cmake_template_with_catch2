#include <library/library.h>
#include "library_internal.h"
#include <stdio.h>

int the_meaning_of_life(void)
{
    return THE_ANSWER;
}

unsigned int Factorial( unsigned int number ) {
    return number == 0 ? 1 : Factorial(number-1)*number;
}