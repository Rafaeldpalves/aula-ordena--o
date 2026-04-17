#include<stdio.h>

int main(){
	int vetor[10] = {16, 4, 20, 8, 2, 14, 10, 18, 6, 12};
	int i, j, aux;
	

	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++){
			if(vetor[j]>vetor[j+1]){
				aux = vetor[j];
				vetor[j] = vetor[j+1];;
				vetor[j + 1] = aux;
			}
		}
		
	}
	for(i=0;i<10;i++){
		printf("%d,",vetor[i]);
	}
	return 0;
}