#include <stdio.h>

int main(){

	int tabuleiro[10][10] = {0};
	int navio1[2] = {3, 5}; //coordenadas X e Y do nacio 1 horizontal
	int navio2[2] = {6, 4}; //coordendas X e Y do navio 2 vertical
	
	//verifica se o navio 1 está dentro do tabuleiro
	if(navio1[0]>=0 && (navio1[0]+2) <=10 && navio1[1]>=0 && (navio1[1]+2)<=10){
		printf("Posição do navio 1 OK!\n");
	}else{
		printf("Navio 1 fora de posição");
		return 0;
	}

	//verifica se o navio 2 está dentro do tabuleiro
	if(navio2[0]>=0 && (navio2[0]+2) <=10 && navio2[1]>=0 && (navio2[1]+2)<=10){
		printf("Posição do navio 2 OK!\n");
	}else{
		printf("Navio 1 fora de posição");
		return 0;
	}

	//verifica se não há colisão entre os navios
	//Navio é horizontal, posicao Y não muda
	//navio 2 é vertical, posição X não muda
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if( ((navio1[0]+i) == (navio2[0])) && ((navio1[1]) == (navio2[1]+j)) ){
				printf("Colisão na posição [%d][%d]\n",navio1[0]+i,navio1[1]);
				return 0;
			}

		}
	}
		

	for(int i=1;i<11;i++){
		for(int j=1;j<11;j++){
			if( (i==navio1[1]) && (j==navio1[0] || j==(navio1[0]+1) || j==(navio1[0]+2) ) ){
				printf("%c\t",'X');
			}else if((j==navio2[0]) && (i==navio2[1] || i==(navio2[1]+1) || i==(navio2[1]+2) ) ){
				printf("%c\t",'Y');
			}else{
				printf("%d\t",tabuleiro[i-1][j-1]);
			}
		}
		printf("\n");
	}

	return 0;
}
