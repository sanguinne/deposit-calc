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

}
