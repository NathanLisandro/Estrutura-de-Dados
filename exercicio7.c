//O Selection Sort é um algoritmo de ordenação que divide a lista em duas partes: 
//a sublista ordenada e a sublista não ordenada. Ele procura o menor elemento na sublista não ordenada, 
//troca-o com o primeiro elemento da sublista não ordenada e move o limite entre as sublistas ordenada e não ordenada um elemento à frente.
#include <stdio.h>

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        int min_idx = i;
        for (int j = i+1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    printArray(arr, n);
    return 0;
}
