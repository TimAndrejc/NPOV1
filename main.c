#include "buffer.h"
#include <stdio.h>

int main(void) {
    uint16_t * buffer = buffer_alloc(14);
    buffer_fill(buffer);
    printf("%zu\n", sizeof(buffer));
    buffer_print(buffer);





    buffer_free(buffer);
    return 0;
}
