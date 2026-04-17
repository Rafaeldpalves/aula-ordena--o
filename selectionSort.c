#include<stdio.h>

int main(){
	int vetor[10] = {16, 4, 20, 8, 2, 14, 10, 18, 6, 12};
	int i, j, aux, menor;
	

	for(i = 0; i < 10; i++)
	{
		menor = i;
		
		for(j = i + 1; j < 10; j++){
			if(vetor[j]<vetor[menor]){
					menor = j;
			}
			
		}
		aux = vetor[i];
		vetor[i] = vetor[menor];;
		vetor[menor] = aux;
	}
	for(i=0;i<10;i++){
		printf("%d,",vetor[i]);
	}
	return 0;
}