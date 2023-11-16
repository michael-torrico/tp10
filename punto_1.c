#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int fun(int nz[4][4]){
	int cont=0,i,j;
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			nz[i][j]=rand()%10;
			if(nz[i][j]==0){cont++;}
		}
	}
	return cont;
}
void fn(int nz[4][4]){
	int i,j;
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("%d \t",nz[i][j]);
		}printf("\n");
	}
}
int main(){	
srand(time(NULL));
int nz[4][4],cont=0;
	cont=fun(nz);
	printf("matriz generada: \n");
	fn(nz);
	printf("la cant de 0s es: %d \n",cont);
}
