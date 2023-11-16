#include <stdio.h>
#include <stdlib.h>
void fn(int ve[2][4]){

	int i,j;
	for(i=0;i<4;i++){
		scanf("%d",&ve[0][i]);
		if(i<3){ve[1][i+1]=ve[0][i];}
		if(i==3){ve[1][0]=ve[0][3];}}	
}
	void ndh(int ve[2][4]){
		int i;
		for(i=0;i<4;i++){
			printf("%d ",ve[1][i]);
		}
	}
int main(){
	int ve[2][4];
	printf("introduzca valor al vector: \n");
	fn(ve);
	printf("el segundo vector es: \n");
	ndh(ve);
}
