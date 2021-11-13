#ifndef BUFFERC_BUFFER_H
#define BUFFERC_BUFFER_H

typedef struct Buffer {
    char* data;
    int length;
    int readIndex;
    int writeIndex;
    int isEmpty;
} Buffer;

Buffer* createBuffer(int length);
int writeBuffer(Buffer* buffer, char data);
char readBuffer(Buffer* buffer);
void printBuffer(Buffer* buffer);

#endif //BUFFERC_BUFFER_H
