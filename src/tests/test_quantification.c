#include <stdio.h>

#include "qtables.h"
#include "quantification.h"

int main(void) {
    int16_t matrice_frequentiel[8][8] = {{25, 11, 10, 16, 24, 40, 51, 30},
                                          {12, 12, 14, 19, 26, 58, 60, 55},
                                          {14, 13, 16, 24, 40, 57, 69, 56},
                                          {14, 17, 22, 29, 51, 87, 80, 62},
                                          {18, 22, 37, 56, 68, 109, 103, 77},
                                          {24, 35, 55, 64, 81, 104, 113, 92},
                                          {49, 64, 78, 87, 103, 121, 120, 101},
                                          {72, 92, 95, 98, 112, 100, 103, 99}};

    quantifier(matrice_frequentiel, quantification_table_Y);
    printf("Quantification de Y\n");
    for (size_t i = 0; i < 8; i++) {
        for (size_t j = 0; j < 8; j++) {
            printf("%i | ", matrice_frequentiel[i][j]);
        }
        printf("\n");
    }

    quantifier(matrice_frequentiel, quantification_table_CbCr);
    printf("Quantification de Cb ou Cr\n");
    for (size_t i = 0; i < 8; i++) {
        for (size_t j = 0; j < 8; j++) {
            printf("%i | ", matrice_frequentiel[i][j]);
        }
        printf("\n");
    }
}