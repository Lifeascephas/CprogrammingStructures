#include <stdio.h>
#include "functions.h"

int main() 
{
    int arraySize = 10; 
    struct Laptop laptopsArray[arraySize];

    /* Show the structure array*/
    ShowLaptops(laptopsArray, arraySize);

    /*Print the structure elements*/
    printLaptops(laptopsArray, arraySize);

    return 0;
}

