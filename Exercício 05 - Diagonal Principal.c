#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int n=0,m=0,l,c,valorAleatorio;
  
  do{
    
		if(n>=101 && m>=101){
			printf("\nO tamanho maximo eh 100! \nTente outra vez\n\n");
			printf("\nDigite o numero de linhas:\n");
    	scanf("%d",&n);
    	printf("\nDigite o numero de colunas:\n");
      scanf("%d",&m);
		}else{
			printf("\nDigite o numero de linhas:\n");
    	scanf("%d",&n);
	    printf("\nDigite o numero de colunas:\n");
	    scanf("%d",&m);
		}
	
	}while(n>=101 && m>=101);
  
	
	
	int matriz[n][m];
	
	printf("\nA matriz gerada eh:\n\n");
	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
			printf("%d  ",matriz[l][c]);
		}
		printf("\n");
	}
  printf("\n\nA diagonal Principal dessa matriz eh :");
  	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
      if(l==c){
        printf("%d ",matriz[l][c]);
      }
			
		}

	}
    return 0;
}
