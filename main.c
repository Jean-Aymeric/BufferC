#include <stdio.h>
#include "buffer.h"

int main() {
    Buffer* monBuffer = createBuffer(3);
    writeBuffer(monBuffer, 'J');
    printBuffer(monBuffer);
    writeBuffer(monBuffer, 'A');
    printBuffer(monBuffer);
    writeBuffer(monBuffer, 'D');
    printBuffer(monBuffer);
    printf("%c\n", readBuffer(monBuffer));
    printf("%c\n", readBuffer(monBuffer));
    printf("%c\n", readBuffer(monBuffer));
    printf("%c\n", readBuffer(monBuffer));
    writeBuffer(monBuffer, '*');
    printBuffer(monBuffer);

    return 0;
}
