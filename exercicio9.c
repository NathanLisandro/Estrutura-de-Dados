// O Shell Sort é uma generalização do Insertion Sort que permite a troca de elementos que estão distantes. O algoritmo usa uma 
// sequência de gaps para subdividir a lista em sublistas menores, que são então ordenadas usando o Insertion Sort. 
// O processo é repetido com gaps menores até que o gap seja 1.
#include <stdio.h>

void shellSort(int arr[], int n) {
    for (int gap = n/2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {12, 34, 54, 2, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    shellSort(arr, n);
    printArray(arr, n);
    return 0;
}
