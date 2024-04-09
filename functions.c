#include <stdio.h>
#include "functions.h"
/*Function to Show the structure array*/
void ShowLaptops(struct Laptop *laptopsArray, int arraySize) {
    for (int i = 0; i < arraySize; i++) 
    {
        printf("Enter details for Laptop %d:\n", i + 1);
        printf("Brand: ");
        scanf("%s", laptopsArray[i].brand);
        printf("Screen Size (inches): ");
        scanf("%f", &laptopsArray[i].screenSize);
        printf("Price: ");
        scanf("%f", &laptopsArray[i].price);
        printf("Stock: ");
        scanf("%d", &laptopsArray[i].stock);
    }
}

/* Function to print the structure elements*/
void printLaptops(struct Laptop *laptopsArray, int arraySize) {
    printf("\nLaptop Details:\n");
    for (int i = 0; i < arraySize; i++) 
    {
    
        printf("Laptop %d:\n", i + 1);
        printf("Brand: %s\n", laptopsArray[i].brand);
        printf("Screen Size: %.1f inches\n", laptopsArray[i].screenSize);
        printf("Price: $%.2f\n", laptopsArray[i].price);
        printf("Stock: %d\n", laptopsArray[i].stock);
    }
}

