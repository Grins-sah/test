#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

int main() {
    int* ptr = (int*)malloc(50 * sizeof(int)); // Allocates memory for 50 integers
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("The usable size of ptr is %ld bytes\n", malloc_usable_size(ptr)); // Display usable size
    free(ptr); // Free allocated memory
    return 0;
}
