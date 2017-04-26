#include <stdio.h>
#include "deposit.h"

void correct_data (float* sum, unsigned int* days) {
    float summa;
    unsigned int day;
    printf("Введите сумму, которую хотите положить на счет\n");
    scanf("%f", &summa);
    while (summa < 10000) {
        printf("Сумма вклада не может быть меньше 10000 рублей. Попробуйте еще раз.\n");
        scanf("%f", &summa);
    }
    printf("Окей, теперь введите срок вклада.\n");
    scanf("%d", &day);
    while (day > 365) {
        printf("Срок вклада не может быть отрицательным или превышать 365 дней. Попробуйте еще раз.\n");
        scanf("%d", &day);
    }
    *sum = summa;
    *days = day;
}

float calcularing (float sum, unsigned int days) {
    float income;
    if (sum <= 10000) {
        if (days < 31) {
            income = sum / 10;
            return sum - income;
        }
        else if ((days > 30) && (days < 121)) {
            income = (sum / 100) * 2;
            return sum + income;
        }
        else if ((days > 120) && (days < 241)) {
            income = (sum / 100) * 6;
            return sum + income;
        }
        else {
            income = (sum / 100) * 12;
            return sum + income;
        }
    }
    else {
        if (days < 31) {
            income = sum / 10;
            return sum - income;
        }
        else if ((days > 30) && (days < 121)) {
            income = (sum / 100) * 3;
            return sum + income;
        }
        else if ((days > 120) && (days < 241)) {
            income = (sum / 100) * 8;
            return sum + income;
        }
        else {
            income = (sum / 100) * 15;
            return sum + income;
        }
    }
}
