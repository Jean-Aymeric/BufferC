#include "buffer.h"
#include <stdlib.h>
#include <stdio.h>

Buffer* createBuffer(int length) {
    Buffer* buffer = malloc(sizeof(Buffer));
    buffer->length = length;
    buffer->data = malloc(sizeof(char) * length);
    for (int i = 0; i < length; i++) {
        buffer->data[i] = 0;
    }
    buffer->readIndex = 0;
    buffer->writeIndex = 0;
    buffer->isEmpty = 1;
}

int writeBuffer(Buffer* buffer, char data) {
    if ((buffer->readIndex != buffer->writeIndex) || (buffer->isEmpty == 1)) {
        buffer->data[buffer->writeIndex] = data;
        buffer->writeIndex = (buffer->writeIndex + 1) % buffer->length;
        buffer->isEmpty = 0;
        return 0;
    } else {
        return -1;
    }
}

char readBuffer(Buffer* buffer) {
    if ((buffer->readIndex != buffer->writeIndex) || (buffer->isEmpty != 1)) {
        char temp = buffer->data[buffer->readIndex];
        buffer->readIndex = (buffer->readIndex + 1) % buffer->length;
        if (buffer->readIndex == buffer->writeIndex) {
            buffer->isEmpty = 1;
        }
        return temp;
    } else {
        return 0;
    }
}

void printBuffer(Buffer* buffer) {
    for (int i = 0; i < buffer->length; i ++) {
        printf("%c", buffer->data[i]);
    }
    printf("\n");
}

