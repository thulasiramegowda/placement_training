#include <stdio.h>

int main() {
    float kg,kg_free,amt;
    printf("Enter tractor arrives kg:");
    scanf("%f",&kg);
    printf("\nEnter Empty travtor Kg:");
    scanf("%f",&kg_free);
    printf("\nEnter Amount per quintal:");
    scanf("%f",&amt);
    float net_weight = kg - kg_free;
    float net_quintal=(net_weight/100);
    printf("\nNet weight (kg) : %.2f",net_weight);
    printf("\nnet Weight (quintal):%.2f", net_quintal);
    printf("\nAmount payable (Rs):%.2f",(amt*net_quintal));
    return 0;
}