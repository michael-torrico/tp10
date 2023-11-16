#include <stdio.h>
#include <stdlib.h>
int funcion(int i, int j, int A[12][12], int B[12][12]){
    	int sum=0;
    	for(i=0;i<12;i++){
	    for(j=0;j<12;j++){
	        if((i==j)&&(A[i][j]==B[i][j])){
	            sum++;
	        }
	    }
	}
    
}
int fn(int sum){
    if(sum==12){
	printf("las diagonales son iguales \n");
	}else{printf("las diagonales no son iguales \n ");}
}
int main(){
	int A[12][12]={0},B[12][12]={0},i,j,sum=0;
	printf("ingrese elemtos a la matriz A12x12: \n");
	for(i=0;i<12;i++){
	    for(j=0;j<12;j++){
	        printf("para fila %d y columna %d ingrese un num: ",i+1,j+1);
	        scanf("%d",&A[i][j]);
	    }
	}
	printf("ingrese elemtos a la matriz B12x12: \n");
	for(i=0;i<12;i++){
	    for(j=0;j<12;j++){
	        printf("para fila %d y columna %d ingrese un num: ",i+1,j+1);
	        scanf("%d",&B[i][j]);
	    }
	}
    sum=funcion(i,j,A,B);
    fn(sum);

}