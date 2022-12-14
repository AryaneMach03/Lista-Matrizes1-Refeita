void BuscaValor(int n,int m,int matriz[n][m]){
	int l,c;
	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
			if(matriz[l][c]==matriz[l][c] && l!=c){
				printf("\n %d",matriz[l][c]);
			}
		}
	}
	
}


#include<stdio.h>

int main(){
int n,m,l,c;
	
	
	printf("\nInforme a quantidade de linhas:\n");
	scanf("%d",&n);
	printf("\nInforme a quantidade de colunas:\n");
	scanf("%d",&m);

	
	int matriz[n][m];
	
	printf("\nInforme os valores da matriz:\n\n");
	
	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
			printf("\nMatriz[%d][%d]=",l,c);
			scanf("%d",&matriz[l][c]);
		}
	}
	
	printf("\nA matriz digitada foi:\n\n");
	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
			printf("%d  ",matriz[l][c]);
		}
		printf("\n");
	}
	BucaValor(n,m,matriz);
	
	
	
    return 0;
}
