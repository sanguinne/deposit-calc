#include <stdio.h>
#include "deposit.h"

int main()
{
    double sum, income, result, c;
    unsigned int days;
    printf("Введите сумму, которую хотите положить на счет\n");
    scanf("%lf", &sum);
    printf("Окей, теперь введите срок вклада.\n");
    scanf("%d", &days);
    while (correct_data (sum, days) != 0) {
        printf("necorrectno!vvedi summu i dni\n");
        scanf("%lf %d", &sum, &days);
    }
    result = calcularing (sum, days);
    printf("Sum = %lf,days =  %d, result = %lf", sum, days, result);
    return 0;
}
