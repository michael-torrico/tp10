#include <stdio.h>
#include <stdlib.h>
int funcion(int nz[5][5]){
	int maximus,j,i;
	for(i=0;i<5;i++){
		printf("empleado %d: \n",i+1);
		for(j=0;j<5;j++){
			printf("dia %d ingrese sus ventas: ",j+1);
			scanf("%d",&nz[i][j]);
			if((i==0)&&(j==0)){maximus=nz[i][j]+1;}
			if(nz[i][j]>maximus){maximus=nz[i][j]; }
		}printf("\n");
	}return maximus;
}
	void fn(int nz[5][5]){
		int i,j;
	for(i=0;i<5;i++){
		for(j=0;j<6;j++){
			if(j<5){printf("dia %d ventas: %d \n",j+1,nz[i][j]);}
		}printf("\n");
	}
		
	}
int main(){
	int nz[5][5],maximus;
	maximus=funcion(nz);
	printf("las ventas son: \n");
	fn(nz);
	printf("la venta mayor es: %d \n",maximus);
}
