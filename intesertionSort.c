#include<stdio.h>

int main(){
	int vetor[10] = {16, 4, 20, 8, 2, 14, 10, 18, 6, 12};
	int i, j, aux, num;
	
	for(i = 1; i<10; i++){
		num = vetor[i];
		j = i-1;
		while(j >=0 && vetor[j]>num){
			vetor[j + 1] = vetor[j];
			j--;
			
			}
			
			vetor[j + 1] = num;
		}
	for(i=0; i<10; i++){
		printf("%d ",vetor[i]);
	}
	return 0;
}