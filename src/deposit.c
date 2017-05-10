#include <stdio.h>
#include "deposit.h"

int correct_data (double sum, unsigned int days) {
    if ((sum < 10000) || (days > 365)) {
        return -1;
    }
    return 0;
}

double calcularing (double sum, unsigned int days) {
    double income;
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
