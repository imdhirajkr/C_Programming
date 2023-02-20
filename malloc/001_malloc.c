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

/*
--> This program declares a pointer ptr of type int, uses malloc() to allocate memory for a single integer, and assigns the value 42 to the integer.

--> The line ptr = (int*) malloc(sizeof(int)); allocates memory for a single integer using the malloc() function. 
The expression sizeof(int) calculates the number of bytes required to store an integer on the system, 
and the cast (int*) is used to convert the void pointer returned by malloc() into a pointer of type int.

--> The program then checks if the memory allocation was successful by verifying that ptr is not NULL. 
If the allocation fails, an error message is printed and the program is terminated using the exit() function.

--> Next, the program assigns the value 42 to the integer pointed to by ptr using the expression *ptr = 42.

--> Finally, the program prints out the value of the integer using the expression 
printf("The value of the integer is %d", *ptr);, 
and deallocates the memory that was allocated using the free() function.
    
*/
