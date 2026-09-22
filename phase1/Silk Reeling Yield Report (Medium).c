#include <stdio.h>

int main() {
    float cocoon_in,renditta,amt,wage;
    printf("Enter Cocoon Input:");
    scanf("%f",&cocoon_in);
    printf("\nEnter Renditta:");
    scanf("%f",&renditta);
    printf("\nEnter Amount(kg):");
    scanf("%f",&amt);
    printf("\nEnter wage:");
    scanf("%f",&wage);
    float raw=cocoon_in/renditta,revenue=raw*amt,wage_cost = wage*cocoon_in;
    float margin = revenue-wage_cost;
    printf("\nRaw silk(kg):%.2f",raw);
    printf("\nGross revenue(rs):%.2f",revenue);
    printf("\nwage cost(kg):%.2f",wage_cost);
    printf("\nNet margin(kg):%.2f",margin);
    return 0;
}