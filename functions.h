#ifndef FUNCTIONS_H
#define FUNCTIONS_H
struct Laptop {
    char brand[30];
    float screenSize;
    float price;
    int stock;
};
void ShowLaptops(struct Laptop *laptopsArray, int arraySize);
void printLaptops(struct Laptop *laptopsArray, int arraySize);
#endif

