#include "buffer.h"
#include <string.h>
#include <stdio.h>

uint16_t *buffer_alloc(size_t size){
    uint16_t *buffer = malloc(size);
    return buffer;
}

void buffer_free(uint16_t *buffer){
    free(buffer);
}

void buffer_fill(uint16_t *buffer){
    ((char*)buffer)[0] = 'N'; // 1
    ((char*)buffer)[1] = 'P'; // 2
    ((char*)buffer)[2] = 'O'; // 3
    float * flt = malloc(sizeof(float));
    *flt = 3.141593;
    uint32_t * u = malloc(sizeof(uint32_t));
    *u = 28851;
    memcpy(&((char*)buffer)[3], flt, sizeof(float)); // 7
    memcpy(&((char*)buffer)[7], u, sizeof(uint32_t)); // 11
    ((char*)buffer)[11] = 'O';
    ((char*)buffer)[12] = 'P';
    ((char*)buffer)[13] = 'N';
    free(flt);
    free(u);
}


void buffer_print(uint16_t *buffer){
    printf("%c\n", ((char*)buffer)[0]);
    printf("%c\n", ((char*)buffer)[1]);
    printf("%c\n", ((char*)buffer)[2]);
    float *flt_ptr = (float *)&((char*)buffer)[3];
    printf("%f\n", *flt_ptr);
    uint32_t *u_ptr = (uint32_t*)&((char*)buffer)[7];
    printf("%i\n", *u_ptr);
    printf("%c\n", ((char*)buffer)[11]);
    printf("%c\n", ((char*)buffer)[12]);
    printf("%c\n", ((char*)buffer)[13]);
}
