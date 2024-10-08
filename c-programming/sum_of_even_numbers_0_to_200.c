// Question from Oxford - Programming imn C - Reema Thareja - Pg 60 - Question 4
#include <stdio.h>
int main() {
    int c=0;
    for (int i=0;i<201;i++) {
        if (i%2==0) {
            c=c+i;
            printf("%d \n",i);
        }
    }
    printf("Sum of even numbers from 0 to 200: %d",c);
    return 0;
}
