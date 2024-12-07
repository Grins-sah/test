#include<stdio.h>
int main(){
    printf("Enter The Temperature in Fahrenheit : ");
    float f;
    scanf("%f",&f);
    float Celsius = (f-32)*5/9;
    printf("\nThe temperature in celsius is : ");
    printf("%f",Celsius);
    return 0;
}