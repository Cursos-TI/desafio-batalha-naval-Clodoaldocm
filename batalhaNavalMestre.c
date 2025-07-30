#include <stdio.h>

int main(){
	//  COORDENDAS X E Y INICIAM EM (0,0)
	int tabuleiro[10][10] = {0};
	int navio1[2] = {3, 7}; //coordenadas X e Y do nacio 1 horizontal
	int navio2[2] = {6, 4}; //coordendas X e Y do navio 2 vertical
	int navio3[2] = {1, 2}; // coordenadas X e Y do navio 3, diagonal bara baixo e esquerda
	int navio4[2] = {9, 3}; // coordendas X e Y do navio 4 diagonal para baixo e direita
	int posX, posY;
	int cone[3][5] = {{0,0,5,0,0},{0,5,5,5,0},{5,5,5,5,5}};
	int cruz[3][5] = {{0,0,5,0,0},{5,5,5,5,5},{0,0,5,0,0}};
	int octaedro[3][5] = {{0,0,5,0,0},{0,5,5,5,0},{0,0,5,0,0}};


	//POSICIONA NAVIO 1 
	for(int i=0;i<3;i++){
		posX = navio1[0]+i;
		posY = navio1[1];
		if (posX > 9 || posX < 0 || posY > 9 || posY < 0){
			printf("Navio 1 fora do tabuleiro\n");
			return 0;
		}else{
			tabuleiro[posY][posX] = 3; //posicao X e Y são invertidas ma matriz
		}
	}
	
	//POSICIONA NAVIO 2 
	for(int i=0;i<3;i++){
		posX = navio2[0];
		posY = navio2[1]+i;
		if (posX > 9 || posX < 0 || posY > 9 || posY < 0){
			printf("Navio 2 fora do tabuleiro\n");
			return 0;
		}else{
			if (tabuleiro[posY][posX] == 3){
				printf("Colisão de navios\n");
				return 0;
			}
			tabuleiro[posY][posX] = 3; //posicao X e Y são invertidas ma matriz
		}
	}

	//POSICIONA NAVIO 3 
	for(int i=0;i<3;i++){
		posX = navio3[0]+i;
		posY = navio3[1]+i;
		if (posX > 9 || posX < 0 || posY > 9 || posY < 0){
			printf("Navio 3 fora do tabuleiro\n");
			return 0;
		}else{
			if (tabuleiro[posY][posX] == 3){
				printf("Colisão de navios\n");
				return 0;
			}
			tabuleiro[posY][posX] = 3; //posicao X e Y são invertidas ma matriz
		}
	}

	//POSICIONA NAVIO 4 
	for(int i=0;i<3;i++){
		posX = navio4[0]-i;
		posY = navio4[1]+i;
		if (posX > 9 || posX < 0 || posY > 9 || posY < 0){
			printf("Navio 3 fora do tabuleiro\n");
			return 0;
		}else{
			if (tabuleiro[posY][posX] == 3){
				printf("Colisão de navios\n");
				return 0;
			}
			tabuleiro[posY][posX] = 3; //posicao X e Y são invertidas ma matriz
		}
	}

	//imprime tabuleiro
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			printf("%d\t",tabuleiro[i][j]);
		}	
		printf("\n");

	}

//Cone
      for(int i=0;i<3;i++){
	      for(int j=0;j<5;j++){
	      	printf("%d\t",cone[i][j]);
	      }
	      printf("\n");
      }
	printf("\n");


//cruz
      for(int i=0;i<3;i++){
	      for(int j=0;j<5;j++){
	      	printf("%d\t",cruz[i][j]);
	      }
	      printf("\n");
      }

	printf("\n");
//octaedro
      for(int i=0;i<3;i++){
	      for(int j=0;j<5;j++){
	      	printf("%d\t",octaedro[i][j]);
	      }
	      printf("\n");
      }

      return 0;
}
