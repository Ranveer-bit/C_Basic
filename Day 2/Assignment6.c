#include <stdio.h>

int main() {
    float principal, rate, time, simpleInterest;

   
    printf("Enter Principal Amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest (in %%): ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

   
    simpleInterest = (principal * rate * time) / 100;

    
    printf("Simple Interest = %f", simpleInterest);

    return 0;
}
