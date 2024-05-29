

/*
 * Author: Ajinkya Bothe
 * Program: Define a structure to hold product inventory information, including the product ID and quantity. Write a program that accepts multiple product records (product_ID and quantity) and prints the total quantity for each product in decreasing order of total quantity. In case there are multiple records for the same product, the program should sum up the quantities.
 * DOC: 28/05/2024
 * */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ProductInventory {
    char product_id[20];
    int quantity;
};

int compare(const void *a, const void *b) {
    return ((struct ProductInventory *)b)->quantity - ((struct ProductInventory *)a)->quantity;
}

int main() {
    struct ProductInventory products[100];
    int num_products = 0;

    printf("Enter product records (format: product_id-product_quantity):\n");
    char line[100];
    while (fgets(line, sizeof(line), stdin)) {
        if (line[0] == '\n')
            break;

        char product_id[20];
        int quantity;
        sscanf(line, "%19[^-]-%d", product_id, &quantity);

        int found = 0;
        for (int i = 0; i < num_products; i++) {
            if (strcmp(products[i].product_id, product_id) == 0){
                products[i].quantity += quantity;
                found = 1;
                break;
            }
        }

        if (!found) {
            strcpy(products[num_products].product_id, product_id);
            products[num_products].quantity = quantity;
            num_products++;
        }
    }

    qsort(products, num_products, sizeof(struct ProductInventory), compare);

    printf("\nProduct ID - Product Quantity\n");
    for (int i = 0; i < num_products; i++) {
        printf("%s - %d\n", products[i].product_id, products[i].quantity);
    }

    return 0;
}

