#include <stdio.h>
void swap(int *a, int *b) {
    int temp;
    temp = *a;  
    *a = *b;    
    *b = temp;   
}

int main() {
    int num1, num2;

    printf("Enter 2 numbers you want to swap: ");
    scanf("%d%d", &num1, &num2);

    printf("Before\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    
    swap(&num1, &num2);

    printf("After\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    return 0;
}