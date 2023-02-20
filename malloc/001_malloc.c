#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    ptr = (int*) malloc(sizeof(int));
    if (ptr == NULL) {
        printf("Error: Memory not allocated.");
        exit(0);
    }
    *ptr = 42;
    printf("The value of the integer is %d", *ptr);
    free(ptr);
    return 0;
}
