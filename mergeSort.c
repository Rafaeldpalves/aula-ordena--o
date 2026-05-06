#include <stdio.h>


void merge(int v[], int inicio, int meio, int fim) {
    int i = inicio, j = meio + 1, k = 0;
    int temp[100]; 

    
    while(i <= meio && j <= fim) {
        if(v[i] < v[j]) {
            temp[k++] = v[i++];
        } else {
            temp[k++] = v[j++];
        }
    }

   
    while(i <= meio) {
        temp[k++] = v[i++];
    }

   
    while(j <= fim) {
        temp[k++] = v[j++];
    }

   
    for(i = inicio, k = 0; i <= fim; i++, k++) {
        v[i] = temp[k];
    }
}


void mergeSort(int v[], int inicio, int fim) {
    if(inicio < fim) {
        int meio = (inicio + fim) / 2;

        mergeSort(v, inicio, meio);   
        mergeSort(v, meio + 1, fim);   

        merge(v, inicio, meio, fim);  
    }
}

int main() {
    int vetor[7] = {4321, 1111, 9999, 3333, 7777, 2222, 5555};

    mergeSort(vetor, 0, 6);

    printf("Vetor ordenado:\n");
    for(int i = 0; i < 7; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}