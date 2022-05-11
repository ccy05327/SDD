#include <iostream>

int x;

void looper() {
    for (int i = 0; i < 4; ++i) {
        printf("i is %i \n", i);
        if (i > 2) x++;
    }
}

int main() {
    looper();
    x++;
    return 0;
}

/**
 * gdb debugme
 * run
 *
 * break (line no.)
 * break + conditions
 * next
 * step
 * info stack
 * 
 * watch + variable
 * run
 */