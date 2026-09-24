#include <stdio.h>

int main() {
    float price, total;
    int quantity;

    printf("Enter price: ");
    scanf("%f", &price);

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("Total Bill = %.2f\n", total);

    return 0;
}
