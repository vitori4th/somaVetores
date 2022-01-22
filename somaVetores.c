/* Faça um programa que leia a dimensão n de um vetor, em seguida aloca dinâmicamente dois vetores 
do tipo double de dimensão n, faz a leitura de cada vetor e imprime o resultado da soma dos dois vetores*/

#include<stdio.h>
#include<stdlib.h>

double * ler_vetor( int n){
	double *vetor;
	vetor =  malloc( n*sizeof(double));
	int i;
	
	for(i=0;i<n;i++){
		vetor[i]=n*i;
	}
	
	return vetor;
}

int soma_vetores(double *v1, double *v2,int n){
	int soma=0,i;
	
	
	for(i=0;i<n;i++){
		soma=v1[i]+v2[i];
	}
	
	return soma;
}

int main(){
	int n, soma;
	double *v1, *v2;
	printf("Dimensão do vetor:");
	scanf("%d",&n);
	
	
	v1=ler_vetor(n);
	v2=ler_vetor(n);

	
	soma= soma_vetores(v1,v2,n);
	
	printf("Soma:%d\n", soma);
	
	free(v1);
	free(v2);
	
	
	return 0;
	
} 
