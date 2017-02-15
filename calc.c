#include <stdio.h>

int main()
{
    int sum, days;
    printf("Введите сумму вклада:\n");
    scanf("%d", &sum);
    printf("Введите срок:\n");
    scanf("%d", &days);
    if (sum < 1000) {
        printf("Сумма вклада не может быть меньше 1000");
    }
    if (days > 365) {
        printf("Срок вклада не может превышать 365 дней");
    }
    
    return 0;
} 