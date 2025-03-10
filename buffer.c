#include "buffer.h"
#include <string.h>
#include <stdio.h>

uint16_t *buffer_alloc(size_t size){
    uint16_t *buffer = malloc(size * sizeof(uint16_t));
    return buffer;
}

void buffer_free(uint16_t *buffer){
    free(buffer);
}

void buffer_fill(uint16_t *buffer){
    buffer[0] = 'N'; // 1
    buffer[1] = 'P'; // 2
    buffer[2] = 'O'; // 3
    float * flt = malloc(sizeof(float));
    *flt = 3.141593;
    uint32_t * u = malloc(sizeof(uint32_t));
    *u = 28851;
    memcpy(&buffer[3], flt, sizeof(float)); // 7
    memcpy(&buffer[7], u, sizeof(uint32_t)); // 11
    buffer[11] = 'O';
    buffer[12] = 'P';
    buffer[13] = 'N';
    free(flt);
    free(u);
}


void buffer_print(uint16_t *buffer){
    printf("%c\n", (char)buffer[0]);
    printf("%c\n", (char)buffer[1]);
    printf("%c\n", (char)buffer[2]);
    float *flt_ptr = (float *)&buffer[3];
    printf("%f\n", *flt_ptr);
    printf("%i\n", (uint32_t)buffer[7]);
    printf("%c\n", (char)buffer[11]);
    printf("%c\n", (char)buffer[12]);
    printf("%c\n", (char)buffer[13]);
    free(flt_ptr);
}
