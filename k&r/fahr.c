#include<stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

void printFahrToCelc() {
    int fahr;
    for(fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
       printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }
}

void printReverseFahrToCelc() {
    int fahr;
    for(fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP) {
       printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }
}

void printCelcToFahr() {
    int celcius;
    for(celcius = LOWER; celcius <= UPPER; celcius = celcius + STEP) {
       printf("%3d %6.1f\n", celcius, (9.0 / 5.0) * celcius + 32);
    }
}

void printHeaderOfFahr() {
    printf("----------Translate fahrenheit to celcius-----------\n");
}

void printHeaderOfCelc() {
    printf("----------Translate celcius to fahrenheit-----------\n");
}


int main() {
    printHeaderOfFahr();
    printFahrToCelc();
    
    printHeaderOfCelc();
    printCelcToFahr();

    printHeaderOfFahr();
    printReverseFahrToCelc();
}
