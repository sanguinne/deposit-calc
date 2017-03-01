#include <stdio.h>

int main()
{
    float sum, income, result;
    unsigned int days;
    printf("Введите сумму, которую хотите положить на счет\n");
    scanf("%f", &sum);
    while (sum < 10000) {
        printf("Сумма вклада не может быть меньше 10000 рублей. Попробуйте еще раз.\n");
        scanf("%f", &sum);
    }
    printf("Окей, теперь введите срок вклада.\n");
    scanf("%d", &days);
    while (days > 365) {
        printf("Срок вклада не может быть отрицательным или превышать 365 дней. Попробуйте еще раз.\n");
        scanf("%d", &days);
    }
    if (sum <= 10000) {
        if (days < 31) {
            income = sum / 10;
            result = sum - income;
        }
        else if ((days > 30) && (days < 121)) {
            income = (sum / 100) * 2;
            result = sum + income;
        }
        else if ((days > 120) && (days < 241)) {
            income = (sum / 100) * 6;
            result = sum + income;
        }
        else {
            income = (sum / 100) * 12;
            result = sum + income;
        }
    }
    else {
        if (days < 31) {
            income = sum / 10;
            result = sum - income;
        }
        else if ((days > 30) && (days < 121)) {
            income = (sum / 100) * 3;
            result = sum + income;
        }
        else if ((days > 120) && (days < 241)) {
            income = (sum / 100) * 8;
            result = sum + income;
        }
        else {
            income = (sum / 100) * 15;
            result = sum + income;
        }
    }
    printf("Sum = %f,days =  %d, result = %f", sum, days, result);
    return 0;
}
