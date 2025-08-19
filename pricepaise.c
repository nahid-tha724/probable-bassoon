#include <stdio.h>

int main() {
    float price;
    int paise;
    printf("Enter the price of the item (in decimal form 15.95): ");
    scanf("%f", &price);
    paise = (int)(price * 100);
    printf("The price in paise is: %d\n", paise);

    return 0;
}
