#include <stdio.h>
#include "deposit.h"

int main()
{
    float sum, income, result, c;
    unsigned int days;
    correct_data (&sum, &days);
    result = calcularing (sum, days);
    printf("Sum = %f,days =  %d, result = %f", sum, days, result);
    return 0;
}
