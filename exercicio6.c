//O Bubble Sort é um algoritmo de ordenação simples que percorre repetidamente a lista a ser ordenada, compara elementos adjacentes e os troca se estiverem na ordem errada. 
//Esse processo é repetido até que a lista esteja ordenada. É chamado de "Bubble Sort" porque os maiores elementos "bubblam" para o topo da lista a cada iteração.
#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    printArray(arr, n);
    return 0;
}
