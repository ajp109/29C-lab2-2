#include "mbed.h"

int main() {

    int x = 6;
    int array[] = {0,1,2,3,4,5,6,7,8,9};

    printf("x is located at address %p\n", &x);
    printf("array is located at address %p\n", &array);

    while (true) {
        sleep();
    }
}
