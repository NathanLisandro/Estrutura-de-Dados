//O Insertion Sort é um algoritmo de ordenação que constrói a 
//lista ordenada elemento por elemento, inserindo cada novo elemento na posição correta em relação aos elementos já ordenados. 
//Este método é eficiente para pequenas quantidades de dados e é frequentemente utilizado como parte de algoritmos mais complexos.
#include <stdio.h>

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr, n);
    printArray(arr, n);
    return 0;
}
