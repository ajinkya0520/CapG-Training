
/*
 * Author: Ajinkya Bothe
 * Program: :
 * DOC: 28/05/2024
 * */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ProductSales {
    char product_id[20];
    int max_sales;
};

int compare(const void *a, const void *b) {
    return ((struct ProductSales *)b)->max_sales - ((struct ProductSales *)a)->max_sales;
}

int main() {
    struct ProductSales products[100];
    int num_products = 0;

    // Accepting input
    printf("Enter product records (format: product_id-sales_amount):\n");
    char line[100];
    while (fgets(line, sizeof(line), stdin)) {
        if (line[0] == '\n')
            break;

        char product_id[20];
        int sales;
        sscanf(line, "%19[^-]-%d", product_id, &sales);

        int found = 0;
        for (int i = 0; i < num_products; i++) {
            if (strcmp(products[i].product_id, product_id) == 0) {
                if (sales > products[i].max_sales) {
                    products[i].max_sales = sales;
                }
                found = 1;
                break;
            }
        }

        if (!found) {
            strcpy(products[num_products].product_id, product_id);
            products[num_products].max_sales = sales;
            num_products++;
        }
    }

    qsort(products, num_products, sizeof(struct ProductSales), compare);

    printf("\nProduct ID - Max Sales\n");
    for (int i = 0; i < num_products; i++) {
        printf("%s - %d\n", products[i].product_id, products[i].max_sales);
    }

    return 0;
}

