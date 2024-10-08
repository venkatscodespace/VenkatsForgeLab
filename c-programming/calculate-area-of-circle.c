#include <stdio.h>
int main() {
    float pi=3.14;
    float radius;
    printf("Input Radius:");
    scanf("%f",&radius);
    float result=pi*radius*radius;
    printf("%f is the area of the circle with radius %f cm.",result,radius);
}
