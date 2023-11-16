#include <stdio.h>
#include <stdlib.h>
void fn(int nz[20][8]){
	int i,j;
	for(i=0;i<20;i++){
		printf("chofer %d ingrese: \n",i+1);
		for(j=0;j<7;j++){
				printf("para dia %d ingrese kilometros recorridos: ",j+1);
				scanf("%d",&nz[i][j]);
			nz[i][7]+=nz[i][j];
		}
	}
}
void funcion(int nz[20][8]){
	int i,j;
	for(i=0;i<20;i++){
		printf("conductor nro %d: \n",i+1);
		for(j=0;j<8;j++){
			if(j<7)printf("dia %d kilometros recorridos: %d \n",i+1,j+1,nz[i][j]);
			if(j==7)printf("total de kimetros recorridos: %d \n",nz[i][j]);
		}printf("\n");
	}

}
int main(){
int nz[20][8]={0};
	fn(nz);
	printf("la tabla es: \n");
	funcion(nz);
}
