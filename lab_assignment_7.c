#include <stdio.h>

void bubbleSort(int array[], int n, int swaps[]) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swaps[j]++;
            }
        }
    }
}

int main() {
    int array[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int n = sizeof(array) / sizeof(array[0]);
    int swaps[n];
    int i;

    for (i = 0; i < n; i++) {
        swaps[i] = 0;
    }

    bubbleSort(array, n, swaps);

    printf("Sorted Array: "); // prints the sorted array
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    printf("Number of swaps for each index:\n"); // prints in order how many swaps each index had until the right number was in it
    for (i = 0; i < n; i++) {
        printf("Index[%d]: %d \n", i, swaps[i]);
    }
    printf("\n");

    return 0;
}