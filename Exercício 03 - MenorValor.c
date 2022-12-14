#include<stdio.h>

int main(){
	
	int n,m,l,c,menor;
	printf("\nInforme o número de linhas:\n");
	scanf("%d",&n);
	printf("\nInforme o número de colunas:\n");
	scanf("%d",&m);
	
	int matriz[n][m];
	
	printf("\nDigite os valores da matriz:\n\n");
	
	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
			printf("\nMatriz[%d][%d]=",l,c);
			scanf("%d",&matriz[l][c]);
			if(l==0&c==0){
				    menor=matriz[l][c];
			        }else if(matriz[l][c]<menor){
			       	menor=matriz[l][c];
			}
		}
	}
	
	printf("\nEssa foi a matriz digitada:\n\n");
	for(l=0;l<n;l++){
			for(c=0;c<m;c++){
				printf("%d  ",matriz[l][c]);
		}
			printf("\n");
	}
		printf("\nO menor numero da matriz eh %d.",menor);
	
    			return 0;
}
