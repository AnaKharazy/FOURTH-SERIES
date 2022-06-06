#include <stdio.h>
#define SALE_TAX 0.05

int main() {
    int option;
    double total_purchases, off_price, rebate, Total_rebate, tax, total;
    printf("\n 1.student");
    printf("\n 2.not a student");
    printf("\n choose an option:");
    scanf("%d", &option);

    printf("\n total_purchases-$:");
    scanf("%lf", &total_purchases);
    if (option == 1) {
        rebate = 0.20;
        off_price = total_purchases * rebate;
        Total_rebate = total_purchases - off_price;
        tax = Total_rebate * SALE_TAX;
        total = Total_rebate + tax;

        printf("\n total_purchases $%2.f", total_purchases);
        printf("\n student's rebate( %2.2f%%) $%2.f", (rebate * 100), off_price);
        printf("\n total rebate $%2.f", Total_rebate);
        printf("\n total $%2.f", total);
    } else if (option == 2) {
        tax = total_purchases * SALE_TAX;
        total = total_purchases + tax;
        printf("\n total_purchases $%2.f", total_purchases);
        printf("\n sale tax (%lf%%) $2.f", (SALE_TAX * 100), tax);
        printf("\n total $%2.f", total);

    } else {
        printf("\n Wrong option");

        return 0;
    }

}
