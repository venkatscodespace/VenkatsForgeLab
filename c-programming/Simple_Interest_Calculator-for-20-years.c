#include <stdio.h>

int main() {
    float p,r;
    printf("Enter Principal Amount: ");
    scanf("%f",&p);
    printf("Enter Rate of Interest: ");
    scanf("%f",&r);
    for (int t=1;t<21;t++) {\
        printf("Year %d: %f\n",t,p*r*t);
    }
    return 0;
}
