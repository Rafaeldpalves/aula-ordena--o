#include <stdio.h>


int particao(int v[], int inicio, int fim) {
    int pivo = v[fim]; 
    int i = inicio;
    int aux;

    for(int j = inicio; j < fim; j++) {
        if(v[j] < pivo) {
            aux = v[j];
            v[j] = v[i];
            v[i] = aux;
            i++;
        }
    }

    
    aux = v[i];
    v[i] = v[fim];
    v[fim] = aux;

    return i;
}


void quickSort(int v[], int inicio, int fim) {
    if(inicio < fim) {
        int p = particao(v, inicio, fim);

        quickSort(v, inicio, p - 1); 
        quickSort(v, p + 1, fim);    
    }
}

int main() {
    int vetor[7] = {4321, 1111, 9999, 3333, 7777, 2222, 5555};

    quickSort(vetor, 0, 6);

    printf("Vetor ordenado:\n");
    for(int i = 0; i < 7; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}