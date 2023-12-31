#include "bubble_sort.h"

void bubbleSort(int arr[], int n) {
    int temp;
    int swapped;
    
    for (int i = 0; i < n - 1; i++) {
        swapped = 0;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Trocar os elementos arr[j] e arr[j+1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        // Se nenhum elemento foi trocado nesta iteração, a matriz está ordenada
        if (swapped == 0) {
            break;
        }
    }
}
