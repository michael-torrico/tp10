#include <stdio.h>
#include <stdlib.h>
void funcion(int nz[15][12]){
    	for(int i=0;i<15;i++){
		for(int j=0;j<12;j++){
			printf("ingrese num: ");
			scanf("%d",&nz[i][j]);
		}
	}
}
void ns(int mr, int sum, int neg){
    	printf("el menor elemto es: %d \n",mr);
	printf("la suma de los elemtos de las 5 primeras filas es: %d \n",sum);
	printf("el total de elementos negativos en las columnas de la quinta a la nueve es: %d",neg);
}

int main(){
int nz[15][12]={0},i,j,neg=0,mr,sum=0;
	funcion(nz);
	for(i=0;i<15;i++){
		for(j=0;j<12;j++){
			printf("%d \t",nz[i][j]);
		}printf("\n");
	}
	for(i=0;i<15;i++){
		for(j=0;j<12;j++){
			if(i<5){sum=sum+nz[i][j];}
			if((j==0)&&(i==0)){mr=nz[0][0]+1;}
			if(nz[i][j]<mr){mr=nz[i][j];}
			if((j>3)&&(j<8)&&(nz[i][j]<0)){neg++;}
		}
	}
    ns(mr,sum,neg);
}