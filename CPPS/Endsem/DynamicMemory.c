#include<stdio.h>
#include<stdlib.h>


int fn() {
    int *arr;
    int n = 5;

    // Allocate memory for an array of 5 integers
    arr = (int*)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Exit the program if allocation fails
    }

    // Assign and print values
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;  // Assign values
        printf("%p ", &arr[i]);  // Print values
    }
    printf("\n");
    free(arr);

  // Free the allocated memory
    return 0;
}
int main(){
   
    fn();

    void* arr = calloc(4,4);
    int* a = (int*) arr;
    for (int i = 0; i < 4; i++) {
        a[i] = i + 1;  // Assign values
        *a = 1024;
        printf("%d ", a[i]);  // Print values
    }
    printf("\n");
  
    free(a);
    return 0;

    
}
